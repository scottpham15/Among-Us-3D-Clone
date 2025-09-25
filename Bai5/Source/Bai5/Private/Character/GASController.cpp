// Fill out your copyright notice in the Description page of Project Settings.


#include "Character/GASController.h"
#include "EnhancedInputComponent.h"
#include "EnhancedInputSubsystems.h"
#include "Bai5/Bai5Character.h"
#include "Bai5/Wall.h"
#include "Kismet/GameplayStatics.h"


class UEnhancedInputComponent;

AGASController::AGASController(): DefautMappingContext(nullptr), MoveAction(nullptr), bMoveToMouseCursor(1)
{
	bShowMouseCursor = true;
	DefaultMouseCursor = EMouseCursor::Default;
	FollowTime = 0.f;
}

void AGASController::BeginPlay()
{
	Super::BeginPlay();
	for (int i = 0; i < Max; i++)
		for (int j = 0; j < Max; j++)
		{
			FoW[i][j] = true;
			Change[i][j] = false;
		}
	MyCanvass = Cast<AMyCanvas>(UGameplayStatics::GetActorOfClass(GetWorld(), AMyCanvas::StaticClass()));
}

void AGASController::Tick(float DeltaTime)
{
	Super::Tick(DeltaTime);
	if (IsValid(GetPawn()))
    {
    	OldPosition = NewPosition;
    	NewPosition = GetPawn()->GetActorLocation();
    
    	if ((NewPosition - OldPosition).Length() > 1.0f)
    	{
    		int Min_x = 1000000, Min_y = 1000000;
    		int Max_x = -1000000, Max_y = -1000000;
    	
    		int h = NewPosition.X;
    		int delta = 4;
    		h /= 100;
    		if (h - delta < Min_x)
    			Min_x = h - delta;
    		if (h + delta > Max_x)
    			Max_x = h + delta;
    		int k = NewPosition.Y;
    		k /= 100;
    		if (k - delta < Min_y)
    			Min_y = k - delta;
    		if (k + delta > Max_y)
    			Max_y = k + delta;

    		h = OldPosition.X;
    		h /= 100;
    		if (h - delta < Min_x)
    			Min_x = h - delta;
    		if (h + delta > Max_x)
    			Max_x = h + delta;
    		k = OldPosition.Y;
    		k /= 100;
    		if (k - delta < Min_y)
    			Min_y = k - delta;
    		if (k + delta > Max_y)
    			Max_y = k + delta;

    		Min_x = (Min_x < 1) ? 1 : Min_x;
    		Max_x = (Max_x >= Max) ? Max - 1 : Max_x;

    		Min_y = (Min_y < 1) ? 1 : Min_y;
    		Max_y = (Max_y >= Max) ? Max - 1 : Max_y;
    	
    		TArray<FHitResult> HitResults;
    		GetWorld()->SweepMultiByChannel(HitResults, NewPosition, NewPosition, FQuat::Identity,
    			ECC_Visibility, FCollisionShape::MakeSphere(400.f));
    		TArray<FMiniEle> MyEles;
    		for (auto Hit : HitResults)
    		{
    			AWall* Object = Cast<AWall>(Hit.GetActor());
    			if (IsValid(Object))
    			{
    				float Center_X = Object->GetActorLocation().X;
    				float Center_Y = Object->GetActorLocation().Y;
    				float x1 = NewPosition.X;
    				float y1 = NewPosition.Y;
    	
    				FVector EndPoint1 = Object->GetActorTransform().TransformPosition({50.f,50.f,0});
    				FVector EndPoint2 = Object->GetActorTransform().TransformPosition({-50.f,50.f,0});
    				FVector EndPoint3 = Object->GetActorTransform().TransformPosition({50.f,-50.f,0});
    				FVector EndPoint4 = Object->GetActorTransform().TransformPosition({-50.f,-50.f,0});
    				
    				FVector PO = Object->GetActorLocation() - NewPosition; PO.Normalize();
    				FVector PA = EndPoint1 - NewPosition; PA.Normalize();
    				FVector PB = EndPoint2 - NewPosition; PB.Normalize();
    				FVector PC = EndPoint3 - NewPosition; PC.Normalize();
    				FVector PD = EndPoint4 - NewPosition; PD.Normalize();
    				FVector MaxAngleVector = PA, Point1 = EndPoint1, Point2 = EndPoint1;
    				float d2, d3, d4, MaxAngle = FVector::DotProduct(PO, PA);
    				d2 = FVector::DotProduct(PO, PB);
    				if (d2 < MaxAngle)
    				{
    					MaxAngle = d2;
    					MaxAngleVector = PB;
    					Point1 = EndPoint2;
    				}
    				d3 = FVector::DotProduct(PO, PC);
    				if (d3 < MaxAngle)
    				{
    					MaxAngle = d3;
    					MaxAngleVector = PC;
    					Point1 = EndPoint3;
    				}
    				d4 = FVector::DotProduct(PO, PD);
    				if (d4 < MaxAngle)
    				{
    					MaxAngle = d4;
    					MaxAngleVector = PD;
    					Point1 = EndPoint4;
    				}
    				
    				MaxAngle = FVector::DotProduct(MaxAngleVector, PA);
    				d2 = FVector::DotProduct(MaxAngleVector, PB);
    				if (d2 < MaxAngle)
    				{
    					MaxAngle = d2;
    					Point2 = EndPoint2;
    				}
    				d3 = FVector::DotProduct(MaxAngleVector, PC);
    				if (d3 < MaxAngle)
    				{
    					MaxAngle = d3;
    					Point2 = EndPoint3;
    				}
    				d4 = FVector::DotProduct(MaxAngleVector, PD);
    				if (d4 < MaxAngle)
    				{
    					MaxAngle = d4;
    					Point2 = EndPoint4;
    				}
    				// DrawDebugLine(GetWorld(), NewPosition, Point1, FColor::Blue, false, 1.0f);
    				// DrawDebugLine(GetWorld(), NewPosition, Point2, FColor::Blue, false, 1.0f);
    				
    				float A1, B1, C1;
    				A1 = y1 - Point1.Y;
    				B1 = Point1.X - x1;
    				C1 = - (y1 - Point1.Y) * x1 - (Point1.X - x1) * y1;
    		
    				float A2, B2, C2;
    				A2 = y1 - Point2.Y;
    				B2 = Point2.X - x1;
    				C2 = - (y1 - Point2.Y) * x1 - (Point2.X - x1) * y1;
    				
    				float I1, I2;
    				int SignOfCenter = 0;
    				I1 = A1*Center_X + B1*Center_Y + C1;
    				I2 = A2*Center_X + B2*Center_Y + C2;
    				
    				if (I1 > 0)
    				{
    					if (I2 > 0)
    						SignOfCenter = 1;
    					else
    						SignOfCenter = 2;
    				}
    				else
    				{
    					if (I2 > 0)
    						SignOfCenter = 3;
    					else
    						SignOfCenter = 4;
    				}

    				FVector WallDirection = Point2 - Point1;
    
    				// Create a normal vector to the wall (in 2D space, assuming Z is up)
    				// This creates a vector perpendicular to the wall in the XY plane
    				FVector WallNormal(WallDirection.Y, -WallDirection.X, 0.0f);
    				WallNormal.Normalize();
    
    				// Calculate the signed distance from player to the wall
    				float PlayerSide = FVector::DotProduct(NewPosition - Point1, WallNormal);
    				MyEles.Add(FMiniEle(Center_X, Center_Y, A1, B1, C1, A2, B2, C2, SignOfCenter, PlayerSide, Point1, WallNormal));
    			}
    		}
    		
    		float x = -50.f + Min_x * 100.f, y;
    		for (int i = Min_x; i <= Max_x; i++)
    		{
    			x += 100.f;
    			y = -50.f + Min_y * 100.f;
    			for (int j = Min_y; j <= Max_y; j++)
    			{
    				y += 100.f;
    				float Distance = (x - NewPosition.X) * (x - NewPosition.X) + (y - NewPosition.Y) * (y - NewPosition.Y);
    				
    				if (Distance < 160000.f)
    				{
    					if (FoW[i][j])
    					{
    						Change[i][j] = true;
    						FoW[i][j] = false;
    					}
    					else
    					{
    						Change[i][j] = false;
    					}
    				}
    				else
    				{
    					if (!FoW[i][j])
    					{
    						Change[i][j] = true;
    						FoW[i][j] = true;
    					}
    					else
    					{
    						Change[i][j] = false;
    					}
    				}

    				for (auto Ele : MyEles)
    				{
    					float Z1, Z2;
    					int SignOfXY = 0;
    					Z1 = Ele.A1 * x + Ele.B1 * y + Ele.C1;
    					Z2 = Ele.A2 * x + Ele.B2 * y + Ele.C2;
    					if (Z1 > 0)
    					{
    						if (Z2 > 0)
    							SignOfXY = 1;
    						else
    							SignOfXY = 2;
    					}
    					else
    					{
    						if (Z2 > 0)
    							SignOfXY = 3;
    						else
    							SignOfXY = 4;
    					}
    					FVector Point = {x,y,0.f};
    					// Calculate the signed distance from point to the wall
    					float PointSide = FVector::DotProduct(Point - Ele.WallStart, Ele.WallNormal);
    					
    					if (Ele.Sign1 == SignOfXY && (Ele.PlayerSide * PointSide) < 0)
    					{
    						if (!FoW[i][j])
    						{
    							Change[i][j] = true;
    							FoW[i][j] = true;
    							break;
    						}
    					}
    				}
    			
    				float brushlocationX = i/100.f + 0.005f;
    				float brushlocationY = j/100.f + 0.005f;
    			
    				if (IsValid(MyCanvass) && Change[i][j])
    				{
    					if (!FoW[i][j])
    						MyCanvass->DrawBrush(BlackTexture, FixedSize, {brushlocationX, brushlocationY});
    					else
    						MyCanvass->DrawBrush(WhiteTexture, FixedSize, {brushlocationX, brushlocationY});
    				
    				}
    			}
    		}
    	}
    }
}

void AGASController::AcknowledgePossession(class APawn* P)
{
	Super::AcknowledgePossession(P);

	if (ABai5Character* CharacterBase = Cast<ABai5Character>(P))
	{
		CharacterBase->SetupACS();
	}
}

void AGASController::OnMove(const FInputActionValue& Value)
{
	FVector2D MovementVector = Value.Get<FVector2D>();
	// find out which way is forward
	const FRotator Rotation = GetControlRotation();
	const FRotator YawRotation(0, Rotation.Yaw, 0);

	// get forward vector
	const FVector ForwardDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::X);

	// get right vector 
	const FVector RightDirection = FRotationMatrix(YawRotation).GetUnitAxis(EAxis::Y);

	// add movement 
	GetPawn()->AddMovementInput(ForwardDirection, MovementVector.Y);
	GetPawn()->AddMovementInput(RightDirection, MovementVector.X);
}

void AGASController::SetupInputComponent()
{
	Super::SetupInputComponent();
	if (UEnhancedInputLocalPlayerSubsystem* Subsystem = ULocalPlayer::GetSubsystem<UEnhancedInputLocalPlayerSubsystem>(GetLocalPlayer()))
	{
		Subsystem->AddMappingContext(DefautMappingContext, 0);
	}

	if (UEnhancedInputComponent* EnhancedInputComponent = Cast<UEnhancedInputComponent>(InputComponent))
	{
		// Setup mouse input events
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Started, this, &AGASController::OnMove);
		EnhancedInputComponent->BindAction(MoveAction, ETriggerEvent::Triggered, this, &AGASController::OnMove);
	}
}




