#define true	1
#define false	0

class CfgPatches {
	class CF_Weapons_RHS_AFRF {
		addonRootClass = "CF_Weapons";
		requiredVersion = 1.62;
		requiredAddons[] = {"rhs_c_weapons", "rhs_c_heavyweapons", "asr_ai3_rhs_c"};
		units[] = {};
		weapons[] = {};
	};
};
class Mode_Burst;	// External class reference
class Mode_SemiAuto;	// External class reference
class Mode_FullAuto;	// External class reference
class ItemCore;	// External class reference

class CfgWeapons {
	class Rifle_Base_F;	// External class reference
	class UGL_F;	// External class reference
	class rhs_weap_ak74m;	// External class reference
	class Rifle_Long_Base_F;	// External class reference
	class Launcher_Base_F;	// External class reference
	class InventoryOpticsItem_Base_F;	// External class reference
	class MGun;	// External class reference
	class LMG_RCWS;	// External class reference
	class GMG_20mm;	// External class reference
	class rhs_acc_sniper_base;	// External class reference
	class GMG_F;	// External class reference
	
	class GP25_Base : UGL_F {
		aiDispersionCoefX = 25;
		aiDispersionCoefY = 25;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		
		class Single : Mode_SemiAuto {
			aiRateOfFire = 6;	// delay between shots at given distance
			aiRateOfFireDistance = 250;
			aiRateOfFireDispersion = 2;
			minRange = 60;
			minRangeProbab = 0.5;
			midRange = 250;
			midRangeProbab = 0.55;
			maxRange = 400;
			maxRangeProbab = 0.2;
		};
	};
	
	class rhs_weap_ak74m_Base_F : Rifle_Base_F {
		aiDispersionCoefY = 4;
		aiDispersionCoefX = 5;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		modes[] = {"Single", "single_medium_optics1", "single_medium_optics2", "FullAuto", "fullauto_medium"};
		
		class Single : Mode_SemiAuto {
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 550;
			maxRangeProbab = 0.6;
			aiRateOfFire = 0.5;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 350;
		};
		
		class FullAuto : Mode_FullAuto {};
		
		class single_medium_optics1 : Single {
			showToPlayer = false;
			requiredOpticType = 1;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 550;
			maxRangeProbab = 0.6;
			aiRateOfFire = 0.5;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 350;
		};
		
		class single_medium_optics2 : single_medium_optics1 {
			showToPlayer = false;
			requiredOpticType = 2;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.7;
			aiRateOfFire = 0.75;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 400;
		};
		
		class fullauto_medium : FullAuto {
			showToPlayer = false;
			burst = 2;
			burstRangeMax = 6;
			minRange = 1;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.8;
			maxRange = 250;
			maxRangeProbab = 0.45;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 150;
		};
	};
	
	class rhs_weap_akm : rhs_weap_ak74m {
		aiDispersionCoefY = 4;
		aiDispersionCoefX = 5;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		modes[] = {"Single", "single_medium_optics1", "single_medium_optics2", "FullAuto", "fullauto_medium"};
		
		class Single : Mode_SemiAuto {
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 550;
			maxRangeProbab = 0.6;
			aiRateOfFire = 0.5;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 350;
		};
		
		class FullAuto : Mode_FullAuto {};
		
		class single_medium_optics1 : Single {
			showToPlayer = false;
			requiredOpticType = 1;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 550;
			maxRangeProbab = 0.6;
			aiRateOfFire = 0.5;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 350;
		};
		
		class single_medium_optics2 : single_medium_optics1 {
			showToPlayer = false;
			requiredOpticType = 2;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.7;
			aiRateOfFire = 0.75;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 400;
		};
		
		class fullauto_medium : FullAuto {
			showToPlayer = false;
			burst = 2;
			burstRangeMax = 6;
			minRange = 1;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.8;
			maxRange = 250;
			maxRangeProbab = 0.45;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 150;
		};
	};
	
	class rhs_weap_ak103_base : rhs_weap_akm {
		aiDispersionCoefY = 4;
		aiDispersionCoefX = 5;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		modes[] = {"Single", "single_medium_optics1", "single_medium_optics2", "FullAuto", "fullauto_medium"};
		
		class Single : Mode_SemiAuto {
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 550;
			maxRangeProbab = 0.6;
			aiRateOfFire = 0.5;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 350;
		};
		
		class FullAuto : Mode_FullAuto {};
		
		class single_medium_optics1 : Single {
			showToPlayer = false;
			requiredOpticType = 1;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 550;
			maxRangeProbab = 0.6;
			aiRateOfFire = 0.5;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 350;
		};
		
		class single_medium_optics2 : single_medium_optics1 {
			showToPlayer = false;
			requiredOpticType = 2;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.7;
			aiRateOfFire = 0.75;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 400;
		};
		
		class fullauto_medium : FullAuto {
			showToPlayer = false;
			burst = 2;
			burstRangeMax = 6;
			minRange = 1;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.8;
			maxRange = 250;
			maxRangeProbab = 0.45;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 150;
		};
	};
	
	class rhs_weap_ak103_1 : rhs_weap_ak103_base {
		aiDispersionCoefY = 4;
		aiDispersionCoefX = 5;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		modes[] = {"Single", "single_medium_optics1", "single_medium_optics2", "FullAuto", "fullauto_medium"};
		
		class Single : Mode_SemiAuto {
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 550;
			maxRangeProbab = 0.6;
			aiRateOfFire = 0.5;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 350;
		};
		
		class FullAuto : Mode_FullAuto {};
		
		class single_medium_optics1 : Single {
			showToPlayer = false;
			requiredOpticType = 1;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 550;
			maxRangeProbab = 0.6;
			aiRateOfFire = 0.5;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 350;
		};
		
		class single_medium_optics2 : single_medium_optics1 {
			showToPlayer = false;
			requiredOpticType = 2;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.7;
			aiRateOfFire = 0.75;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 400;
		};
		
		class fullauto_medium : FullAuto {
			showToPlayer = false;
			burst = 2;
			burstRangeMax = 6;
			minRange = 1;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.8;
			maxRange = 250;
			maxRangeProbab = 0.45;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 150;
		};
	};
	
	class rhs_weap_ak103_2 : rhs_weap_ak103_base {
		aiDispersionCoefY = 4;
		aiDispersionCoefX = 5;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		modes[] = {"Single", "single_medium_optics1", "single_medium_optics2", "Burst"};
		
		class Single : Mode_SemiAuto {
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 550;
			maxRangeProbab = 0.6;
			aiRateOfFire = 0.5;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 350;
		};
		
		class single_medium_optics1 : Single {
			showToPlayer = false;
			requiredOpticType = 1;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 550;
			maxRangeProbab = 0.6;
			aiRateOfFire = 0.5;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 350;
		};
		
		class single_medium_optics2 : single_medium_optics1 {
			showToPlayer = false;
			requiredOpticType = 2;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.7;
			aiRateOfFire = 0.75;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 400;
		};
		
		class Burst : Mode_Burst {
			minRange = 1;
			minRangeProbab = 0.8;
			midRange = 150;
			midRangeProbab = 0.7;
			maxRange = 250;
			maxRangeProbab = 0.5;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 150;
		};
	};
	class rhs_weap_ak74;	// External class reference
	
	class rhs_weap_aks74 : rhs_weap_ak74 {
		class Single;	// External class reference
		class FullAuto;	// External class reference
	};
	
	class rhs_weap_aks74u : rhs_weap_aks74 {
		aiDispersionCoefY = 4;
		aiDispersionCoefX = 5;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		modes[] = {"Single", "single_medium_optics1", "single_medium_optics2", "FullAuto", "fullauto_medium"};
		
		class Single : Single {
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 550;
			maxRangeProbab = 0.6;
			aiRateOfFire = 0.5;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 350;
		};
		
		class FullAuto : FullAuto {};
		
		class single_medium_optics1 : Single {
			showToPlayer = false;
			requiredOpticType = 1;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 550;
			maxRangeProbab = 0.6;
			aiRateOfFire = 0.5;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 350;
		};
		
		class single_medium_optics2 : single_medium_optics1 {
			showToPlayer = false;
			requiredOpticType = 2;
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.7;
			aiRateOfFire = 0.75;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 400;
		};
		
		class fullauto_medium : FullAuto {
			showToPlayer = false;
			burst = 2;
			burstRangeMax = 6;
			minRange = 1;
			minRangeProbab = 0.9;
			midRange = 150;
			midRangeProbab = 0.8;
			maxRange = 250;
			maxRangeProbab = 0.45;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 150;
		};
	};
	
	class rhs_weap_asval : rhs_weap_ak74m {
		aiDispersionCoefY = 4;
		aiDispersionCoefX = 5;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		modes[] = {"Single", "single_close_optics1", "single_medium_optics1", "single_far_optics1"};
		
		class Single : Mode_SemiAuto {
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.6;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 200;
		};
		
		class single_close_optics1 : Single {
			showToPlayer = false;
			requiredOpticType = 1;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 400;
			maxRangeProbab = 0.4;
			aiRateOfFire = 2;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 300;
		};
		
		class single_medium_optics1 : single_close_optics1 {
			showToPlayer = false;
			requiredOpticType = 1;
			minRange = 100;
			minRangeProbab = 0.6;
			midRange = 300;
			midRangeProbab = 0.7;
			maxRange = 400;
			maxRangeProbab = 0.2;
			aiRateOfFire = 2;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 300;
		};
		
		class single_far_optics1 : single_medium_optics1 {
			showToPlayer = false;
			requiredOpticType = 2;
			minRange = 200;
			minRangeProbab = 0.4;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.3;
			aiRateOfFire = 3;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 300;
		};
	};
	
	class rhs_weap_svd : rhs_weap_ak74m {
		aiDispersionCoefY = 4;
		aiDispersionCoefX = 5;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		
		class Single : Mode_SemiAuto {
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.6;
			aiRateOfFire = 0.5;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 350;
		};
		
		class single_close_optics1 : Single {
			showToPlayer = false;
			requiredOpticType = 1;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 350;
			midRangeProbab = 0.8;
			maxRange = 500;
			maxRangeProbab = 0.4;
			aiRateOfFire = 2;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 450;
		};
		
		class single_medium_optics1 : single_close_optics1 {
			showToPlayer = false;
			requiredOpticType = 1;
			minRange = 250;
			minRangeProbab = 0.6;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.2;
			aiRateOfFire = 2.5;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 400;
		};
		
		class single_far_optics1 : single_medium_optics1 {
			showToPlayer = false;
			requiredOpticType = 2;
			minRange = 250;
			minRangeProbab = 0.4;
			midRange = 1000;
			midRangeProbab = 0.7;
			maxRange = 1300;
			maxRangeProbab = 0.3;
			aiRateOfFire = 3;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 1000;
		};
	};
	
	class rhs_weap_svdp : rhs_weap_svd {
		class Single : Mode_SemiAuto {
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 350;
			midRangeProbab = 0.7;
			maxRange = 500;
			maxRangeProbab = 0.6;
			aiRateOfFire = 0.5;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 350;
		};
		
		class single_close_optics1 : Single {
			showToPlayer = false;
			requiredOpticType = 1;
			minRange = 2;
			minRangeProbab = 0.9;
			midRange = 350;
			midRangeProbab = 0.8;
			maxRange = 500;
			maxRangeProbab = 0.4;
			aiRateOfFire = 2;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 450;
		};
		
		class single_medium_optics1 : single_close_optics1 {
			showToPlayer = false;
			requiredOpticType = 1;
			minRange = 250;
			minRangeProbab = 0.6;
			midRange = 400;
			midRangeProbab = 0.7;
			maxRange = 800;
			maxRangeProbab = 0.2;
			aiRateOfFire = 2.5;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 400;
		};
		
		class single_far_optics1 : single_medium_optics1 {
			showToPlayer = false;
			requiredOpticType = 2;
			minRange = 250;
			minRangeProbab = 0.4;
			midRange = 1000;
			midRangeProbab = 0.7;
			maxRange = 1300;
			maxRangeProbab = 0.3;
			aiRateOfFire = 3;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 1000;
		};
	};
	
	class rhs_weap_orsis_Base_F : Rifle_Base_F {
		aiDispersionCoefY = 4;
		aiDispersionCoefX = 5;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		
		class Single : Mode_SemiAuto {
			minRange = 2;
			minRangeProbab = 0.3;
			midRange = 250;
			midRangeProbab = 0.7;
			maxRange = 450;
			maxRangeProbab = 0.6;
			aiRateOfFire = 0.5;	// delay between shots at given distance
			aiRateOfFireDispersion = 1;
			aiRateOfFireDistance = 250;
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
			aiRateOfFire = 4;	// delay between shots at given distance
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
			aiRateOfFire = 5;	// delay between shots at given distance
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
			aiRateOfFire = 5;	// delay between shots at given distance
			aiRateOfFireDispersion = 2;
			aiRateOfFireDistance = 800;
		};
	};
	
	class rhs_pkp_base : Rifle_Long_Base_F {
		modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2"};
		aiDispersionCoefY = 9;
		aiDispersionCoefX = 9;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		
		class FullAuto : Mode_FullAuto {};
		
		class close : FullAuto {
			showToPlayer = false;
			aiRateOfFire = 0.5;	// delay between shots at given distance
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 2;
			burst = 4;
			burstRangeMax = 8;
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.3;
		};
		
		class short : close {
			showToPlayer = false;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			burst = 3;
			burstRangeMax = 8;
			minRange = 50;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 400;
			maxRangeProbab = 0.4;
		};
		
		class medium : FullAuto {
			showToPlayer = false;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 2;
			burst = 3;
			burstRangeMax = 6;
			minRange = 300;
			minRangeProbab = 0.7;
			midRange = 450;
			midRangeProbab = 0.6;
			maxRange = 600;
			maxRangeProbab = 0.6;
		};
		
		class far_optic1 : medium {
			showToPlayer = false;
			requiredOpticType = 1;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 2;
			burst = 2;
			burstRangeMax = 6;
			minRange = 300;
			minRangeProbab = 0.3;
			midRange = 550;
			midRangeProbab = 0.8;
			maxRange = 750;
			maxRangeProbab = 0.7;
		};
		
		class far_optic2 : far_optic1 {
			showToPlayer = false;
			requiredOpticType = 2;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 2;
			burst = 2;
			burstRangeMax = 5;
			minRange = 400;
			minRangeProbab = 0.3;
			midRange = 550;
			midRangeProbab = 0.6;
			maxRange = 800;
			maxRangeProbab = 0.7;
		};
	};
	
	class rhs_weap_pkp : rhs_pkp_base {};
	
	class rhs_weap_pkm : rhs_weap_pkp {
		modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2"};
		aiDispersionCoefY = 9;
		aiDispersionCoefX = 9;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		
		class manual : FullAuto {};
		
		class close : manual {
			showToPlayer = false;
			aiRateOfFire = 0.5;	// delay between shots at given distance
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 2;
			burst = 4;
			burstRangeMax = 8;
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.3;
		};
		
		class short : close {
			showToPlayer = false;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 2;
			burst = 3;
			burstRangeMax = 8;
			minRange = 50;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 400;
			maxRangeProbab = 0.4;
		};
		
		class medium : FullAuto {
			showToPlayer = false;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 2;
			burst = 3;
			burstRangeMax = 6;
			minRange = 300;
			minRangeProbab = 0.7;
			midRange = 550;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.6;
		};
		
		class far_optic1 : medium {
			showToPlayer = false;
			requiredOpticType = 1;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 2;
			burst = 2;
			burstRangeMax = 6;
			minRange = 300;
			minRangeProbab = 0.3;
			midRange = 550;
			midRangeProbab = 0.8;
			maxRange = 750;
			maxRangeProbab = 0.7;
		};
		
		class far_optic2 : far_optic1 {
			showToPlayer = false;
			requiredOpticType = 2;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 2;
			burst = 2;
			burstRangeMax = 5;
			minRange = 400;
			minRangeProbab = 0.3;
			midRange = 650;
			midRangeProbab = 0.6;
			maxRange = 800;
			maxRangeProbab = 0.7;
		};
	};
	
	class rhs_weap_rpk74m : rhs_weap_pkp {
		modes[] = {"FullAuto", "close", "short", "medium", "far_optic1", "far_optic2"};
		aiDispersionCoefY = 9;
		aiDispersionCoefX = 9;
		opticsZoomMin = 0.25;
		opticsZoomMax = 1.25;
		opticsZoomInit = 0.75;
		
		class FullAuto : Mode_FullAuto {};
		
		class close : FullAuto {
			showToPlayer = false;
			aiRateOfFire = 0.5;	// delay between shots at given distance
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 2;
			burst = 4;
			burstRangeMax = 8;
			minRange = 0;
			minRangeProbab = 0.5;
			midRange = 15;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.3;
		};
		
		class short : close {
			showToPlayer = false;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 2;
			burst = 3;
			burstRangeMax = 8;
			minRange = 50;
			minRangeProbab = 0.3;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 400;
			maxRangeProbab = 0.4;
		};
		
		class medium : FullAuto {
			showToPlayer = false;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 2;
			burst = 3;
			burstRangeMax = 6;
			minRange = 300;
			minRangeProbab = 0.7;
			midRange = 550;
			midRangeProbab = 0.6;
			maxRange = 700;
			maxRangeProbab = 0.6;
		};
		
		class far_optic1 : medium {
			showToPlayer = false;
			requiredOpticType = 1;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 500;
			aiRateOfFireDispersion = 2;
			burst = 2;
			burstRangeMax = 6;
			minRange = 300;
			minRangeProbab = 0.3;
			midRange = 550;
			midRangeProbab = 0.8;
			maxRange = 750;
			maxRangeProbab = 0.7;
		};
		
		class far_optic2 : far_optic1 {
			showToPlayer = false;
			requiredOpticType = 2;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 2;
			burst = 2;
			burstRangeMax = 5;
			minRange = 400;
			minRangeProbab = 0.3;
			midRange = 650;
			midRangeProbab = 0.6;
			maxRange = 800;
			maxRangeProbab = 0.7;
		};
	};
	
	class rhs_weap_rpg26 : Launcher_Base_F {
		aiDispersionCoefY = 13;
		aiDispersionCoefX = 13;
	};
	
	class rhs_weap_rpg7 : Launcher_Base_F {
		aiDispersionCoefY = 13;
		aiDispersionCoefX = 13;
	};
	
	class rhs_acc_pkas : rhs_acc_sniper_base {
		class ItemInfo : InventoryOpticsItem_Base_F {
			class OpticsModes {
				class ACO {
					opticsZoomMin = 0.25;
					opticsZoomMax = 1.25;
					opticsZoomInit = 0.75;
					distanceZoomMin = 300;
					distanceZoomMax = 300;
				};
			};
		};
	};
	
	class PKT : MGun {
		aiDispersionCoefY = 8;
		aiDispersionCoefX = 8;
	};
	
	class rhs_weap_pkt : PKT {
		aiDispersionCoefY = 8;
		aiDispersionCoefX = 8;
		modes[] = {"manual", "close", "short", "medium", "far"};
		
		class manual : MGun {
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 20;
			midRangeProbab = 0.01;
			maxRange = 50;
			maxRangeProbab = 0.01;
		};
		
		class close : manual {
			showToPlayer = false;
			burst = 6;
			burstRangeMax = 12;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.8;
			midRange = 20;
			midRangeProbab = 0.8;
			maxRange = 50;
			maxRangeProbab = 0.8;
		};
		
		class short : close {
			burst = 5;
			burstRangeMax = 10;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.5;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 400;
			maxRangeProbab = 0.6;
		};
		
		class medium : close {
			burst = 4;
			burstRangeMax = 10;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 700;
			aiRateOfFireDispersion = 1;
			minRange = 300;
			minRangeProbab = 0.4;
			midRange = 550;
			midRangeProbab = 0.8;
			maxRange = 700;
			maxRangeProbab = 0.6;
		};
		
		class far : close {
			burst = 4;
			burstRangeMax = 8;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 1500;
			aiRateOfFireDispersion = 1.5;
			minRange = 700;
			minRangeProbab = 0.4;
			midRange = 1100;
			midRangeProbab = 0.8;
			maxRange = 1500;
			maxRangeProbab = 0.5;
		};
	};
	
	class rhs_weap_DSHKM : LMG_RCWS {
		aiDispersionCoefY = 8;
		aiDispersionCoefX = 8;
		modes[] = {"manual", "close", "short", "medium", "far"};
		
		class manual : MGun {
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 20;
			midRangeProbab = 0.01;
			maxRange = 50;
			maxRangeProbab = 0.01;
		};
		
		class close : manual {
			showToPlayer = false;
			burst = 6;
			burstRangeMax = 12;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.7;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.7;
		};
		
		class short : close {
			burst = 5;
			burstRangeMax = 10;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 400;
			maxRangeProbab = 0.6;
		};
		
		class medium : close {
			burst = 4;
			burstRangeMax = 10;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 700;
			aiRateOfFireDispersion = 1;
			minRange = 300;
			minRangeProbab = 0.4;
			midRange = 550;
			midRangeProbab = 0.8;
			maxRange = 700;
			maxRangeProbab = 0.6;
		};
		
		class far : close {
			burst = 4;
			burstRangeMax = 8;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 1100;
			aiRateOfFireDispersion = 1.5;
			minRange = 600;
			minRangeProbab = 0.4;
			midRange = 1100;
			midRangeProbab = 0.8;
			maxRange = 1500;
			maxRangeProbab = 0.6;
		};
	};
	
	class rhs_weap_nsvt : rhs_weap_DSHKM {
		aiDispersionCoefY = 8;
		aiDispersionCoefX = 8;
		
		class manual : MGun {
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 20;
			midRangeProbab = 0.01;
			maxRange = 50;
			maxRangeProbab = 0.01;
		};
		
		class close : manual {
			showToPlayer = false;
			burst = 6;
			burstRangeMax = 12;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.7;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.7;
		};
		
		class short : close {
			burst = 5;
			burstRangeMax = 10;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 400;
			maxRangeProbab = 0.6;
		};
		
		class medium : close {
			burst = 4;
			burstRangeMax = 10;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 700;
			aiRateOfFireDispersion = 1;
			minRange = 300;
			minRangeProbab = 0.4;
			midRange = 550;
			midRangeProbab = 0.7;
			maxRange = 700;
			maxRangeProbab = 0.6;
		};
		
		class far : close {
			burst = 4;
			burstRangeMax = 8;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 1100;
			aiRateOfFireDispersion = 1.5;
			minRange = 600;
			minRangeProbab = 0.4;
			midRange = 1100;
			midRangeProbab = 0.8;
			maxRange = 1500;
			maxRangeProbab = 0.6;
		};
	};
	
	class KPVT : MGun {
		aiDispersionCoefY = 8;
		aiDispersionCoefX = 8;
	};
	
	class rhs_weap_kpvt : KPVT {
		aiDispersionCoefY = 8;
		aiDispersionCoefX = 8;
		
		class manual : MGun {
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 20;
			midRangeProbab = 0.01;
			maxRange = 50;
			maxRangeProbab = 0.01;
		};
		
		class close : manual {
			showToPlayer = false;
			burst = 6;
			burstRangeMax = 12;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.7;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.7;
		};
		
		class short : close {
			burst = 5;
			burstRangeMax = 10;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 400;
			maxRangeProbab = 0.6;
		};
		
		class medium : close {
			burst = 4;
			burstRangeMax = 10;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 700;
			aiRateOfFireDispersion = 1;
			minRange = 300;
			minRangeProbab = 0.4;
			midRange = 550;
			midRangeProbab = 0.8;
			maxRange = 700;
			maxRangeProbab = 0.6;
		};
		
		class far : close {
			burst = 4;
			burstRangeMax = 8;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 1100;
			aiRateOfFireDispersion = 1.5;
			minRange = 600;
			minRangeProbab = 0.4;
			midRange = 1100;
			midRangeProbab = 0.8;
			maxRange = 1500;
			maxRangeProbab = 0.6;
		};
	};
	
	class RHS_weap_Ags30 : GMG_20mm {
		aiDispersionCoefY = 11;
		aiDispersionCoefX = 11;
		
		class manual : GMG_F {
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 20;
			midRangeProbab = 0.01;
			maxRange = 50;
			maxRangeProbab = 0.01;
		};
		
		class close : manual {
			showToPlayer = false;
			burst = 3;
			burstRangeMax = 6;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.7;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.7;
		};
		
		class short : close {
			burst = 3;
			burstRangeMax = 6;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 300;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 200;
			midRangeProbab = 0.7;
			maxRange = 300;
			maxRangeProbab = 0.6;
		};
		
		class medium : close {
			burst = 3;
			burstRangeMax = 5;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 600;
			aiRateOfFireDispersion = 1;
			minRange = 300;
			minRangeProbab = 0.4;
			midRange = 450;
			midRangeProbab = 0.7;
			maxRange = 600;
			maxRangeProbab = 0.6;
		};
		
		class far : close {
			burst = 2;
			burstRangeMax = 5;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 1000;
			aiRateOfFireDispersion = 1.5;
			minRange = 600;
			minRangeProbab = 0.4;
			midRange = 850;
			midRangeProbab = 0.7;
			maxRange = 1100;
			maxRangeProbab = 0.4;
		};
	};
	
	class rhs_weap_pkm_tigr : rhs_weap_pkt {
		aiDispersionCoefY = 8;
		aiDispersionCoefX = 8;
		
		class manual : MGun {
			minRange = 0;
			minRangeProbab = 0.01;
			midRange = 20;
			midRangeProbab = 0.01;
			maxRange = 50;
			maxRangeProbab = 0.01;
		};
		
		class close : manual {
			showToPlayer = false;
			burst = 6;
			burstRangeMax = 12;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDistance = 50;
			aiRateOfFireDispersion = 1;
			minRange = 0;
			minRangeProbab = 0.7;
			midRange = 20;
			midRangeProbab = 0.7;
			maxRange = 50;
			maxRangeProbab = 0.7;
		};
		
		class short : close {
			burst = 5;
			burstRangeMax = 10;
			aiRateOfFire = 1;	// delay between shots at given distance
			aiRateOfFireDistance = 400;
			aiRateOfFireDispersion = 1;
			minRange = 50;
			minRangeProbab = 0.1;
			midRange = 300;
			midRangeProbab = 0.8;
			maxRange = 400;
			maxRangeProbab = 0.6;
		};
		
		class medium : close {
			burst = 4;
			burstRangeMax = 10;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 700;
			aiRateOfFireDispersion = 1;
			minRange = 300;
			minRangeProbab = 0.4;
			midRange = 550;
			midRangeProbab = 0.8;
			maxRange = 700;
			maxRangeProbab = 0.6;
		};
		
		class far : close {
			burst = 4;
			burstRangeMax = 8;
			aiRateOfFire = 1.5;	// delay between shots at given distance
			aiRateOfFireDistance = 1100;
			aiRateOfFireDispersion = 1.5;
			minRange = 600;
			minRangeProbab = 0.4;
			midRange = 1100;
			midRangeProbab = 0.8;
			maxRange = 1500;
			maxRangeProbab = 0.6;
		};
	};
};
