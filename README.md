# InnerLoop Functions

A simple plugin for Unreal Engine 4 which adds a few basic blueprint nodes.

#### What this is:
+ ...my first attempt at making a plugin for UE4.
+ ...a great way for me to learn and practice my C++ skills.
+ ...a collection of nodes that solve very specialized problems, particularly related to XR development challenges.

#### What this isn't:
+ ...relevant or useful for most developers, especially those not working in XR.
+ ...anything ground-breaking or new. I think most of this stuff is in Rama's Victory plugin, actually. But I wouldn't learn anything if I didn't make it myself.

This plugin basically just adds a few non-essential Blueprint nodes and exposes some engine stuff for Blueprint devs. The most useful thing in here, for most developers, is probably the ResetOrientationAndPositionZ node. This node drops the Z component of the transform when re-centering the user's XR playspace. It's super useful for maintaining the floor level and only adjusting the center position.
Everything else in here was something I needed for a project at some point or another. By collecting that stuff into a plugin, it makes it really easy to bring changes with me across engine versions.

## Support
*(only tested for this stuff, but probably works on other engine versions)*
* **Unreal Engine** - [4.25.3-Oculus](https://github.com/Oculus-VR/UnrealEngine)
* **Platforms** - Win64, Android, PS4

## Installation
1) Place the *'InnerLoopLLC'* folder in *'Engine/Plugins/Marketplace'*<br>
2) Regenerate project files<br>
3) Compile engine<br>

## Functions
* **IsWithEditor** - Returns Bool if project is running in UE4 editor or not.<br>
* **WithEditor** - Same as IsWithEditor, but with branched outputs. *(useful for skipping cinematics/etc while developing)*<br>
* **GetProjectVersion** - Returns Project Version as set in Project Description.<br>
* **SetProjectVersion** - Sets the Project Version.<br>
* **GetTextFromFile** - Reads a .txt file and returns contents as a string. *(useful for including update notes in game)*<br>
* **PrintToLog** - Prints string to log file in packaged builds. *(logs must be enabled for this to work in shipping builds)*<br>
* **Misc|UnloadStreamingLevel** - Unloads and removes streaming level.<br>
* **Misc|GetCustomDataValue** - Gets the value of Custom Data from instanced static mesh component. *(requires 4.25+)*<br>
* **XR|GetBasePosition** - Returns center of playspace as Vector.<br>
* **XR|SetBasePosition** - Sets new center of playspace.<br>
* **XR|GetBaseRotation** - Returns rotation of playspace as Rotator.<br>
* **XR|SetBaseRotation** - Sets new rotation of playspace.<br>
* **XR|GetBaseRotationAndPosition** - Returns rotation and center of playspace as Transform.<br>
* **XR|SetBaseRotationAndPosition** - Sets new rotation and center of playspace.<br>
* **XR|ResetOrientationAndPositionZ** - Reorients playspace without adjusting Z. *(maintains floor height)*<br>
* **XR|GetSpectatorScreenTexture** - Gets the spectator screen texture.<br>
* **System Info|RHIAdapterName** - Returns name of installed GPU. *(useful for automatically configuring settings)*<br>
* **System Info|RHIVendorName** - Returns vendor of installed GPU.<br>
* **System Info|RHIShaderFormatName** - Returns the name of the current shader format *(e.g. "PCD3D_ES3_1", etc)*<br>
* **System Info|CPUBrand** - Returns as string the brand of installed CPU.<br>
* **System Info|CPUChipset** - Returns as string the chipset of installed CPU.<br>
* **System Info|CPUVendor** - Returns as string the vendor of installed CPU.<br>
