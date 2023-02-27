/*
    Copyright (C) 2023  debonair666

    This program is free software: you can redistribute it and/or modify
    it under the terms of the GNU General Public License as published by
    the Free Software Foundation, either version 3 of the License, or
    (at your option) any later version.

    This program is distributed in the hope that it will be useful,
    but WITHOUT ANY WARRANTY; without even the implied warranty of
    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
    GNU General Public License for more details.

    You should have received a copy of the GNU General Public License
    along with this program.  If not, see <https://www.gnu.org/licenses/>.
*/

#pragma once

#include "quantum.h"

#define LAYOUT(\
  K00, K10, K20, K30, K40, K50, K60, K70, K80, K90, KA0, KB0, KC0, KD0, KE0, \
  K01, K11, K21, K31, K41, K51, K61, K71, K81, K91, KA1, KB1, KC1, KD1,      \
  K02, K12, K22, K32, K42, K52, K62, K72, K82, K92, KA2, KB2, KC2, KD2,      \
  K03, K13, K23, K33, K43, K53, K63, K73, K83, K93, KA3, KB3, KC3, KD3, KE3, \
  K04, K14, K24, K34,                K74, K84, K94, KA4, KB4, KC4, KD4       \
){ \
  { K00,   K10,    K20,   K30,    K40,    K50,    K60,   K70,   K80,    K90,   KA0,   KB0,   KC0,   KD0,     KE0   }, \
  { K01,   K11,    K21,   K31,    K41,    K51,    K61,   K71,   K81,    K91,   KA1,   KB1,   KC1,   KD1,     KC_NO }, \
  { K02,   K12,    K22,   K32,    K42,    K52,    K62,   K72,   K82,    K92,   KA2,   KB2,   KC2,   KD2,     KC_NO }, \
  { K03,   K13,    K23,   K33,    K43,    K53,    K63,   K73,   K83,    K93,   KA3,   KB3,   KC3,   KD3,     KE3   }, \
  { K04,   K14,    K24,   K34,    KC_NO,  KC_NO,  KC_NO, K74,   K84,    K94,   KA4,   KB4,   KC4,   KD4,     KC_NO }  \
}


// Considering all present keys here, use KC_NO in keymap.c to ingnore untouchable keys.

//      0      1      2      3      4      5       6      7      8     9       A      B      C      D     E
//col   A0     A1     A2     A3     A4     A5     A6      A7     C7    C6      C5     C4     C3     C2    D7
//row   B3     B4     B5     B6     B7
