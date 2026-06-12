class CfgPatches
{
	class 61st_Armor_Uniforms
	{
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"61st_Armor",
			"MA_Armor"
		};
        addonRootClass="61st_Armor";
	};
};
class CfgWeapons
{
	class Uniform_Base;
	class UniformItem;
	class MA_Marine_BDU_ODST_HJ;
	class BR_Love: Uniform_Base
	{
		author="TakenFTG";
		scope=2;
		displayName="[61st] I Heart Mills";
		picture="\A3\characters_f_kart\data\ui\icon_U_Marshall_ca.paa";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		hiddenSelections[]=
		{
			"camo"
		};
		hiddenSelectionsTextures[]=
		{
			"\A3\Characters_F_Kart\Civil\Data\c_poloshirtpants_2_co.paa"
		};
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="IHEARTMILLS";
			containerClass="Supply50";
			mass=60;
		};
	};
	class BR_M56S_BDU: MA_Marine_BDU_ODST_HJ
	{
		scope=2;
		scopeArsenal=2;
		displayName="[61st] Combat Uniform";
		model="\A3\Characters_F\Common\Suitpacks\suitpack_blufor_diver";
		picture="\MA_Armor\data\Icons\H3_ODST_Uniform.paa";
		class ItemInfo: UniformItem
		{
			uniformModel="-";
			uniformClass="61st_Base_Uniform";
			containerClass="Supply140";
			mass=10;
			uniformType="Neopren";
			modelSides[]={6};
		};
	};
};
class CfgVehicles
{
	class MA_Marine_BDU_Base;
    class MA_Marine_ODST_BDU_HJ;
	class B_RangeMaster_F;
	class IHEARTMILLS : B_RangeMaster_F
    {
        scope = 2;
        displayName = "I <3 Mills";
        uniformClass = "BR_Love";
        model = "\A3\Characters_F\Civil\c_poloshirtpants.p3d";
        hiddenSelections[] = {"Camo"};
        hiddenSelectionsTextures[] = {"\61st_Armor\Data\Vests\IHEARTMILLS.paa"};
    };

    class 61st_Base_Uniform: MA_Marine_ODST_BDU_HJ
    {
        displayName="[61st] Combat Uniform";
        scope=2;
        scopeCurator=2;
        scopearsenal=2;
        side=1;
        identityTypes[]={};
        uniformclass="BR_M56S_BDU";
        model="\MA_Armor\data\Uniforms\Marine\Marine_Uniform.p3d";

        hiddenSelections[]=
		{
			"Camo1",
			"Camo2",
			"Camo3",
			"Camo4",
			"Camo5",   
			"Camo6",
			"Camo7",
			"Camo8",
			"Camo9",
			"Camo10",
			//     "Uni_Upper",
			//     "Uni_Lower",
			//     "Uni_Collar",
			//     "Armor_Underpad",
			//     "Armor_Straps",
			//     "Armor_Upper",
			//     "Armor_Lower",
			"Shoulders_Lower1",
			"Shoulders_Lower2",
			"Shoulders_Upper"
		};

        hiddenSelectionsTextures[]=
        {
            "\61st_Armor\Data\Uniforms\MA_ODST_UpperBDU_61st_CO.paa",
            "\61st_Armor\Data\Uniforms\MA_ODST_LowerBDU_61st_CO.paa",
	        "\MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_Collar_CO.paa",
			"\MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperSoftpadding_CO.paa",
			"\MA_Armor\data\Uniforms\Marine\data\Color_Variants\TrooperArmorStraps_CO.paa",
            "\61st_Armor\Data\Uniforms\MA_ODST_UpperArmor_61st_CO.paa",
            "\61st_Armor\Data\Uniforms\MA_ODST_LowerArmor_61st_CO.paa",
            "\MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa", // 7  - Camo8
            "\MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa", // 8  - Camo9
            "\MA_Armor\data\Uniforms\Marine\data\Color_Variants\MA_ODST_TrooperShoulders_CO.paa", // 9  - Camo10
        };
    };
};