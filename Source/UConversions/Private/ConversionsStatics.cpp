// Copyright 2018, Institute for Artificial Intelligence - University of Bremen
// Author: Andrei Haidu (http://haidu.eu)

#include "ConversionsStatics.h"

// FTransform by value
FORCEINLINE FTransform FConversionsStatics::UToROS(const FTransform& InTransform)
{
	return FTransform(UToROS(InTransform.GetRotation()), UToROS(InTransform.GetLocation()));
}
	
// FQuat by value
FORCEINLINE FQuat FConversionsStatics::UToROS(const FQuat& InQuat)
{
	// todo
	//return FQuat(- InQuat.X, InQuat.Y, InQuat.Z, - InQuat.W);
	return InQuat;
}
	
// FVector by value
FORCEINLINE FVector FConversionsStatics::UToROS(const FVector& InVector)
{
	return FVector(InVector.X * 0.01f, - InVector.Y * 0.01f, InVector.Z * 0.01f);
}
	
// FTransform by reference
FORCEINLINE void FConversionsStatics::UToROS(FTransform& OutTransform)
{
	OutTransform.SetRotation(UToROS(OutTransform.GetRotation()));
	OutTransform.SetLocation(UToROS(OutTransform.GetLocation()));		
}
	
// FQuat by reference
FORCEINLINE void FConversionsStatics::UToROS(FQuat& OutQuat)
{
	OutQuat.X *= -1;
	OutQuat.W *= -1;
}

// FVector by reference
FORCEINLINE void FConversionsStatics::UToROS(FVector& OutVector)
{
	OutVector.Y *= -1;
}
	
/**
* Convert
* ROS's 'Z up', 'X forward', 'Y left' 'right handed' coordinate system
* to
* Unreal's 'Z up', 'X forward', 'Y right' 'left handed' coordinate system
*
* http://www.ros.org/reps/rep-0103.html
*/

// FTransform by value
FORCEINLINE FTransform FConversionsStatics::ROSToU(const FTransform& InTransform)
{
	return FTransform(ROSToU(InTransform.GetRotation()), ROSToU(InTransform.GetLocation()));
}

// FQuat by value
FORCEINLINE FQuat FConversionsStatics::ROSToU(const FQuat& InQuat)
{
	return FQuat(-InQuat.X, InQuat.Y, InQuat.Z, -InQuat.W);
}

// FVector by value
FORCEINLINE FVector FConversionsStatics::ROSToU(const FVector& InVector)
{
	return FVector(InVector.X * 0.01f, -InVector.Y * 0.01f, InVector.Z * 0.01f);
}

// FTransform by reference
FORCEINLINE void FConversionsStatics::ROSToU(FTransform& OutTransform)
{
	OutTransform.SetRotation(ROSToU(OutTransform.GetRotation()));
	OutTransform.SetLocation(ROSToU(OutTransform.GetLocation()));
}

// FQuat by reference
FORCEINLINE void FConversionsStatics::ROSToU(FQuat& OutQuat)
{
	OutQuat.X *= -1;
	OutQuat.W *= -1;
}

// FVector by reference
FORCEINLINE void FConversionsStatics::ROSToU(FVector& OutVector)
{
	OutVector.Y *= -1;
}


/** 
	* Convert 
	* Unreal's 'Z up', 'X forward', 'Y right' 'left handed' coordinate system 
	* to 
	* ROS's Camera 'Z forward', 'X right', 'Y down' 'right handed' coordinate system
	*
	* http://www.ros.org/reps/rep-0103.html
	*/
	
	// FTransform by value
FORCEINLINE FTransform FConversionsStatics::UToROSCamera(const FTransform& InTransform)
{
	// todo
	return FTransform(UToROSCamera(InTransform.GetRotation()), UToROSCamera(InTransform.GetLocation()));
}

// FQuat by value
FORCEINLINE FQuat FConversionsStatics::UToROSCamera(const FQuat& InQuat)
{
	// todo
	return FQuat(-InQuat.X, InQuat.Y, InQuat.Z, -InQuat.W);
}

// FVector by value
FORCEINLINE FVector FConversionsStatics::UToROSCamera(const FVector& InVector)
{
	// todo
	return FVector(InVector.X * 0.01f, -InVector.Y * 0.01f, InVector.Z * 0.01f);
}

// FTransform by reference
FORCEINLINE void FConversionsStatics::UToROSCamera(FTransform& OutTransform)
{
	// todo
	OutTransform.SetRotation(UToROSCamera(OutTransform.GetRotation()));
	OutTransform.SetLocation(UToROSCamera(OutTransform.GetLocation()));
}

// FQuat by reference
FORCEINLINE void FConversionsStatics::UToROSCamera(FQuat& OutQuat)
{
	// todo
	OutQuat.X *= -1;
	OutQuat.W *= -1;
}

// FVector by reference
FORCEINLINE void FConversionsStatics::UToROSCamera(FVector& OutVector)
{
	// todo
	OutVector.Y *= -1;
}

/**
* Convert
* ROS's Camera 'Z forward', 'X right', 'Y down' 'right handed' coordinate system
* to
* Unreal's 'Z up', 'X forward', 'Y right' 'left handed' coordinate system
*
* http://www.ros.org/reps/rep-0103.html
*/

// FTransform by value
FORCEINLINE FTransform FConversionsStatics::ROSCameraToU(const FTransform& InTransform)
{
	// todo
	return FTransform(ROSCameraToU(InTransform.GetRotation()), ROSCameraToU(InTransform.GetLocation()));
}

// FQuat by value
FORCEINLINE FQuat FConversionsStatics::ROSCameraToU(const FQuat& InQuat)
{
	// todo
	return FQuat(-InQuat.X, InQuat.Y, InQuat.Z, -InQuat.W);
}

// FVector by value
FORCEINLINE FVector FConversionsStatics::ROSCameraToU(const FVector& InVector)
{
	// todo
	return FVector(InVector.X * 0.01f, -InVector.Y * 0.01f, InVector.Z * 0.01f);
}

// FTransform by reference
FORCEINLINE void FConversionsStatics::ROSCameraToU(FTransform& OutTransform)
{
	// todo
	OutTransform.SetRotation(ROSCameraToU(OutTransform.GetRotation()));
	OutTransform.SetLocation(ROSCameraToU(OutTransform.GetLocation()));
}

// FQuat by reference
FORCEINLINE void FConversionsStatics::ROSCameraToU(FQuat& OutQuat)
{
	// todo
	OutQuat.X *= -1;
	OutQuat.W *= -1;
}

// FVector by reference
FORCEINLINE void FConversionsStatics::ROSCameraToU(FVector& OutVector)
{
	// todo
	OutVector.Y *= -1;
}
