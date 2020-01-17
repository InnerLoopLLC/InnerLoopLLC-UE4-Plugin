# InnerLoop Functions

A simple plugin for Unreal Engine 4 which adds a few basic blueprint functions.

## Installation
1) Place the *'InnerLoopLLC'* folder in *'Engine/Plugins/Marketplace'*<br>
2) Regenerate project files<br>
3) Compile engine<br>

## Functions
* **WithEditor** - Returns Bool if project is running in UE4 editor or not.<br>
* **IsWithEditor** - Same as WithEditor, but with branched outputs. *(useful for skipping cinematics/etc while developing)*<br>
* **GetProjectVersion** - Returns Project Version as set in Project Description. *(useful for displaying project version in game)*<br>
* **SetProjectVersion** - Sets the Project Version. *(WARNING: not useful in its current form)*<br>
* **GetTextFromFile** - Reads a .txt file and returns contents as a string. *(useful for including update notes in game)*<br>
* **PrintToLog** - Prints string to log file in packaged builds. *(logs must be enabled for this to work in shipping builds)*<br>
* **HMD|GetBasePosition** - Returns center of playspace.<br>
* **HMD|SetBasePosition** - Sets new center of playspace.<br>
* **HMD|ResetOrientationAndPosition** - Reorients placespace. *(useful for re-centering playspace without adjusting floor Z)*<br>
* **System Info|GetGPUAdapterName** - Returns name of installed GPU. *(useful for automatically configuring settings)*<br>
* **System Info|RHIVendorName** - Returns vendor of installed GPU.<br>
