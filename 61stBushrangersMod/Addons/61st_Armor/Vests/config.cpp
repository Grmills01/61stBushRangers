class CfgPatches
{
	class 61st_Armor_Vests
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
	class CfgWeapons
	{		
		class BR_V_BAT
		{
			options[]=
			{
				"Custom"
			};
			label="[61st] Battalion M52D";
			class Custom
			{
				alwaysSelectable=1;
				changeInGame=0;
				changedelay=0;
				label="Rank";
				values[]=
				{"CO","XO","RTO","SGT","MED","PLAIN"};
				class CO
				{label="$STR_BR_BAT_CO"};
				class XO
				{label="$STR_BR_BAT_XO"};
				class RTO
				{label="$STR_BR_BAT_RTO"};
				class SGT
				{label="$STR_BR_BAT_SGT"};
				class MED
				{label="$STR_BR_BAT_MED"};
				class PLAIN
				{label="$STR_BR_BAT_PLAIN"};
			};
		};
		class BR_V_1ST
		{
			options[]=
			{
				"Custom"
			};
			label="[61st] 1-0 M52D";
			class Custom
			{
				alwaysSelectable=1;
				changeInGame=0;
				changedelay=0;
				label="Rank";
				values[]=
				{"CO","XO","RTO","SGT","MED","PLAIN"};
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
		class BR_V_1I1
		{
			options[]=
			{
				"Custom"
			};
			label="[61st] 1-1 M52D";
			class Custom
			{
				alwaysSelectable=1;
				changeInGame=0;
				changedelay=0;
				label="Rank";
				values[]=
				{"LDR","SIC","RTO","MED","PLAIN"};
				class LDR
				{label="$STR_BR_1I1_LDR"};
				class SIC
				{label="$STR_BR_1I1_2IC"};
				class RTO
				{label="$STR_BR_1I1_RTO"};
				class MED
				{label="$STR_BR_1I1_MED"};
				class PLAIN
				{label="$STR_BR_1I1_PLAIN"};
			};
		};
		class BR_V_1I2
		{
			options[]=
			{
				"Custom"
			};
			label="[61st] 1-2 M52D";
			class Custom
			{
				alwaysSelectable=1;
				changeInGame=0;
				changedelay=0;
				label="Rank";
				values[]=
				{"LDR","SIC","RTO","MED","PLAIN"};
				class LDR
				{label="$STR_BR_1I2_LDR"};
				class SIC
				{label="$STR_BR_1I2_2IC"};
				class RTO
				{label="$STR_BR_1I2_RTO"};
				class MED
				{label="$STR_BR_1I2_MED"};
				class PLAIN
				{label="$STR_BR_1I2_PLAIN"};
			};
		};
		class BR_V_1I3
		{
			options[]=
			{
				"Custom"
			};
			label="[61st] 1-3 M52D";
			class Custom
			{
				alwaysSelectable=1;
				changeInGame=0;
				changedelay=0;
				label="Rank";
				values[]=
				{"LDR","SIC","RTO","MED","PLAIN"};
				class LDR
				{label="$STR_BR_1I3_LDR"};
				class SIC
				{label="$STR_BR_1I3_2IC"};
				class RTO
				{label="$STR_BR_1I3_RTO"};
				class MED
				{label="$STR_BR_1I3_MED"};
				class PLAIN
				{label="$STR_BR_1I3_PLAIN"};
			};
		};
		class BR_V_RSV
		{
			options[]=
			{
				"Custom"
			};
			label="[61st] Reservists M52D";
			class Custom
			{
				alwaysSelectable=1;
				changeInGame=0;
				changedelay=0;
				label="Rank";
				values[]=
				{"RTO","MED","PLAIN"};
				class RTO
				{label="$STR_BR_RSV_RTO";};
				class MED
				{label="$STR_BR_RSV_MED"}
				class PLAIN
				{label="$STR_BR_RSV_PLAIN"}
			};
		};
		class BR_V_SQD
		{
			options[]=
			{
				"Custom"
			};
			label="[61st] SQUADRON M52D";
			class Custom
			{
				alwaysSelectable=1;
				changeingame=0;
				changedelay=0;
				label="Rank";
				values[]=
				{"CO","XO","WOFF","PLAIN"};
				class CO
				{label="$STR_BR_SQD_CO";};
				class XO
				{label="$STR_BR_SQD_XO"}
				class WOFF
				{label="$STR_BR_SQD_WOFF"}
				class PLAIN
				{label="$STR_BR_SQD_PLAIN"}
			};
		};
	};
};

class XtdGearInfos
{
	class CfgWeapons
	{
		class BR_V_BAT_CO
		{
			Model="BR_V_BAT";
			Custom="CO";
		};
		class BR_V_BAT_XO
		{
			Model="BR_V_BAT";
			Custom="XO";
		};
		class BR_V_BAT_RTO
		{
			Model="BR_V_BAT";
			Custom="RTO";
		};
		class BR_V_BAT_SGT
		{
			Model="BR_V_BAT";
			Custom="SGT";
		};
		class BR_V_BAT_MED
		{
			Model="BR_V_BAT";
			Custom="MED";
		};
		class BR_V_BAT_PLAIN
		{
			Model="BR_V_BAT";
			Custom="PLAIN";
		};
		class BR_V_1ST_CO
		{
			Model="BR_V_1ST";
			Custom="CO";
		};

		class BR_V_1ST_XO
		{
			Model="BR_V_1ST";
			Custom="XO";
		};

		class BR_V_1ST_RTO
		{
			Model="BR_V_1ST";
			Custom="RTO";
		};

		class BR_V_1ST_SGT
		{
			Model="BR_V_1ST";
			Custom="SGT";
		};

		class BR_V_1ST_MED
		{
			Model="BR_V_1ST";
			Custom="MED";
		};

		class BR_V_1ST_PLAIN
		{
			Model="BR_V_1ST";
			Custom="PLAIN";
		};

		class BR_V_1I1_LDR
		{
			Model="BR_V_1I1";
			Custom="LDR";
		};

		class BR_V_1I1_2IC
		{
			Model="BR_V_1I1";
			Custom="2IC";
		};

		class BR_V_1I1_RTO
		{
			Model="BR_V_1I1";
			Custom="RTO";
		};

		class BR_V_1I1_MED
		{
			Model="BR_V_1I1";
			Custom="MED";
		};

		class BR_V_1I1_PLAIN
		{
			Model="BR_V_1I1";
			Custom="PLAIN";
		};

		class BR_V_1I2_LDR
		{
			Model="BR_V_1I2";
			Custom="LDR";
		};

		class BR_V_1I2_2IC
		{
			Model="BR_V_1I2";
			Custom="2IC";
		};

		class BR_V_1I2_RTO
		{
			Model="BR_V_1I2";
			Custom="RTO";
		};

		class BR_V_1I2_MED
		{
			Model="BR_V_1I2";
			Custom="MED";
		};

		class BR_V_1I2_PLAIN
		{
			Model="BR_V_1I2";
			Custom="PLAIN";
		};

		class BR_V_1I3_LDR
		{
			Model="BR_V_1I3";
			Custom="LDR";
		};

		class BR_V_1I3_2IC
		{
			Model="BR_V_1I3";
			Custom="2IC";
		};

		class BR_V_1I3_RTO
		{
			Model="BR_V_1I3";
			Custom="RTO";
		};

		class BR_V_1I3_MED
		{
			Model="BR_V_1I3";
			Custom="MED";
		};

		class BR_V_1I3_PLAIN
		{
			Model="BR_V_1I3";
			Custom="PLAIN";
		};

		class BR_V_RSV_RTO
		{
			Model="BR_V_RSV";
			Custom="RTO";
		};

		class BR_V_RSV_MED
		{
			Model="BR_V_RSV";
			Custom="MED";
		};

		class BR_V_RSV_PLAIN
		{
			Model="BR_V_RSV";
			Custom="PLAIN";
		};

		class BR_V_SQD_CO
		{
			Model="BR_V_SQD";
			Custom="CO";
		};

		class BR_V_SQD_XO
		{
			Model="BR_V_SQD";
			Custom="XO";
		};

		class BR_V_SQD_WOFF
		{
			Model="BR_V_SQD";
			Custom="WOFF";
		};
		class BR_V_SQD_PLAIN_RIFLEMAN
		{
			Model="BR_V_SQD";
			Custom="PLAIN";
		};
	};
};
class CfgWeapons {
#include "CfgWeapons.hpp"
#include "Battalion.hpp"
#include "1stPlatoon.hpp"
#include "1I1.hpp"
#include "1I2.hpp"
#include "1I3.hpp"
#include "SQD.hpp"
};