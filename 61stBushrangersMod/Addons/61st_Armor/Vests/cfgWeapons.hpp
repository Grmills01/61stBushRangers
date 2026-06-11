	class Uniform_Base;
	class UniformItem;
    class VestItem;
	class M52_ODST_Vest_Base;
	class BR_V_RSV_PLAIN: M52_ODST_Vest_Base
    {
        scope = 2;
        scopeArsenal = 2;
        dlc = "61st";
        author = "TakenFTG";
        displayName = "[61st] Reservist Vest (Rifleman)";
        picture = "\optre_unsc_units\army\icons\odst_vest";
        model = "MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";

        hiddenSelections[] =
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
            "Camo11",
            "Camo12",
            "Camo13",
            "Camo14",
            "Camo15",
            "Camo16",
            "Camo17",
            "Camo18",
            "Camo19",
            "Camo20",
            "Camo21",
            "Camo22",
            "Camo23",
            "Camo24",
            "Camo25",
            "Camo26",
            "Camo27",
            "Camo28",
            "Camo29",
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            //"StomachPouch",
            "TorsoPMLeft",
            "TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            "WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            "WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            "LegPouchL",
            "LegPouchR",
        };

        hiddenSelectionsTextures[] =
        {
            "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_CQB_co.paa", // Camo1: CQB_Left
            "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_CQB_co.paa", // Camo2: CQB_Right
            "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Marksman_co.paa", // Camo3: Marksman_Left
            "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Marksman_co.paa", // Camo4: Marksman_Right
            "61st_Armor\Data\Vests\Reserves\BR_V_RSV_PLAIN.paa", // Camo5: ODST_Bracer_Left
            "61st_Armor\Data\Vests\Reserves\BR_V_RSV_PLAIN.paa", // Camo6: ODST_Bracer_Right
            "61st_Armor\Data\Vests\Reserves\BR_V_RSV_PLAIN.paa", // Camo7: ODST_Chest
            "61st_Armor\Data\Vests\Reserves\BR_V_RSV_PLAIN_Shoulders.paa", // Camo8: ODST_Left
            "61st_Armor\Data\Vests\Reserves\BR_V_RSV_PLAIN_Shoulders.paa", // Camo9: ODST_Right
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo10: ChestPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo11: ChestPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", // Camo12: ChestPouch
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", // Camo13: LShoulderRadio
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", // Camo14: RShoulderRadio
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo15: StomachPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo16: TorsoPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo17: TorsoPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", // Camo18: TorsoPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", // Camo19: WaistBack
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo20: WaistGLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo21: WaistGRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo22: WaistPLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo23: WaistPRight
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", // Camo24: WaistRLeft
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", // Camo25: WaistRRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", // Camo26: WaistSLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", // Camo27: WaistSRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", // Camo28: LegPouchL
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", // Camo29: LegPouchR
        };

        hiddenSelectionsMaterials[] =
        {
            "61st_Armor\Data\Vests\Materials\CQB_Shoulders.rvmat",
            "61st_Armor\Data\Vests\Materials\CQB_Shoulders.rvmat",
            "61st_Armor\Data\Vests\Materials\Marksman_Shoulders.rvmat",
            "61st_Armor\Data\Vests\Materials\Marksman_Shoulders.rvmat",
            "61st_Armor\Data\Vests\Materials\ODST_Armor.rvmat",
            "61st_Armor\Data\Vests\Materials\ODST_Armor.rvmat",
            "61st_Armor\Data\Vests\Materials\ODST_Armor.rvmat",
            "61st_Armor\Data\Vests\Materials\ODST_Shoulders.rvmat",
            "61st_Armor\Data\Vests\Materials\ODST_Shoulders.rvmat",
            "61st_Armor\Data\Vests\Materials\MA_TrooperExtras_A.rvmat",
            "61st_Armor\Data\Vests\Materials\MA_TrooperExtras_A.rvmat",
            "61st_Armor\Data\Vests\Materials\MA_TrooperExtras_B.rvmat",
            "61st_Armor\Data\Vests\Materials\Ruck_Radio.rvmat",
            "61st_Armor\Data\Vests\Materials\Ruck_Radio.rvmat",
            "61st_Armor\Data\Vests\Materials\MA_TrooperExtras_A.rvmat",
            "61st_Armor\Data\Vests\Materials\MA_TrooperExtras_A.rvmat",
            "61st_Armor\Data\Vests\Materials\MA_TrooperExtras_A.rvmat",
            "61st_Armor\Data\Vests\Materials\MA_TrooperExtras_B.rvmat",
            "61st_Armor\Data\Vests\Materials\MA_TrooperExtras_B.rvmat",
            "61st_Armor\Data\Vests\Materials\MA_TrooperExtras_A.rvmat",
            "61st_Armor\Data\Vests\Materials\MA_TrooperExtras_A.rvmat",
            "61st_Armor\Data\Vests\Materials\MA_TrooperExtras_A.rvmat",
            "61st_Armor\Data\Vests\Materials\MA_TrooperExtras_A.rvmat",
            "61st_Armor\Data\Vests\Materials\Ruck_Radio.rvmat",
            "61st_Armor\Data\Vests\Materials\Ruck_Radio.rvmat",
            "61st_Armor\Data\Vests\Materials\MA_TrooperExtras_B.rvmat",
            "61st_Armor\Data\Vests\Materials\MA_TrooperExtras_B.rvmat",
            "61st_Armor\Data\Vests\Materials\MA_TrooperExtras_B.rvmat",
            "61st_Armor\Data\Vests\Materials\MA_TrooperExtras_B.rvmat",
        };

        class ItemInfo: VestItem
        {
            vestType = "Rebreather";
            uniformModel = "MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
            containerClass = "Supply180";
            mass = 20;
            modelSides[] = {6};

            hiddenSelections[] =
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
                "Camo11",
                "Camo12",
                "Camo13",
                "Camo14",
                "Camo15",
                "Camo16",
                "Camo17",
                "Camo18",
                "Camo19",
                "Camo20",
                "Camo21",
                "Camo22",
                "Camo23",
                "Camo24",
                "Camo25",
                "Camo26",
                "Camo27",
                "Camo28",
                "Camo29",
                "CQB_Left",
                "CQB_Right",
                "Marksman_Left",
                "Marksman_Right",
                //"ODST_Bracer_Left",
                //"ODST_Bracer_Right",
                //"ODST_Chest",
                //"ODST_Left",
                //"ODST_Right",
                "ChestPMLeft",
                "ChestPMRight",
                "ChestPouch",
                "LShoulderRadio",
                "RShoulderRadio",
                //"StomachPouch",
                "TorsoPMLeft",
                "TorsoPMRight",
                "TorsoPouch",
                //"WaistBack",
                "WaistGLeft",
                "WaistGRight",
                //"WaistPLeft",
                "WaistPRight",
                "WaistRLeft",
                "WaistRRight",
                "WaistSLeft",
                //"WaistSRight",
                "LegPouchL",
                "LegPouchR",
            };

            hiddenSelectionsTextures[] =
            {
                "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_CQB_co.paa", // Camo1
                "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_CQB_co.paa", // Camo2
                "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Marksman_co.paa", // Camo3
                "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Marksman_co.paa", // Camo4
                "61st_Armor\Data\Vests\Reserves\BR_V_RSV_PLAIN.paa", // Camo5
                "61st_Armor\Data\Vests\Reserves\BR_V_RSV_PLAIN.paa", // Camo6
                "61st_Armor\Data\Vests\Reserves\BR_V_RSV_PLAIN.paa", // Camo7
                "61st_Armor\Data\Vests\Reserves\BR_V_RSV_PLAIN_Shoulders.paa", // Camo8
                "61st_Armor\Data\Vests\Reserves\BR_V_RSV_PLAIN_Shoulders.paa", // Camo9
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo10
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo11
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", // Camo12
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", // Camo13
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", // Camo14
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo15
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo16
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo17
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", // Camo18
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", // Camo19
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo20
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo21
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo22
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo23
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", // Camo24
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", // Camo25
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", // Camo26
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", // Camo27
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", // Camo28
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", // Camo29
            };

            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=80;
					passThrough=0.08;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=80;
					passThrough=0.08;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=80;
					passThrough=0.08;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=80;
					passThrough=0.08;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=80;
					passThrough=0.08;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.08;
					armor=80;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=80;
					passThrough=0.08;
				};
			};
        };
    };
	class BR_V_RSV_MED: BR_V_RSV_PLAIN
    {
        scope = 2;
        scopeArsenal = 2;
        dlc = "61st";
        author = "TakenFTG";
        displayName = "[61st] Reservist Vest (Medic)";
        picture = "\optre_unsc_units\army\icons\odst_vest";
        model = "MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";

        hiddenSelections[] =
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
            "Camo11",
            "Camo12",
            "Camo13",
            "Camo14",
            "Camo15",
            "Camo16",
            "Camo17",
            "Camo18",
            "Camo19",
            "Camo20",
            "Camo21",
            "Camo22",
            "Camo23",
            "Camo24",
            "Camo25",
            "Camo26",
            "Camo27",
            "Camo28",
            "Camo29",
            "CQB_Left",
            "CQB_Right",
            "Marksman_Left",
            "Marksman_Right",
            //"ODST_Bracer_Left",
            //"ODST_Bracer_Right",
            //"ODST_Chest",
            //"ODST_Left",
            //"ODST_Right",
            "ChestPMLeft",
            "ChestPMRight",
            "ChestPouch",
            "LShoulderRadio",
            "RShoulderRadio",
            //"StomachPouch",
            //"TorsoPMLeft",
            //"TorsoPMRight",
            "TorsoPouch",
            //"WaistBack",
            "WaistGLeft",
            "WaistGRight",
            //"WaistPLeft",
            "WaistPRight",
            "WaistRLeft",
            "WaistRRight",
            "WaistSLeft",
            //"WaistSRight",
            //"LegPouchL",
            "LegPouchR",
        };

        hiddenSelectionsTextures[] =
        {
            "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_CQB_co.paa", // Camo1: CQB_Left
            "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_CQB_co.paa", // Camo2: CQB_Right
            "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Marksman_co.paa", // Camo3: Marksman_Left
            "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Marksman_co.paa", // Camo4: Marksman_Right
            "61st_Armor\Data\Vests\Reserves\BR_V_RSV_MED.paa", // Camo5: ODST_Bracer_Left
            "61st_Armor\Data\Vests\Reserves\BR_V_RSV_MED.paa", // Camo6: ODST_Bracer_Right
            "61st_Armor\Data\Vests\Reserves\BR_V_RSV_MED.paa", // Camo7: ODST_Chest
            "61st_Armor\Data\Vests\Reserves\BR_V_RSV_MED_Shoulders.paa", // Camo8: ODST_Left
            "61st_Armor\Data\Vests\Reserves\BR_V_RSV_MED_Shoulders.paa", // Camo9: ODST_Right
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo10: ChestPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo11: ChestPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", // Camo12: ChestPouch
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", // Camo13: LShoulderRadio
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", // Camo14: RShoulderRadio
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo15: StomachPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo16: TorsoPMLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo17: TorsoPMRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", // Camo18: TorsoPouch
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", // Camo19: WaistBack
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo20: WaistGLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo21: WaistGRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo22: WaistPLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo23: WaistPRight
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", // Camo24: WaistRLeft
            "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", // Camo25: WaistRRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", // Camo26: WaistSLeft
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", // Camo27: WaistSRight
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", // Camo28: LegPouchL
            "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", // Camo29: LegPouchR
        };

        hiddenSelectionsMaterials[] =
        {
            "61st_Armor\Data\Vests\Materials\CQB_Shoulders.rvmat",
            "61st_Armor\Data\Vests\Materials\CQB_Shoulders.rvmat",
            "61st_Armor\Data\Vests\Materials\Marksman_Shoulders.rvmat",
            "61st_Armor\Data\Vests\Materials\Marksman_Shoulders.rvmat",
            "61st_Armor\Data\Vests\Materials\ODST_Armor.rvmat",
            "61st_Armor\Data\Vests\Materials\ODST_Armor.rvmat",
            "61st_Armor\Data\Vests\Materials\ODST_Armor.rvmat",
            "61st_Armor\Data\Vests\Materials\ODST_Shoulders.rvmat",
            "61st_Armor\Data\Vests\Materials\ODST_Shoulders.rvmat",
            "61st_Armor\Data\Vests\Materials\MA_TrooperExtras_A.rvmat",
            "61st_Armor\Data\Vests\Materials\MA_TrooperExtras_A.rvmat",
            "61st_Armor\Data\Vests\Materials\MA_TrooperExtras_B.rvmat",
            "61st_Armor\Data\Vests\Materials\Ruck_Radio.rvmat",
            "61st_Armor\Data\Vests\Materials\Ruck_Radio.rvmat",
            "61st_Armor\Data\Vests\Materials\MA_TrooperExtras_A.rvmat",
            "61st_Armor\Data\Vests\Materials\MA_TrooperExtras_A.rvmat",
            "61st_Armor\Data\Vests\Materials\MA_TrooperExtras_A.rvmat",
            "61st_Armor\Data\Vests\Materials\MA_TrooperExtras_B.rvmat",
            "61st_Armor\Data\Vests\Materials\MA_TrooperExtras_B.rvmat",
            "61st_Armor\Data\Vests\Materials\MA_TrooperExtras_A.rvmat",
            "61st_Armor\Data\Vests\Materials\MA_TrooperExtras_A.rvmat",
            "61st_Armor\Data\Vests\Materials\MA_TrooperExtras_A.rvmat",
            "61st_Armor\Data\Vests\Materials\MA_TrooperExtras_A.rvmat",
            "61st_Armor\Data\Vests\Materials\Ruck_Radio.rvmat",
            "61st_Armor\Data\Vests\Materials\Ruck_Radio.rvmat",
            "61st_Armor\Data\Vests\Materials\MA_TrooperExtras_B.rvmat",
            "61st_Armor\Data\Vests\Materials\MA_TrooperExtras_B.rvmat",
            "61st_Armor\Data\Vests\Materials\MA_TrooperExtras_B.rvmat",
            "61st_Armor\Data\Vests\Materials\MA_TrooperExtras_B.rvmat",
        };

        class ItemInfo: VestItem
        {
            vestType = "Rebreather";
            uniformModel = "MA_Armor\data\Vests\M52_ODST\M52_ODST_Vest.p3d";
            containerClass = "Supply180";
            mass = 20;
            modelSides[] = {6};

            hiddenSelections[] =
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
                "Camo11",
                "Camo12",
                "Camo13",
                "Camo14",
                "Camo15",
                "Camo16",
                "Camo17",
                "Camo18",
                "Camo19",
                "Camo20",
                "Camo21",
                "Camo22",
                "Camo23",
                "Camo24",
                "Camo25",
                "Camo26",
                "Camo27",
                "Camo28",
                "Camo29",
                "CQB_Left",
                "CQB_Right",
                "Marksman_Left",
                "Marksman_Right",
                //"ODST_Bracer_Left",
                //"ODST_Bracer_Right",
                //"ODST_Chest",
                //"ODST_Left",
                //"ODST_Right",
                "ChestPMLeft",
                "ChestPMRight",
                "ChestPouch",
                "LShoulderRadio",
                "RShoulderRadio",
                //"StomachPouch",
                //"TorsoPMLeft",
                //"TorsoPMRight",
                "TorsoPouch",
                //"WaistBack",
                "WaistGLeft",
                "WaistGRight",
                //"WaistPLeft",
                "WaistPRight",
                "WaistRLeft",
                "WaistRRight",
                "WaistSLeft",
                //"WaistSRight",
                //"LegPouchL",
                "LegPouchR",
            };

            hiddenSelectionsTextures[] =
            {
                "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_CQB_co.paa", // Camo1
                "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_CQB_co.paa", // Camo2
                "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Marksman_co.paa", // Camo3
                "MA_Armor\data\Vests\M52_ODST\Color_Variants\MA_ODST_Marksman_co.paa", // Camo4
                "61st_Armor\Data\Vests\Reserves\BR_V_RSV_MED.paa", // Camo5
                "61st_Armor\Data\Vests\Reserves\BR_V_RSV_MED.paa", // Camo6
                "61st_Armor\Data\Vests\Reserves\BR_V_RSV_MED.paa", // Camo7
                "61st_Armor\Data\Vests\Reserves\BR_V_RSV_MED_Shoulders.paa", // Camo8
                "61st_Armor\Data\Vests\Reserves\BR_V_RSV_MED_Shoulders.paa", // Camo9
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo10
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo11
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", // Camo12
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", // Camo13
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", // Camo14
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo15
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo16
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo17
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", // Camo18
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", // Camo19
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo20
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo21
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo22
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_A_CO.paa", // Camo23
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", // Camo24
                "MA_Armor\data\Backpacks\ODST_Rucksack\Attachments\Backpack_Radio_ODST_co.paa", // Camo25
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", // Camo26
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", // Camo27
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", // Camo28
                "MA_Armor\data\vests\Marine_Pouches\data\MA_TrooperExtras_B_CO.paa", // Camo29
            };
            class HitpointsProtectionInfo
			{
				class Neck
				{
					hitpointName="HitNeck";
					armor=80;
					passThrough=0.08;
				};
				class Arms
				{
					hitpointName="HitArms";
					armor=80;
					passThrough=0.08;
				};
				class Chest
				{
					hitpointName="HitChest";
					armor=80;
					passThrough=0.08;
				};
				class Diaphragm
				{
					hitpointName="HitDiaphragm";
					armor=80;
					passThrough=0.08;
				};
				class Abdomen
				{
					hitpointName="HitAbdomen";
					armor=80;
					passThrough=0.08;
				};
				class Body
				{
					hitpointName="HitBody";
					passThrough=0.08;
					armor=80;
				};
				class Legs
				{
					hitpointName="HitLegs";
					armor=80;
					passThrough=0.08;
				};
			};
        };
    };