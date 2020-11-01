/* Copyright 2019 coseyfannitutti
 *
 * This program is free software: you can redistribute it and/or modify
 * it under the terms of the GNU General Public License as published by
 * the Free Software Foundation, either version 2 of the License, or
 * (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */

#pragma once

#define _x_ KC_NO

#include "quantum.h"

#define LAYOUT_65_ansi( \
        K01, \
  K10,  K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K1F, \
  K20,  K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F, \
  K30,  K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C,      K3E, K3F, \
  K40,  K41,      K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C, K4D, K4E, K4F, \
  K50,  K51, K52, K53,                K57,           K5A, K5B, K5C, K5D, K5E, K5F  \
) { \
{ _x_,  K01, _x_, _x_, _x_, _x_, _x_, _x_, _x_, _x_, _x_, _x_, _x_, _x_, _x_, _x_ }, \
{ K10,  K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, K1F }, \
{ K20,  K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2C, K2D, K2E, K2F }, \
{ K30,  K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, _x_, K3E, K3F }, \
{ K40,  K41, _x_, K43, K44, K45, K46, K47, K48, K49, K4A, K4B, K4C, K4D, K4E, K4F }, \
{ K50,  K51, K52, K53, _x_, _x_, _x_, K57, _x_, _x_, K5A, K5B, K5C, K5D, K5E, K5F } \
}

/*#define LAYOUT_65_ansi( \
  K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, \
  K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, \
  K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B,      K2D, K2E, \
  K30,      K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, \
  K40, K41, K42,                K46,           K49, K4A, K4B, K4C, K4D, K4E \
) { \
{ K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E }, \
{ K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E }, \
{ K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, _x_, K2D, K2E }, \
{ K30, _x_, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E }, \
{ K40, K41, K42, _x_, _x_, _x_, K46, _x_, _x_, K49, K4A, K4B, K4C, K4D, K4E} \
}*/

#define LAYOUT_65_ansi_blocker( \
  K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, \
  K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, \
  K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B,      K2D, K2E, \
  K30,      K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, \
  K40, K41, K42,                K46,           K49, K4A,      K4C, K4D, K4E \
) { \
{ K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E }, \
{ K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E }, \
{ K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, _x_, K2D, K2E }, \
{ K30, _x_, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E }, \
{ K40, K41, K42, _x_, _x_, _x_, K46, _x_, _x_, K49, K4A, _x_, K4C, K4D, K4E} \
}

#define LAYOUT_65_ansi_2_right_mods LAYOUT_65_ansi_blocker

#define LAYOUT_wkl_ansi_2_right_mods( \
  K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, \
  K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, \
  K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B,      K2D, K2E, \
  K30,      K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, \
  K40,      K42,                K46,           K49, K4A,      K4C, K4D, K4E \
) { \
{ K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E }, \
{ K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E }, \
{ K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, _x_, K2D, K2E }, \
{ K30, _x_, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E }, \
{ K40, _x_, K42, _x_, _x_, _x_, K46, _x_, _x_, K49, K4A, _x_, K4C, K4D, K4E} \
}

#define LAYOUT_wkl_ansi_3_right_mods( \
  K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, \
  K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E, \
  K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B,      K2D, K2E, \
  K30,      K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, \
  K40,      K42,                K46,           K49, K4A, K4B, K4C, K4D, K4E \
) { \
{ K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E }, \
{ K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E }, \
{ K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, _x_, K2D, K2E }, \
{ K30, _x_, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E }, \
{ K40, _x_, K42, _x_, _x_, _x_, K46, _x_, _x_, K49, K4A, K4B, K4C, K4D, K4E} \
}

#define LAYOUT_65_iso( \
  K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, \
  K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C,      K1E, \
  K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2D, K1D, K2E, \
  K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, \
  K40, K41, K42,                K46,           K49, K4A, K4B, K4C, K4D, K4E \
) { \
{ K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E }, \
{ K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E }, \
{ K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, _x_, K2D, K2E }, \
{ K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E }, \
{ K40, K41, K42, _x_, _x_, _x_, K46, _x_, _x_, K49, K4A, K4B, K4C, K4D, K4E} \
}

#define LAYOUT_65_iso_blocker( \
  K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, \
  K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C,      K1E, \
  K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2D, K1D, K2E, \
  K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, \
  K40, K41, K42,                K46,           K49, K4A,      K4C, K4D, K4E \
) { \
{ K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E }, \
{ K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E }, \
{ K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, _x_, K2D, K2E }, \
{ K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E }, \
{ K40, K41, K42, _x_, _x_, _x_, K46, _x_, _x_, K49, K4A, _x_, K4C, K4D, K4E} \
}

#define LAYOUT_65_iso_2_right_mods LAYOUT_65_iso_blocker

#define LAYOUT_wkl_iso_2_right_mods( \
  K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, \
  K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C,      K1E, \
  K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2D, K1D, K2E, \
  K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, \
  K40,      K42,                K46,           K49, K4A,      K4C, K4D, K4E \
) { \
{ K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E }, \
{ K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E }, \
{ K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, _x_, K2D, K2E }, \
{ K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E }, \
{ K40, _x_, K42, _x_, _x_, _x_, K46, _x_, _x_, K49, K4A, _x_, K4C, K4D, K4E} \
}

#define LAYOUT_wkl_iso_3_right_mods( \
  K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E, \
  K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C,      K1E, \
  K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, K2D, K1D, K2E, \
  K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E, \
  K40,      K42,                K46,           K49, K4A, K4B, K4C, K4D, K4E \
) { \
{ K00, K01, K02, K03, K04, K05, K06, K07, K08, K09, K0A, K0B, K0C, K0D, K0E }, \
{ K10, K11, K12, K13, K14, K15, K16, K17, K18, K19, K1A, K1B, K1C, K1D, K1E }, \
{ K20, K21, K22, K23, K24, K25, K26, K27, K28, K29, K2A, K2B, _x_, K2D, K2E }, \
{ K30, K31, K32, K33, K34, K35, K36, K37, K38, K39, K3A, K3B, K3C, K3D, K3E }, \
{ K40, _x_, K42, _x_, _x_, _x_, K46, _x_, _x_, K49, K4A, K4B, K4C, K4D, K4E} \
}
