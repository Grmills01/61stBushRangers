class CfgPatches
{
	class 61st_Armor_Backpacks
	{
		units[]={};
		weapons[]={};
		magazines[]={};
		ammo[]={};
		requiredVersion=0.1;
		requiredAddons[]=
		{
			"61st_Armor"
		};
        addonRootClass="61st_Armor";
	};
};
class XtdGearModels
{
	class CfgVehicles
	{	
		class BR_B_BAT
		{
			options[]=
			{
				"Type",
				"Rank"
			};
			label="[61st] Battalion Backpack";
			class Type
			{
				alwaysSelectable=1;
				changeInGame=0;
				changedelay=0;
				label="Custom";
				values[]=
				{
					"Basic",
					"Medic",
					"Heavy",
					"ANPRC521",
					"ANPRC515"
				};
				class Basic
				{label="Basic"};
				class Medic
				{label="Medic"};
				class Heavy
				{label="Heavy"};
				class ANPRC521
				{label="AN/PRC-521"};
				class ANPRC515
				{label="AN/PRC-515"};
			};
			class Rank
			{
				alwaysSelectable=1;
				changeInGame=0;
				changedelay=0;
				label="Rank";
				values[]= { "CO", "XO", "RTO", "SGT", "MED", "PLAIN" };
                class CO { label="$STR_BR_BAT_CO"; };
                class XO { label="$STR_BR_BAT_XO"; };
                class RTO { label="$STR_BR_BAT_RTO"; };
                class SGT { label="$STR_BR_BAT_SGT"; };
                class MED { label="$STR_BR_BAT_MED"; };
                class PLAIN { label="$STR_BR_BAT_PLAIN"; };
			};
		};
		class BR_B_1ST
		{
			options[]=
			{
				"Type",
				"Rank"
			};
			label="[61st] 1-0 Backpack";
			class Type
			{
				alwaysSelectable=1;
				changeInGame=0;
				changedelay=0;
				label="Custom";
				values[]=
				{
					"Basic",
					"Medic",
					"Heavy",
					"ANPRC521",
					"ANPRC515"
				};
				class Basic
				{label="Basic"};
				class Medic
				{label="Medic"};
				class Heavy
				{label="Heavy"};
				class ANPRC521
				{label="AN/PRC-521"};
				class ANPRC515
				{label="AN/PRC-515"};
			};
			class Rank
			{
				alwaysSelectable=1;
				changeInGame=0;
				changedelay=0;
				label="Rank";
				values[]= {"CO","XO","RTO","SGT","MED","PLAIN"};
				class CO
				{label="$STR_BR_1ST_CO"};
				class XO
				{label="$STR_BR_1ST_XO"};
				class RTO
				{label="$STR_BR_1ST_RTO"};
				class SGT
				{label="$STR_BR_1ST_SGT"};
				class MED
				{label="$STR_BR_1ST_MED"};
				class PLAIN
				{label="$STR_BR_1ST_PLAIN"};
			};
		};
		class BR_B_1I1
		{
			options[]=
			{
				"Type",
				"Rank"
			};
			label="[61st] 1-1 Backpack";
			class Type
			{
				alwaysSelectable=1;
				changeInGame=0;
				changedelay=0;
				label="Custom";
				values[]=
				{
					"Basic",
					"Medic",
					"Heavy",
					"ANPRC521",
					"ANPRC515"
				};
				class Basic
				{label="Basic"};
				class Medic
				{label="Medic"};
				class Heavy
				{label="Heavy"};
				class ANPRC521
				{label="AN/PRC-521"};
				class ANPRC515
				{label="AN/PRC-515"};
			};
			class Rank
			{
				alwaysSelectable=1;
				changeInGame=0;
				changedelay=0;
				values[]= {"LDR", "2IC", "RTO", "MED", "PLAIN"};
				class LDR
				{label="$STR_BR_1I1_LDR"};
				class 2IC
				{label="$STR_BR_1I1_2IC"};
				class RTO
				{label="$STR_BR_1I1_RTO"};
				class MED
				{label="$STR_BR_1I1_MED"};
				class PLAIN
				{label="$STR_BR_1I1_PLAIN"};
			};
		};
		class BR_B_1I2
		{
			options[]=
			{
				"Type",
				"Rank"
			};
			label="[61st] 1-2 Backpack";
			class Type
			{
				alwaysSelectable=1;
				changeInGame=0;
				changedelay=0;
				label="Custom";
				values[]=
				{
					"Basic",
					"Medic",
					"Heavy",
					"ANPRC521",
					"ANPRC515"
				};
				class Basic
				{label="Basic"};
				class Medic
				{label="Medic"};
				class Heavy
				{label="Heavy"};
				class ANPRC521
				{label="AN/PRC-521"};
				class ANPRC515
				{label="AN/PRC-515"};
			};
			class Rank
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
				values[]= {"LDR","2IC","RTO","MED","PLAIN"};
				class LDR
				{label="$STR_BR_1I2_LDR"};
				class 2IC
				{label="$STR_BR_1I2_2IC"};
				class RTO
				{label="$STR_BR_1I2_RTO"};
				class MED
				{label="$STR_BR_1I2_MED"};
				class PLAIN
				{label="$STR_BR_1I2_PLAIN"};
			};
		};
		class BR_B_1I3
		{
			options[]=
			{
				"Type",
				"Rank"
			};
			label="[61st] 1-3 Backpack";
			class Type
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
				label="Custom";
				values[]=
				{
					"Basic",
					"Medic",
					"Heavy",
					"ANPRC521",
					"ANPRC515"
				};
				class Basic
				{label="Basic"};
				class Medic
				{label="Medic"};
				class Heavy
				{label="Heavy"};
				class ANPRC521
				{label="AN/PRC-521"};
				class ANPRC515
				{label="AN/PRC-515"};
			};
			class Rank
			{
				alwaysSelectable=1;
				changeInGame=0;
				changedelay=0;
				values[]= {"LDR", "2IC", "RTO", "MED", "PLAIN"};
				class LDR
				{label="$STR_BR_1I3_LDR"};
				class 2IC
				{label="$STR_BR_1I3_2IC"};
				class RTO
				{label="$STR_BR_1I3_RTO"};
				class MED
				{label="$STR_BR_1I3_MED"};
				class PLAIN
				{label="$STR_BR_1I3_PLAIN"};
			};
		};
		class BR_B_RSV
		{
			options[]=
			{
				"Type",
				"Rank"
			};
			label="[61st] Reservists Backpack";
			class Type
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
				label="Custom";
				values[]=
				{
					"Basic",
					"Medic",
					"Heavy",
					"ANPRC521",
					"ANPRC515"
				};
				class Basic
				{label="Basic"};
				class Medic
				{label="Medic"};
				class Heavy
				{label="Heavy"};
				class ANPRC521
				{label="AN/PRC-521"};
				class ANPRC515
				{label="AN/PRC-515"};
			};
			class Rank
			{
				alwaysSelectable=1;
				changeInGame=0;
				changedelay=0;
				values[]= {"RTO", "MED", "PLAIN"};
				class RTO
				{label="$STR_BR_RSV_RTO";};
				class MED
				{label="$STR_BR_RSV_MED"};
				class PLAIN
				{label="$STR_BR_RSV_PLAIN"};
			};
		};
		class BR_B_SQD
		{
			options[]=
			{
				"Type",
				"Rank"
			};
			label="[61st] Sqaudron Backpack";
			class Type
			{
				alwaysSelectable=1;
				changeInGame=0;
				changedelay=0;
				label="Custom";
				values[]=
				{
					"Basic",
					"Medic",
					"Heavy",
					"ANPRC521",
					"ANPRC515"
				};
				class Basic
				{label="Basic"};
				class Medic
				{label="Medic"};
				class Heavy
				{label="Heavy"};
				class ANPRC521
				{label="AN/PRC-521"};
				class ANPRC515
				{label="AN/PRC-515"};
			};
			class Rank
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
				values[]={"CO", "XO", "WOFF", "PLAIN"};
				class CO
				{label="$STR_BR_SQD_CO";};
				class XO
				{label="$STR_BR_SQD_XO"};
				class WOFF
				{label="$STR_BR_SQD_WOFF"};
				class PLAIN
				{label="$STR_BR_SQD_PLAIN"};
			};
		};

		class BR_ILCS_Rucksack
		{
			options[] = {"Type", "Colour"};
			label="[61st] ILCS Backpack";
			class Type
			{
				alwaysSelectable=1;
				changeInGame=0;
				changedelay=0;
				label="Type";
				values[] = {"Basic", "Medic", "Heavy"};
				class Basic { label="Basic"; };
				class Medic { label="Medic"; };
				class Heavy { label="Heavy"; };
			};
			class Colour
			{
				alwaysSelectable=1;
				changeInGame=0;
				changedelay=0;
				label="Colour";
				values[] = {"Black", "Red", "Blue", "Silver"};
				class Black { label="Black"; };
				class Red { label="Red"; };
				class Blue { label="Blue"; };
				class Silver { label="Silver"; };
			};
		};

		class BR_ANPRC
		{
			options[] = {"Type", "Colour"};
			label="[61st] AN/PRC Backpack";
			class Type
			{
				alwaysSelectable=1;
				changeInGame=0;
				changedelay=0;
				label="Type";
				values[] = {"ANPRC521", "ANPRC515"};
				class ANPRC521 { label="AN/PRC-521"; };
				class ANPRC515 { label="AN/PRC-515"; };
			};
			class Colour
			{
				alwaysSelectable=1;
				changeInGame=0;
				changedelay=0;
				label="Colour";
				values[] = {"Black", "Battalion", "Red"};
				class Black { label="Black"; };
				class Battalion { label="Battalion"; };
				class Red { label="Red"; };
			};
		};
	};
};

class XtdGearInfos
{
	class CfgVehicles
	{
		class BR_B_BAT_CO_BASIC
		{
			Model="BR_B_BAT";
			Type="Basic";
			Rank="CO";
		};
		class BR_B_BAT_CO_MEDIC
		{
			Model="BR_B_BAT";
			Type="Medic";
			Rank="CO";
		};
		class BR_B_BAT_CO_HEAVY
		{
			Model="BR_B_BAT";
			Type="Heavy";
			Rank="CO";
		};
		class BR_B_BAT_CO_521
		{
			Model="BR_B_BAT";
			Type="ANPRC521";
			Rank="CO";
		};
		class BR_B_BAT_CO_515
		{
			Model="BR_B_BAT";
			Type="ANPRC515";
			Rank="CO";
		};
		class BR_B_BAT_XO_BASIC
		{
			Model="BR_B_BAT";
			Type="Basic";
			Rank="XO";
		};
		class BR_B_BAT_XO_MEDIC
		{
			Model="BR_B_BAT";
			Type="Medic";
			Rank="XO";
		};
		class BR_B_BAT_XO_HEAVY
		{
			Model="BR_B_BAT";
			Type="Heavy";
			Rank="XO";
		};
		class BR_B_BAT_XO_521
		{
			Model="BR_B_BAT";
			Type="ANPRC521";
			Rank="XO";
		};
		class BR_B_BAT_XO_515
		{
			Model="BR_B_BAT";
			Type="ANPRC515";
			Rank="XO";
		};
		class BR_B_BAT_RTO_BASIC
		{
			Model="BR_B_BAT";
			Type="Basic";
			Rank="RTO";
		};
		class BR_B_BAT_RTO_MEDIC
		{
			Model="BR_B_BAT";
			Type="Medic";
			Rank="RTO";
		};
		class BR_B_BAT_RTO_HEAVY
		{
			Model="BR_B_BAT";
			Type="Heavy";
			Rank="RTO";
		};
		class BR_B_BAT_RTO_521
		{
			Model="BR_B_BAT";
			Type="ANPRC521";
			Rank="RTO";
		};
		class BR_B_BAT_RTO_515
		{
			Model="BR_B_BAT";
			Type="ANPRC515";
			Rank="RTO";
		};
		class BR_B_BAT_SGT_BASIC
		{
			Model="BR_B_BAT";
			Type="Basic";
			Rank="SGT";
		};
		class BR_B_BAT_SGT_MEDIC
		{
			Model="BR_B_BAT";
			Type="Medic";
			Rank="SGT";
		};
		class BR_B_BAT_SGT_HEAVY
		{
			Model="BR_B_BAT";
			Type="Heavy";
			Rank="SGT";
		};
		class BR_B_BAT_SGT_521
		{
			Model="BR_B_BAT";
			Type="ANPRC521";
			Rank="SGT";
		};
		class BR_B_BAT_SGT_515
		{
			Model="BR_B_BAT";
			Type="ANPRC515";
			Rank="SGT";
		};
		class BR_B_BAT_MED_BASIC
		{
			Model="BR_B_BAT";
			Type="Basic";
			Rank="MED";
		};
		class BR_B_BAT_MED_MEDIC
		{
			Model="BR_B_BAT";
			Type="Medic";
			Rank="MED";
		};
		class BR_B_BAT_MED_HEAVY
		{
			Model="BR_B_BAT";
			Type="Heavy";
			Rank="MED";
		};
		class BR_B_BAT_MED_521
		{
			Model="BR_B_BAT";
			Type="ANPRC521";
			Rank="MED";
		};
		class BR_B_BAT_MED_515
		{
			Model="BR_B_BAT";
			Type="ANPRC515";
			Rank="MED";
		};
		class BR_B_BAT_PLAIN_BASIC
		{
			Model="BR_B_BAT";
			Type="Basic";
			Rank="PLAIN";
		};
		class BR_B_BAT_PLAIN_MEDIC
		{
			Model="BR_B_BAT";
			Type="Medic";
			Rank="PLAIN";
		};
		class BR_B_BAT_PLAIN_HEAVY
		{
			Model="BR_B_BAT";
			Type="Heavy";
			Rank="PLAIN";
		};
		class BR_B_BAT_PLAIN_521
		{
			Model="BR_B_BAT";
			Type="ANPRC521";
			Rank="PLAIN";
		};
		class BR_B_BAT_PLAIN_515
		{
			Model="BR_B_BAT";
			Type="ANPRC515";
			Rank="PLAIN";
		};
		class BR_B_1ST_CO_BASIC
		{
			Model="BR_B_1ST";
			Type="Basic";
			Rank="CO";
		};
		class BR_B_1ST_CO_MEDIC
		{
			Model="BR_B_1ST";
			Type="Medic";
			Rank="CO";
		};
		class BR_B_1ST_CO_HEAVY
		{
			Model="BR_B_1ST";
			Type="Heavy";
			Rank="CO";
		};
		class BR_B_1ST_CO_521
		{
			Model="BR_B_1ST";
			Type="ANPRC521";
			Rank="CO";
		};
		class BR_B_1ST_CO_515
		{
			Model="BR_B_1ST";
			Type="ANPRC515";
			Rank="CO";
		};
		class BR_B_1ST_XO_BASIC
		{
			Model="BR_B_1ST";
			Type="Basic";
			Rank="XO";
		};
		class BR_B_1ST_XO_MEDIC
		{
			Model="BR_B_1ST";
			Type="Medic";
			Rank="XO";
		};
		class BR_B_1ST_XO_HEAVY
		{
			Model="BR_B_1ST";
			Type="Heavy";
			Rank="XO";
		};
		class BR_B_1ST_XO_521
		{
			Model="BR_B_1ST";
			Type="ANPRC521";
			Rank="XO";
		};
		class BR_B_1ST_XO_515
		{
			Model="BR_B_1ST";
			Type="ANPRC515";
			Rank="XO";
		};
		class BR_B_1ST_RTO_BASIC
		{
			Model="BR_B_1ST";
			Type="Basic";
			Rank="RTO";
		};
		class BR_B_1ST_RTO_MEDIC
		{
			Model="BR_B_1ST";
			Type="Medic";
			Rank="RTO";
		};
		class BR_B_1ST_RTO_HEAVY
		{
			Model="BR_B_1ST";
			Type="Heavy";
			Rank="RTO";
		};
		class BR_B_1ST_RTO_521
		{
			Model="BR_B_1ST";
			Type="ANPRC521";
			Rank="RTO";
		};
		class BR_B_1ST_RTO_515
		{
			Model="BR_B_1ST";
			Type="ANPRC515";
			Rank="RTO";
		};
		class BR_B_1ST_SGT_BASIC
		{
			Model="BR_B_1ST";
			Type="Basic";
			Rank="SGT";
		};
		class BR_B_1ST_SGT_MEDIC
		{
			Model="BR_B_1ST";
			Type="Medic";
			Rank="SGT";
		};
		class BR_B_1ST_SGT_HEAVY
		{
			Model="BR_B_1ST";
			Type="Heavy";
			Rank="SGT";
		};
		class BR_B_1ST_SGT_521
		{
			Model="BR_B_1ST";
			Type="ANPRC521";
			Rank="SGT";
		};
		class BR_B_1ST_SGT_515
		{
			Model="BR_B_1ST";
			Type="ANPRC515";
			Rank="SGT";
		};
		class BR_B_1ST_MED_BASIC
		{
			Model="BR_B_1ST";
			Type="Basic";
			Rank="MED";
		};
		class BR_B_1ST_MED_MEDIC
		{
			Model="BR_B_1ST";
			Type="Medic";
			Rank="MED";
		};
		class BR_B_1ST_MED_HEAVY
		{
			Model="BR_B_1ST";
			Type="Heavy";
			Rank="MED";
		};
		class BR_B_1ST_MED_521
		{
			Model="BR_B_1ST";
			Type="ANPRC521";
			Rank="MED";
		};
		class BR_B_1ST_MED_515
		{
			Model="BR_B_1ST";
			Type="ANPRC515";
			Rank="MED";
		};
		class BR_B_1ST_PLAIN_BASIC
		{
			Model="BR_B_1ST";
			Type="Basic";
			Rank="PLAIN";
		};
		class BR_B_1ST_PLAIN_MEDIC
		{
			Model="BR_B_1ST";
			Type="Medic";
			Rank="PLAIN";
		};
		class BR_B_1ST_PLAIN_HEAVY
		{
			Model="BR_B_1ST";
			Type="Heavy";
			Rank="PLAIN";
		};
		class BR_B_1ST_PLAIN_521
		{
			Model="BR_B_1ST";
			Type="ANPRC521";
			Rank="PLAIN";
		};
		class BR_B_1ST_PLAIN_515
		{
			Model="BR_B_1ST";
			Type="ANPRC515";
			Rank="PLAIN";
		};
		class BR_B_1I1_LDR_BASIC
		{
			Model="BR_B_1I1";
			Type="Basic";
			Rank="LDR";
		};
		class BR_B_1I1_LDR_MEDIC
		{
			Model="BR_B_1I1";
			Type="Medic";
			Rank="LDR";
		};
		class BR_B_1I1_LDR_HEAVY
		{
			Model="BR_B_1I1";
			Type="Heavy";
			Rank="LDR";
		};
		class BR_B_1I1_LDR_521
		{
			Model="BR_B_1I1";
			Type="ANPRC521";
			Rank="LDR";
		};
		class BR_B_1I1_LDR_515
		{
			Model="BR_B_1I1";
			Type="ANPRC515";
			Rank="LDR";
		};
		class BR_B_1I1_2IC_BASIC
		{
			Model="BR_B_1I1";
			Type="Basic";
			Rank="2IC";
		};
		class BR_B_1I1_2IC_MEDIC
		{
			Model="BR_B_1I1";
			Type="Medic";
			Rank="2IC";
		};
		class BR_B_1I1_2IC_HEAVY
		{
			Model="BR_B_1I1";
			Type="Heavy";
			Rank="2IC";
		};
		class BR_B_1I1_2IC_521
		{
			Model="BR_B_1I1";
			Type="ANPRC521";
			Rank="2IC";
		};
		class BR_B_1I1_2IC_515
		{
			Model="BR_B_1I1";
			Type="ANPRC515";
			Rank="2IC";
		};
		class BR_B_1I1_RTO_BASIC
		{
			Model="BR_B_1I1";
			Type="Basic";
			Rank="RTO";
		};
		class BR_B_1I1_RTO_MEDIC
		{
			Model="BR_B_1I1";
			Type="Medic";
			Rank="RTO";
		};
		class BR_B_1I1_RTO_HEAVY
		{
			Model="BR_B_1I1";
			Type="Heavy";
			Rank="RTO";
		};
		class BR_B_1I1_RTO_521
		{
			Model="BR_B_1I1";
			Type="ANPRC521";
			Rank="RTO";
		};
		class BR_B_1I1_RTO_515
		{
			Model="BR_B_1I1";
			Type="ANPRC515";
			Rank="RTO";
		};
		class BR_B_1I1_MED_BASIC
		{
			Model="BR_B_1I1";
			Type="Basic";
			Rank="MED";
		};
		class BR_B_1I1_MED_MEDIC
		{
			Model="BR_B_1I1";
			Type="Medic";
			Rank="MED";
		};
		class BR_B_1I1_MED_HEAVY
		{
			Model="BR_B_1I1";
			Type="Heavy";
			Rank="MED";
		};
		class BR_B_1I1_MED_521
		{
			Model="BR_B_1I1";
			Type="ANPRC521";
			Rank="MED";
		};
		class BR_B_1I1_MED_515
		{
			Model="BR_B_1I1";
			Type="ANPRC515";
			Rank="MED";
		};
		class BR_B_1I1_PLAIN_BASIC
		{
			Model="BR_B_1I1";
			Type="Basic";
			Rank="PLAIN";
		};
		class BR_B_1I1_PLAIN_MEDIC
		{
			Model="BR_B_1I1";
			Type="Medic";
			Rank="PLAIN";
		};
		class BR_B_1I1_PLAIN_HEAVY
		{
			Model="BR_B_1I1";
			Type="Heavy";
			Rank="PLAIN";
		};
		class BR_B_1I1_PLAIN_521
		{
			Model="BR_B_1I1";
			Type="ANPRC521";
			Rank="PLAIN";
		};
		class BR_B_1I1_PLAIN_515
		{
			Model="BR_B_1I1";
			Type="ANPRC515";
			Rank="PLAIN";
		};
		class BR_B_1I2_LDR_BASIC
		{
			Model="BR_B_1I2";
			Type="Basic";
			Rank="LDR";
		};
		class BR_B_1I2_LDR_MEDIC
		{
			Model="BR_B_1I2";
			Type="Medic";
			Rank="LDR";
		};
		class BR_B_1I2_LDR_HEAVY
		{
			Model="BR_B_1I2";
			Type="Heavy";
			Rank="LDR";
		};
		class BR_B_1I2_LDR_521
		{
			Model="BR_B_1I2";
			Type="ANPRC521";
			Rank="LDR";
		};
		class BR_B_1I2_LDR_515
		{
			Model="BR_B_1I2";
			Type="ANPRC515";
			Rank="LDR";
		};
		class BR_B_1I2_2IC_BASIC
		{
			Model="BR_B_1I2";
			Type="Basic";
			Rank="2IC";
		};
		class BR_B_1I2_2IC_MEDIC
		{
			Model="BR_B_1I2";
			Type="Medic";
			Rank="2IC";
		};
		class BR_B_1I2_2IC_HEAVY
		{
			Model="BR_B_1I2";
			Type="Heavy";
			Rank="2IC";
		};
		class BR_B_1I2_2IC_521
		{
			Model="BR_B_1I2";
			Type="ANPRC521";
			Rank="2IC";
		};
		class BR_B_1I2_2IC_515
		{
			Model="BR_B_1I2";
			Type="ANPRC515";
			Rank="2IC";
		};
		class BR_B_1I2_RTO_BASIC
		{
			Model="BR_B_1I2";
			Type="Basic";
			Rank="RTO";
		};
		class BR_B_1I2_RTO_MEDIC
		{
			Model="BR_B_1I2";
			Type="Medic";
			Rank="RTO";
		};
		class BR_B_1I2_RTO_HEAVY
		{
			Model="BR_B_1I2";
			Type="Heavy";
			Rank="RTO";
		};
		class BR_B_1I2_RTO_521
		{
			Model="BR_B_1I2";
			Type="ANPRC521";
			Rank="RTO";
		};
		class BR_B_1I2_RTO_515
		{
			Model="BR_B_1I2";
			Type="ANPRC515";
			Rank="RTO";
		};
		class BR_B_1I2_MED_BASIC
		{
			Model="BR_B_1I2";
			Type="Basic";
			Rank="MED";
		};
		class BR_B_1I2_MED_MEDIC
		{
			Model="BR_B_1I2";
			Type="Medic";
			Rank="MED";
		};
		class BR_B_1I2_MED_HEAVY
		{
			Model="BR_B_1I2";
			Type="Heavy";
			Rank="MED";
		};
		class BR_B_1I2_MED_521
		{
			Model="BR_B_1I2";
			Type="ANPRC521";
			Rank="MED";
		};
		class BR_B_1I2_MED_515
		{
			Model="BR_B_1I2";
			Type="ANPRC515";
			Rank="MED";
		};
		class BR_B_1I2_PLAIN_BASIC
		{
			Model="BR_B_1I2";
			Type="Basic";
			Rank="PLAIN";
		};
		class BR_B_1I2_PLAIN_MEDIC
		{
			Model="BR_B_1I2";
			Type="Medic";
			Rank="PLAIN";
		};
		class BR_B_1I2_PLAIN_HEAVY
		{
			Model="BR_B_1I2";
			Type="Heavy";
			Rank="PLAIN";
		};
		class BR_B_1I2_PLAIN_521
		{
			Model="BR_B_1I2";
			Type="ANPRC521";
			Rank="PLAIN";
		};
		class BR_B_1I2_PLAIN_515
		{
			Model="BR_B_1I2";
			Type="ANPRC515";
			Rank="PLAIN";
		};
		class BR_B_1I3_LDR_BASIC
		{
			Model="BR_B_1I3";
			Type="Basic";
			Rank="LDR";
		};
		class BR_B_1I3_LDR_MEDIC
		{
			Model="BR_B_1I3";
			Type="Medic";
			Rank="LDR";
		};
		class BR_B_1I3_LDR_HEAVY
		{
			Model="BR_B_1I3";
			Type="Heavy";
			Rank="LDR";
		};
		class BR_B_1I3_LDR_521
		{
			Model="BR_B_1I3";
			Type="ANPRC521";
			Rank="LDR";
		};
		class BR_B_1I3_LDR_515
		{
			Model="BR_B_1I3";
			Type="ANPRC515";
			Rank="LDR";
		};
		class BR_B_1I3_2IC_BASIC
		{
			Model="BR_B_1I3";
			Type="Basic";
			Rank="2IC";
		};
		class BR_B_1I3_2IC_MEDIC
		{
			Model="BR_B_1I3";
			Type="Medic";
			Rank="2IC";
		};
		class BR_B_1I3_2IC_HEAVY
		{
			Model="BR_B_1I3";
			Type="Heavy";
			Rank="2IC";
		};
		class BR_B_1I3_2IC_521
		{
			Model="BR_B_1I3";
			Type="ANPRC521";
			Rank="2IC";
		};
		class BR_B_1I3_2IC_515
		{
			Model="BR_B_1I3";
			Type="ANPRC515";
			Rank="2IC";
		};
		class BR_B_1I3_RTO_BASIC
		{
			Model="BR_B_1I3";
			Type="Basic";
			Rank="RTO";
		};
		class BR_B_1I3_RTO_MEDIC
		{
			Model="BR_B_1I3";
			Type="Medic";
			Rank="RTO";
		};
		class BR_B_1I3_RTO_HEAVY
		{
			Model="BR_B_1I3";
			Type="Heavy";
			Rank="RTO";
		};
		class BR_B_1I3_RTO_521
		{
			Model="BR_B_1I3";
			Type="ANPRC521";
			Rank="RTO";
		};
		class BR_B_1I3_RTO_515
		{
			Model="BR_B_1I3";
			Type="ANPRC515";
			Rank="RTO";
		};
		class BR_B_1I3_MED_BASIC
		{
			Model="BR_B_1I3";
			Type="Basic";
			Rank="MED";
		};
		class BR_B_1I3_MED_MEDIC
		{
			Model="BR_B_1I3";
			Type="Medic";
			Rank="MED";
		};
		class BR_B_1I3_MED_HEAVY
		{
			Model="BR_B_1I3";
			Type="Heavy";
			Rank="MED";
		};
		class BR_B_1I3_MED_521
		{
			Model="BR_B_1I3";
			Type="ANPRC521";
			Rank="MED";
		};
		class BR_B_1I3_MED_515
		{
			Model="BR_B_1I3";
			Type="ANPRC515";
			Rank="MED";
		};
		class BR_B_1I3_PLAIN_BASIC
		{
			Model="BR_B_1I3";
			Type="Basic";
			Rank="PLAIN";
		};
		class BR_B_1I3_PLAIN_MEDIC
		{
			Model="BR_B_1I3";
			Type="Medic";
			Rank="PLAIN";
		};
		class BR_B_1I3_PLAIN_HEAVY
		{
			Model="BR_B_1I3";
			Type="Heavy";
			Rank="PLAIN";
		};
		class BR_B_1I3_PLAIN_521
		{
			Model="BR_B_1I3";
			Type="ANPRC521";
			Rank="PLAIN";
		};
		class BR_B_1I3_PLAIN_515
		{
			Model="BR_B_1I3";
			Type="ANPRC515";
			Rank="PLAIN";
		};
		class BR_B_RSV_RTO_BASIC
		{
			Model="BR_B_RSV";
			Type="Basic";
			Rank="RTO";
		};
		class BR_B_RSV_RTO_MEDIC
		{
			Model="BR_B_RSV";
			Type="Medic";
			Rank="RTO";
		};
		class BR_B_RSV_RTO_HEAVY
		{
			Model="BR_B_RSV";
			Type="Heavy";
			Rank="RTO";
		};
		class BR_B_RSV_RTO_521
		{
			Model="BR_B_RSV";
			Type="ANPRC521";
			Rank="RTO";
		};
		class BR_B_RSV_RTO_515
		{
			Model="BR_B_RSV";
			Type="ANPRC515";
			Rank="RTO";
		};
		class BR_B_RSV_MED_BASIC
		{
			Model="BR_B_RSV";
			Type="Basic";
			Rank="MED";
		};
		class BR_B_RSV_MED_MEDIC
		{
			Model="BR_B_RSV";
			Type="Medic";
			Rank="MED";
		};
		class BR_B_RSV_MED_HEAVY
		{
			Model="BR_B_RSV";
			Type="Heavy";
			Rank="MED";
		};
		class BR_B_RSV_MED_521
		{
			Model="BR_B_RSV";
			Type="ANPRC521";
			Rank="MED";
		};
		class BR_B_RSV_MED_515
		{
			Model="BR_B_RSV";
			Type="ANPRC515";
			Rank="MED";
		};
		class BR_B_RSV_PLAIN_BASIC
		{
			Model="BR_B_RSV";
			Type="Basic";
			Rank="PLAIN";
		};
		class BR_B_RSV_PLAIN_MEDIC
		{
			Model="BR_B_RSV";
			Type="Medic";
			Rank="PLAIN";
		};
		class BR_B_RSV_PLAIN_HEAVY
		{
			Model="BR_B_RSV";
			Type="Heavy";
			Rank="PLAIN";
		};
		class BR_B_RSV_PLAIN_521
		{
			Model="BR_B_RSV";
			Type="ANPRC521";
			Rank="PLAIN";
		};
		class BR_B_RSV_PLAIN_515
		{
			Model="BR_B_RSV";
			Type="ANPRC515";
			Rank="PLAIN";
		};

		class BR_ILCS_Rucksack_Basic
		{
			Model="BR_ILCS_Rucksack";
			Type="Basic";
			Colour="Black";
		};
		class BR_ILCS_Rucksack_Medic
		{
			Model="BR_ILCS_Rucksack";
			Type="Medic";
			Colour="Black";
		};
		class BR_ILCS_Rucksack_Heavy
		{
			Model="BR_ILCS_Rucksack";
			Type="Heavy";
			Colour="Black";
		};
		class BR_ILCS_Rucksack_Basic_Red
		{
			Model="BR_ILCS_Rucksack";
			Type="Basic";
			Colour="Red";
		};
		class BR_ILCS_Rucksack_Medic_Red
		{
			Model="BR_ILCS_Rucksack";
			Type="Medic";
			Colour="Red";
		};
		class BR_ILCS_Rucksack_Heavy_Red
		{
			Model="BR_ILCS_Rucksack";
			Type="Heavy";
			Colour="Red";
		};
		class BR_ILCS_Rucksack_Basic_Blue
		{
			Model="BR_ILCS_Rucksack";
			Type="Basic";
			Colour="Blue";
		};
		class BR_ILCS_Rucksack_Medic_Blue
		{
			Model="BR_ILCS_Rucksack";
			Type="Medic";
			Colour="Blue";
		};
		class BR_ILCS_Rucksack_Heavy_Blue
		{
			Model="BR_ILCS_Rucksack";
			Type="Heavy";
			Colour="Blue";
		};
		class BR_ILCS_Rucksack_Basic_Silver
		{
			Model="BR_ILCS_Rucksack";
			Type="Basic";
			Colour="Silver";
		};
		class BR_ILCS_Rucksack_Medic_Silver
		{
			Model="BR_ILCS_Rucksack";
			Type="Medic";
			Colour="Silver";
		};
		class BR_ILCS_Rucksack_Heavy_Silver
		{
			Model="BR_ILCS_Rucksack";
			Type="Heavy";
			Colour="Silver";
		};

		class BR_ANPRC_521_BLK
		{
			Model="BR_ANPRC";
			Type="ANPRC521";
			Colour="Black";
		};
		class BR_ANPRC_521_BatS
		{
			Model="BR_ANPRC";
			Type="ANPRC521";
			Colour="Battalion";
		};
		class BR_ANPRC_521_Red
		{
			Model="BR_ANPRC";
			Type="ANPRC521";
			Colour="Red";
		};
		class BR_ANPRC_515_BLK
		{
			Model="BR_ANPRC";
			Type="ANPRC515";
			Colour="Black";
		};
		class BR_ANPRC_515_BatS
		{
			Model="BR_ANPRC";
			Type="ANPRC515";
			Colour="Battalion";
		};
		class BR_ANPRC_515_Red
		{
			Model="BR_ANPRC";
			Type="ANPRC515";
			Colour="Red";
		};
	};
};
class CfgVehicles
{
	class ContainerSupply;
	class OPTRE_ILCS_Rucksack_Black;
	class OPTRE_ILCS_Rucksack_Heavy;
	class OPTRE_ILCS_Rucksack_Medical;
	class OPTRE_ANPRC_521_Black;
	class OPTRE_ANPRC_515;
	class BR_ILCS_Rucksack_Basic: OPTRE_ILCS_Rucksack_Black
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] ILCS Backpack (Basic)";
		maximumLoad=300;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\V_RUCK_BLK"
		};
	};
	class BR_ILCS_Rucksack_Medic: OPTRE_ILCS_Rucksack_Medical
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] ILCS Backpack (Medic)";
		maximumLoad=300;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\V_RUCK_MED",
			"optre_weapons\items\data\biofoam_co.paa"
		};
	
	};
	class BR_ILCS_Rucksack_Heavy: OPTRE_ILCS_Rucksack_Heavy
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] ILCS Backpack (Heavy)";
		maximumLoad=450;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\V_RUCK_BLK"
		};
	
	};
	class BR_ILCS_Rucksack_Basic_Red: OPTRE_ILCS_Rucksack_Black
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] ILCS Backpack (Basic) Red";
		maximumLoad=300;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\V_RUCK_BLK_R"
		};
	};
	class BR_ILCS_Rucksack_Medic_Red: OPTRE_ILCS_Rucksack_Medical
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] ILCS Backpack (Medic) Red";
		maximumLoad=300;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\V_RUCK_MED_R",
			"optre_weapons\items\data\biofoam_co.paa"
		};
	
	};
	class BR_ILCS_Rucksack_Heavy_Red: OPTRE_ILCS_Rucksack_Heavy
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] ILCS Backpack (Heavy) Red";
		maximumLoad=450;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\V_RUCK_BLK_R"
		};
	
	};
	class BR_ILCS_Rucksack_Basic_Blue: OPTRE_ILCS_Rucksack_Black
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] ILCS Backpack (Basic) Blue";
		maximumLoad=300;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\V_RUCK_BLK_B"
		};
	};
	class BR_ILCS_Rucksack_Medic_Blue: OPTRE_ILCS_Rucksack_Medical
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] ILCS Backpack (Medic) Blue";
		maximumLoad=300;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\V_RUCK_MED_B",
			"optre_weapons\items\data\biofoam_co.paa"
		};
	
	};
	class BR_ILCS_Rucksack_Heavy_Blue: OPTRE_ILCS_Rucksack_Heavy
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] ILCS Backpack (Heavy) Blue";
		maximumLoad=450;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\V_RUCK_BLK_B"
		};
	
	};
	class BR_ILCS_Rucksack_Basic_Silver: OPTRE_ILCS_Rucksack_Black
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] ILCS Backpack (Basic) Silver";
		maximumLoad=300;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\V_RUCK_BLK_S"
		};
	};
	class BR_ILCS_Rucksack_Medic_Silver: OPTRE_ILCS_Rucksack_Medical
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] ILCS Backpack (Medic) Silver";
		maximumLoad=300;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\V_RUCK_MED_S",
			"optre_weapons\items\data\biofoam_co.paa"
		};
	
	};
	class BR_ILCS_Rucksack_Heavy_Silver: OPTRE_ILCS_Rucksack_Heavy
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] ILCS Backpack (Heavy) Silver";
		maximumLoad=450;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\V_RUCK_BLK_S"
		};
	
	};
	class BR_ANPRC_521_BLK: OPTRE_ANPRC_521_Black
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] AN/PRC-521 (Black)";
		maximumLoad=300;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\soft_backpack_co.paa",
			"61st_Armor\Data\Backpacks\commopack_blk_co.paa"
		};
	};
	class BR_ANPRC_521_BatS: OPTRE_ANPRC_521_Black
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] AN/PRC-521 (Battalion)";
		maximumLoad=300;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\soft_backpack_co.paa",
			"61st_Armor\Data\Backpacks\commopack_BatS_co.paa"
		};
	};
	class BR_ANPRC_521_Red: OPTRE_ANPRC_521_Black
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] AN/PRC-521 (Red)";
		maximumLoad=300;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\soft_backpack_co.paa",
			"61st_Armor\Data\Backpacks\commopack_Red_co.paa"
		};
	};
		class BR_ANPRC_515_BLK: OPTRE_ANPRC_515
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] AN/PRC-515 (Black)";
		maximumLoad=300;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\commopack515_blk_co.paa"
		};
	};
	class BR_ANPRC_515_BatS: OPTRE_ANPRC_515
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] AN/PRC-515 (Battalion)";
		maximumLoad=300;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\commopack515_BatS_co.paa"
		};
	};
	class BR_ANPRC_515_Red: OPTRE_ANPRC_515
	{
		dlc="61st";
		author="TakenFTG";
		displayName="[61st] AN/PRC-515 (Red)";
		maximumLoad=300;
		hiddenSelectionsTextures[]=
		{
			"61st_Armor\Data\Backpacks\commopack515_Red_co.paa"
		};
	};
};