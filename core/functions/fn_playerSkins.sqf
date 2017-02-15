#include "..\..\script_macros.hpp"
/*
    File: fn_playerSkins.sqf
    Author: Daniel Stuart

    Description:
    Sets skins for players by their side and uniform.
*/
private ["_skinName"];

switch (playerSide) do {
    case civilian: {
        if (LIFE_SETTINGS(getNumber,"civ_skins") isEqualTo 1) then {
            if (uniform player isEqualTo "U_C_Poloshirt_blue") then {
                player setObjectTextureGlobal [1, "textures\civ\civilian_uniform_1.paa"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_burgundy") then {
                player setObjectTextureGlobal [1, "textures\civ\civilian_uniform_2.paa"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_stripped") then {
                player setObjectTextureGlobal [1, "textures\civ\civilian_uniform_3.paa"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_tricolour") then {
                player setObjectTextureGlobal [1, "textures\civ\civilian_uniform_4.paa"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_salmon") then {
                player setObjectTextureGlobal [1, "textures\civ\civilian_uniform_5.paa"];
            };
            if (uniform player isEqualTo "U_C_Poloshirt_redwhite") then {
                player setObjectTextureGlobal [1, "textures\civ\civilian_uniform_6.paa"];
            };
            if (uniform player isEqualTo "U_C_Commoner1_1") then {
                player setObjectTextureGlobal [1, "textures\civ\civilian_uniform_7.paa"];
            };
        };
    };

	case west: {
		if (uniform player == "U_B_CombatUniform_mcam_worn" && (FETCH_CONST(life_coplevel) == 1)) then {
        player setObjectTextureGlobal [0, "textures\police\pcso_uniform.paa"];
		};
        if (uniform player == "U_B_CombatUniform_mcam_worn" && (FETCH_CONST(life_coplevel) == 2 OR FETCH_CONST(life_coplevel) == 3 OR FETCH_CONST(life_coplevel) == 4 OR FETCH_CONST(life_coplevel) == 5 OR FETCH_CONST(life_coplevel) == 6 OR FETCH_CONST(life_coplevel) == 7)) then {
        player setObjectTextureGlobal [0, "textures\police\cop_uniform.paa"];
        };
	};

    case independent: {
		if(uniform player == "U_B_CombatUniform_mcam_worn") then {
			player setObjectTextureGlobal [0, "textures\medic\medic_uniform.paa"];
		};
	};
};