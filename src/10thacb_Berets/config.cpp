class CfgPatches
{
	class 10thacb_Berets
	{
		requiredVersion = 0.1;
		requiredAddons[] = {"A3_Characters_F_EPB"};
		version = "1.0";
		author = "Cody";
	};
};
class cfgMods
{
	author = "Cody";
};
class cfgWeapons
{
	class ItemCore;
	class HeadgearItem;
	class H_Beret_blk;
	class Capitan: ItemCore
	{
		author = "Cody";
		scope = 2;
		weaponPoolAvailable = 1;
		displayName = "10th ACB Beret";
		picture = "\10thacb_Berets\Data\Icon\acb.paa";
		model = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
		hiddenSelections[] = {"camo"};
		hiddenSelectionsTextures[] = {"\10thacb_Berets\Data\acb.paa"};
		class ItemInfo: HeadgearItem
		{
			mass = 6;
			uniformModel = "\A3\characters_f_epb\BLUFOR\headgear_beret02";
			modelSides[] = {3,1};
			armor = 0;
			passThrough = 1;
			hiddenSelections[] = {"camo"};
		};
	};
};
