class CfgPatches
{
	class CF_Weapons_PO
	{
		// Use meta information from specified addon. Used to avoid repeated declarations.
		addonRootClass = "CF_Weapons";
 
		requiredVersion = 1.62;
		requiredAddons[] = {"po_factions_me", "po_vehicles"};
		units[] = {};
		weapons[] = {};
	};
};

// Small Arms - po_factions_me

class Mode_SemiAuto;
class LMG_M200;

class CfgWeapons {
	
	class srifle_EBR_F;
	
	class LOP_Weap_LeeEnfield : srifle_EBR_F {
		aiDispersionCoefY = 5;
		aiDispersionCoefX = 5;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		
		class Single : Mode_SemiAuto {
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.6;
			aiRateOfFire = 2;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 300;
		};
		
		class far_optic1 : Single {
			aiDispersionCoefY = 0.6;
			aiDispersionCoefX = 0.6;
			showToPlayer = false;
			requiredOpticType = 1;
			minRange = 250;
			minRangeProbab = 0.6;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.2;
			aiRateOfFire = 4;
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 400;
		};
		
		class medium_optic2 : Single {
			aiDispersionCoefY = 0.6;
			aiDispersionCoefX = 0.6;
			showToPlayer = false;
			requiredOpticType = 2;
			minRange = 250;
			minRangeProbab = 0.4;
			midRange = 500;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.3;
			aiRateOfFire = 5;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 500;
		};
		
		class far_optic2 : far_optic1 {
			aiDispersionCoefY = 0.5;
			aiDispersionCoefX = 0.5;
			showToPlayer = false;
			requiredOpticType = 2;
			minRange = 500;
			minRangeProbab = 0.3;
			midRange = 800;
			midRangeProbab = 0.7;
			maxRange = 1000;
			maxRangeProbab = 0.3;
			aiRateOfFire = 5;
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 800;
		};
	};
	
// Heavy Weapons - po_vehicles

	class LOP_PKT : LMG_M200 {
		aiDispersionCoefY = 9;
		aiDispersionCoefX = 9;
	};
};
