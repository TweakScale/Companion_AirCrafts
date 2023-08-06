# TweakScale Companion :: AirCrafts :: INSTALL

Adds (up to date) TweakScale /L patches for Airplane Plus, Neist Airliner Parts *et all*.


## Installation Instructions

To install, place the GameData folder inside your Kerbal Space Program folder:

* **REMOVE ANY OLD VERSIONS OF THE PRODUCT BEFORE INSTALLING**, including any other fork:
	+ Delete `<KSP_ROOT>/GameData/TweakScaleCompanion/APlus` (if it's still there)
	+ Delete `<KSP_ROOT>/GameData/TweakScaleCompanion/APP`
	+ Delete `<KSP_ROOT>/GameData/TweakScaleCompanion/NAP`
* Extract the package's `GameData/` folder into your KSP's as follows:
	+ `<PACKAGE>/GameData/TweakScaleCompanion/AirCrafts ` --> `<KSP_ROOT>/GameData/TweakScaleCompanion`
		- Overwrite any preexisting file.

The following file layout must be present after installation:

```
<KSP_ROOT>
	[GameData]
		[TweakScale]
			[Plugins]
				KSPe.Light.TweakScale.dll
				Scale.dll
			[patches]
				...
			CHANGE_LOG.md
			DefaultScales.cfg
			Examples.cfg
			LICENSE
			NOTICE
			README.md
			ScaleExponents.cfg
			TweakScale.version
			documentation.txt
		999_Scale_Redist.dll
		ModuleManager.dll
		...
		[TweakScaleCompanion]
			[...]
			[AirCrafts]
				CHANGE_LOG.md
				LICENSE*
				NOTICE
				README.md
				[APP]
					...
				[NAP]
					...
			[...]
	KSP.log
	PartDatabase.cfg
	...
```


### Dependencies

* TweakScale /L 2.4.4 or later
	+ **NOT** included
* Airplane Plus
	+ **NOT** included 
* Neist Airplane Parts
	+ **NOT** included 
* Module Manager 3.1.1 or later
	+ **NOT** included
