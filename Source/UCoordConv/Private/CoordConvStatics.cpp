// Copyright 2017, Institute for Artificial Intelligence - University of Bremen
// Author: Andrei Haidu (http://haidu.eu)

#include "CoordConvStatics.h"

// FTransform by value
FORCEINLINE FTransform FCoordConvStatics::UToROS(const FTransform& InTransform)
{
	return FTransform(UToROS(InTransform.GetRotation()), UToROS(InTransform.GetLocation()));
}
	
// FQuat by value
FORCEINLINE FQuat FCoordConvStatics::UToROS(const FQuat& InQuat)
{
	// todo
	//return FQuat(- InQuat.X, InQuat.Y, InQuat.Z, - InQuat.W);
	return InQuat;
}
	
// FVector by value
FORCEINLINE FVector FCoordConvStatics::UToROS(const FVector& InVector)
{
	return FVector(InVector.X * 0.01f, - InVector.Y * 0.01f, InVector.Z * 0.01f);
}
	
// FTransform by reference
FORCEINLINE void FCoordConvStatics::UToROS(FTransform& OutTransform)
{
	OutTransform.SetRotation(UToROS(OutTransform.GetRotation()));
	OutTransform.SetLocation(UToROS(OutTransform.GetLocation()));		
}
	
// FQuat by reference
FORCEINLINE void FCoordConvStatics::UToROS(FQuat& OutQuat)
{
	OutQuat.X *= -1;
	OutQuat.W *= -1;
}

// FVector by reference
FORCEINLINE void FCoordConvStatics::UToROS(FVector& OutVector)
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
FORCEINLINE FTransform FCoordConvStatics::ROSToU(const FTransform& InTransform)
{
	return FTransform(ROSToU(InTransform.GetRotation()), ROSToU(InTransform.GetLocation()));
}

// FQuat by value
FORCEINLINE FQuat FCoordConvStatics::ROSToU(const FQuat& InQuat)
{
	return FQuat(-InQuat.X, InQuat.Y, InQuat.Z, -InQuat.W);
}

// FVector by value
FORCEINLINE FVector FCoordConvStatics::ROSToU(const FVector& InVector)
{
	return FVector(InVector.X * 0.01f, -InVector.Y * 0.01f, InVector.Z * 0.01f);
}

// FTransform by reference
FORCEINLINE void FCoordConvStatics::ROSToU(FTransform& OutTransform)
{
	OutTransform.SetRotation(ROSToU(OutTransform.GetRotation()));
	OutTransform.SetLocation(ROSToU(OutTransform.GetLocation()));
}

// FQuat by reference
FORCEINLINE void FCoordConvStatics::ROSToU(FQuat& OutQuat)
{
	OutQuat.X *= -1;
	OutQuat.W *= -1;
}

// FVector by reference
FORCEINLINE void FCoordConvStatics::ROSToU(FVector& OutVector)
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
FORCEINLINE FTransform FCoordConvStatics::UToROSCamera(const FTransform& InTransform)
{
	// todo
	return FTransform(UToROSCamera(InTransform.GetRotation()), UToROSCamera(InTransform.GetLocation()));
}

// FQuat by value
FORCEINLINE FQuat FCoordConvStatics::UToROSCamera(const FQuat& InQuat)
{
	// todo
	return FQuat(-InQuat.X, InQuat.Y, InQuat.Z, -InQuat.W);
}

// FVector by value
FORCEINLINE FVector FCoordConvStatics::UToROSCamera(const FVector& InVector)
{
	// todo
	return FVector(InVector.X * 0.01f, -InVector.Y * 0.01f, InVector.Z * 0.01f);
}

// FTransform by reference
FORCEINLINE void FCoordConvStatics::UToROSCamera(FTransform& OutTransform)
{
	// todo
	OutTransform.SetRotation(UToROSCamera(OutTransform.GetRotation()));
	OutTransform.SetLocation(UToROSCamera(OutTransform.GetLocation()));
}

// FQuat by reference
FORCEINLINE void FCoordConvStatics::UToROSCamera(FQuat& OutQuat)
{
	// todo
	OutQuat.X *= -1;
	OutQuat.W *= -1;
}

// FVector by reference
FORCEINLINE void FCoordConvStatics::UToROSCamera(FVector& OutVector)
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
FORCEINLINE FTransform FCoordConvStatics::ROSCameraToU(const FTransform& InTransform)
{
	// todo
	return FTransform(ROSCameraToU(InTransform.GetRotation()), ROSCameraToU(InTransform.GetLocation()));
}

// FQuat by value
FORCEINLINE FQuat FCoordConvStatics::ROSCameraToU(const FQuat& InQuat)
{
	// todo
	return FQuat(-InQuat.X, InQuat.Y, InQuat.Z, -InQuat.W);
}

// FVector by value
FORCEINLINE FVector FCoordConvStatics::ROSCameraToU(const FVector& InVector)
{
	// todo
	return FVector(InVector.X * 0.01f, -InVector.Y * 0.01f, InVector.Z * 0.01f);
}

// FTransform by reference
FORCEINLINE void FCoordConvStatics::ROSCameraToU(FTransform& OutTransform)
{
	// todo
	OutTransform.SetRotation(ROSCameraToU(OutTransform.GetRotation()));
	OutTransform.SetLocation(ROSCameraToU(OutTransform.GetLocation()));
}

// FQuat by reference
FORCEINLINE void FCoordConvStatics::ROSCameraToU(FQuat& OutQuat)
{
	// todo
	OutQuat.X *= -1;
	OutQuat.W *= -1;
}

// FVector by reference
FORCEINLINE void FCoordConvStatics::ROSCameraToU(FVector& OutVector)
{
	// todo
	OutVector.Y *= -1;
}
