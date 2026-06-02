	class HeadgearItem;
    class CH252D_Helmet;
    
    class BR_H_RSV_PLAIN: CH252D_Helmet
    {
        dlc="61st";
        author="TakenFTG";
        ace_hearing_protection=1;
        displayName="[61st] Reservist Helmet (Plain)";
        
        // Root selections for ground/inventory model
        hiddenSelections[]=
        {
            "Camo1", 
            "Camo2"
        };
        hiddenSelectionsTextures[]=
        {
            "61st_Armor\Data\Helmets\Reserves\BR_H_RSV_PLAIN.paa",
            "61st_Armor\data\Helmets\Materials\V_CH252D_DEF_V_CO.paa"
        };
        hiddenSelectionsMaterials[]=
        {
            "61st_Armor\Data\Helmets\Materials\V_CH252D.rvmat",
            "61st_Armor\Data\Helmets\Materials\V_CH252D_V.rvmat"
        };
        CBRN_protection=1;
        
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="MA_Armor\data\Helmets\Human_ODST\Reach_ODST_Helm.p3d";
            picture="";
            modelSides[]={6};
            allowedSlots[]={801,901,701,605};
            
            // ItemInfo selections for character model - MUST MATCH THE ROOT
            hiddenSelections[]=
            {
                "Camo1", 
                "Camo2"
            };
            // Fixed: Copying textures into ItemInfo so they don't break when equipped
            hiddenSelectionsTextures[]=
            {
                "61st_Armor\Data\Helmets\Reserves\BR_H_RSV_PLAIN.paa",
                "61st_Armor\data\Helmets\Materials\V_CH252D_DEF_V_CO.paa"
            };
            hiddenSelectionsMaterials[]=
            {
                "61st_Armor\Data\Helmets\Materials\V_CH252D.rvmat",
                "61st_Armor\Data\Helmets\Materials\V_CH252D_V.rvmat" // Fixed from empty string
            };
            
            class HitpointsProtectionInfo
            {
                class Face
                {
                    armor=180;
                    hitpointName="HitFace";
                    passThrough=0.08;
                };
                class Head
                {
                    armor=180;
                    hitPointName="HitHead";
                    passThrough=0.08;
                };
                class Neck
                {
                    armor=180;
                    hitpointName="HitNeck";
                    passThrough=0.08;
                };
            };
        };
        allowedFacewear[]={};
    };

    class BR_H_RSV_PLAIN_dp: BR_H_RSV_PLAIN
    {
        dlc="61st";
        author="TakenFTG";
        ace_hearing_protection=1;
        scope=1;
        scopeArsenal=1;
        displayName="[61st] Reservist Helmet (Plain)";
        
        hiddenSelections[]=
        {
            "Camo1", // Fixed: Swapped "Camo" to "Camo1" to match base model definitions
            "Camo2"
        };
        hiddenSelectionsTextures[]=
        {
            "61st_Armor\Data\Helmets\Reserves\BR_H_RSV_PLAIN.paa", // Added .paa
            "61st_Armor\data\Helmets\Materials\V_CH252D_CLR_V_CA.paa" // Added .paa
        };
        hiddenSelectionsMaterials[]=
        {
            "61st_Armor\Data\Helmets\Materials\V_CH252D.rvmat",
            ""
        };
        CBRN_protection=1;
        
        class ItemInfo: HeadgearItem
        {
            mass=30;
            uniformModel="OPTRE_UNSC_Units\Army\odst_helmet_dp";
            picture="";
            
            hiddenSelections[]=
            {
                "Camo1", // Fixed to match parent class
                "Camo2"
            };
            hiddenSelectionsTextures[]=
            {
                "61st_Armor\Data\Helmets\Reserves\BR_H_RSV_PLAIN.paa",
                "MA_Armor\data\Helmets\Human_ODST\Color_Variants\MA_ODST_Depolarized_Visor_CA.paa"
            };
            hiddenSelectionsMaterials[]=
            {
                "61st_Armor\Data\Helmets\Materials\V_CH252D.rvmat",
                "61st_Armor\Data\Helmets\Materials\V_CH252D_V_CLR.rvmat"
            };
        };
        allowedFacewear[]={};
    };