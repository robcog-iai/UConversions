// Copyright 2018, Institute for Artificial Intelligence - University of Bremen
// Author: Andrei Haidu (http://haidu.eu)

#pragma once
#include "CoreMinimal.h"
#include "EngineUtils.h"

/**
* Unit and coordinate conversion helper functions
*/
struct FConversionsStatics
{
	/**********************************************
	*             Unit conversions
	**********************************************/

	// Conversion by value
	template <class T>
	static FORCEINLINE T CmToM(const T& In)
	{
		return In * 100.f;
	}

	// Conversion by reference
	template <class T>
	static FORCEINLINE void CmToM(T& Out)
	{
		Out *= 100.f;
	}

	// Conversion by value
	template <class T>
	static FORCEINLINE T MToCm(const T& In)
	{
		return In * 0.01f;
	}

	// Conversion by reference
	template <class T>
	static FORCEINLINE void MToCm(T& Out)
	{
		Out *= 0.01f;
	}

	/**********************************************
	*          Coordinate conversions
	**********************************************/

	/** 
	 * Convert 
	 * Unreal's 'Z up', 'X forward', 'Y right' 'left handed' coordinate system
	 * to 
	 * ROS's 'Z up', 'X forward', 'Y left' 'right handed' coordinate system
	 *
	 * http://www.ros.org/reps/rep-0103.html
	 */
	
	// FTransform by value
	static FORCEINLINE FTransform UToROS(const FTransform& InTransform);
	
	// FQuat by value
	static FORCEINLINE FQuat UToROS(const FQuat& InQuat);
	
	// FVector by value
	static FORCEINLINE FVector UToROS(const FVector& InVector);
	
	// FTransform by reference
	static FORCEINLINE void UToROS(FTransform& OutTransform);
	
	// FQuat by reference
	static FORCEINLINE void UToROS(FQuat& OutQuat);

	// FVector by reference
	static FORCEINLINE void UToROS(FVector& OutVector);
	
	/**
	* Convert
	* ROS's 'Z up', 'X forward', 'Y left' 'right handed' coordinate system
	* to
	* Unreal's 'Z up', 'X forward', 'Y right' 'left handed' coordinate system
	*
	* http://www.ros.org/reps/rep-0103.html
	*/

	// FTransform by value
	static FORCEINLINE FTransform ROSToU(const FTransform& InTransform);

	// FQuat by value
	static FORCEINLINE FQuat ROSToU(const FQuat& InQuat);

	// FVector by value
	static FORCEINLINE FVector ROSToU(const FVector& InVector);

	// FTransform by reference
	static FORCEINLINE void ROSToU(FTransform& OutTransform);

	// FQuat by reference
	static FORCEINLINE void ROSToU(FQuat& OutQuat);

	// FVector by reference
	static FORCEINLINE void ROSToU(FVector& OutVector);


	/** 
	 * Convert 
	 * Unreal's 'Z up', 'X forward', 'Y right' 'left handed' coordinate system 
	 * to 
	 * ROS's Camera 'Z forward', 'X right', 'Y down' 'right handed' coordinate system
	 *
	 * http://www.ros.org/reps/rep-0103.html
	 */
	
	 // FTransform by value
	static FORCEINLINE FTransform UToROSCamera(const FTransform& InTransform);

	// FQuat by value
	static FORCEINLINE FQuat UToROSCamera(const FQuat& InQuat);

	// FVector by value
	static FORCEINLINE FVector UToROSCamera(const FVector& InVector);

	// FTransform by reference
	static FORCEINLINE void UToROSCamera(FTransform& OutTransform);

	// FQuat by reference
	static FORCEINLINE void UToROSCamera(FQuat& OutQuat);

	// FVector by reference
	static FORCEINLINE void UToROSCamera(FVector& OutVector);

	/**
	* Convert
	* ROS's Camera 'Z forward', 'X right', 'Y down' 'right handed' coordinate system
	* to
	* Unreal's 'Z up', 'X forward', 'Y right' 'left handed' coordinate system
	*
	* http://www.ros.org/reps/rep-0103.html
	*/

	// FTransform by value
	static FORCEINLINE FTransform ROSCameraToU(const FTransform& InTransform);

	// FQuat by value
	static FORCEINLINE FQuat ROSCameraToU(const FQuat& InQuat);

	// FVector by value
	static FORCEINLINE FVector ROSCameraToU(const FVector& InVector);

	// FTransform by reference
	static FORCEINLINE void ROSCameraToU(FTransform& OutTransform);

	// FQuat by reference
	static FORCEINLINE void ROSCameraToU(FQuat& OutQuat);

	// FVector by reference
	static FORCEINLINE void ROSCameraToU(FVector& OutVector);
};