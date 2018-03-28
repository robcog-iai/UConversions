UConversions
=====

Unit and coordinate conversions conversions from and to Unreal.

## Usage

-   Add the plugin to your project (e.g `MyProject/Plugins/UConversions`)  
    

-   Add the module dependency to your module (Project, Plugin); In the
    `MyModule.Build.cs` file:  

		PublicDependencyModuleNames.AddRange(  
		new string[]  
		{  
		...  
		"UConversions",  
		...  
		}  
		);  
    

-   Include `ConversionsStatics.h` where you plan to use the functions.

## Example

```cpp
	// Unreal to ROS conversion
	FTransform ROSTransf = FConversions::UToROS(InUTransform);
```



### Engine Version 4.19
