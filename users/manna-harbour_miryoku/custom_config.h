// Copyright 2019 Manna Harbour
// https://github.com/manna-harbour/miryoku

// This program is free software: you can redistribute it and/or modify it under the terms of the GNU General Public License as published by the Free Software Foundation, either version 2 of the License, or (at your option) any later version. This program is distributed in the hope that it will be useful, but WITHOUT ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE. See the GNU General Public License for more details. You should have received a copy of the GNU General Public License along with this program. If not, see <http://www.gnu.org/licenses/>.

#pragma once

#if defined (KEYBOARD_reviung41)
#define MIRYOKU_MAPPING( \
     K40, K00, K01, K02, K03, K04,      K05, K06, K07, K08, K09, K44, \
     K41, K10, K11, K12, K13, K14,      K15, K16, K17, K18, K19, K45, \
     K42, K20, K21, K22, K23, K24,      K25, K26, K27, K28, K29, K46, \
     N43, N30, N31, K32, K33, K34,      K35, K36, K37, N38, N39, N47 \
) \
LAYOUT_reviung41( \
K40,  K00,  K01,  K02,  K03,  K04,         K05,  K06,  K07,  K08,  K09,  K44, \
K41,  K10,  K11,  K12,  K13,  K14,         K15,  K16,  K17,  K18,  K19,  K45, \
K42,  K20,  K21,  K22,  K23,  K24,         K25,  K26,  K27,  K28,  K29,  K46 , \
                           K33,  K34,   K35,  K36,  K37 \
)
#endif

#define MIRYOKU_LAYER_LIST \
MIRYOKU_X(BASE,   "base") \
MIRYOKU_X(EXTRA,  "qwerty") \
MIRYOKU_X(TAP,    "game") \
MIRYOKU_X(NAV,    "nav") \
MIRYOKU_X(MOUSE,  "mouse") \
MIRYOKU_X(MEDIA,  "media") \
MIRYOKU_X(NUM,    "num") \
MIRYOKU_X(SYM,    "sym") \
MIRYOKU_X(FUN,    "func")

#define U_BUTTON U_MOUSE
#define MIRYOKU_CLIPBOARD_WIN

#define MIRYOKU_LAYER_BASE \
KC_TAB,            KC_Q,              KC_W,              KC_F,              KC_P,              KC_B,              KC_J,              KC_L,              KC_U,              KC_Y,              KC_SCLN,           KC_BSPC, \
KC_LCTL,           LGUI_T(KC_A),      LALT_T(KC_R),      LCTL_T(KC_S),      LSFT_T(KC_T),      KC_G,              KC_M,              LSFT_T(KC_N),      LCTL_T(KC_E),      LALT_T(KC_I),      LGUI_T(KC_O),      KC_QUOT, \
KC_LSFT,           KC_Z,              KC_X,              KC_C,              KC_D,              KC_V,              KC_K,              KC_H,              KC_COMM,           KC_DOT,            KC_SLSH,           KC_ENT, \
U_NP,              U_NP,              U_NP,              U_NP,              LT(U_MOUSE,KC_ESC),LT(U_NAV,KC_ENT),  KC_BSPC,           LT(U_NUM,KC_SPC),  LT(U_SYM,KC_DEL),  U_NP,              U_NP,              U_NP

#define MIRYOKU_LAYER_EXTRA \
KC_TAB,            KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,              KC_BSPC, \
KC_LCTL,           LGUI_T(KC_A),      LALT_T(KC_S),      LCTL_T(KC_D),      LSFT_T(KC_F),      KC_G,              KC_H,              LSFT_T(KC_J),      LCTL_T(KC_K),      LALT_T(KC_L),      LGUI_T(KC_SCLN),   KC_QUOT, \
KC_LSFT,           KC_Z,              KC_X,              KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           KC_DOT,            KC_SLSH,           TD(U_TD_U_BASE), \
U_NP,              U_NP,              U_NP,              U_NP,              LT(U_MOUSE,KC_ESC),LT(U_NAV,KC_ENT),  KC_BSPC,           LT(U_NUM,KC_SPC),  LT(U_SYM,KC_DEL),  U_NP,              U_NP,              U_NP

#define MIRYOKU_LAYER_TAP \
KC_TAB,            KC_Q,              KC_W,              KC_E,              KC_R,              KC_T,              KC_Y,              KC_U,              KC_I,              KC_O,              KC_P,              KC_BSPC, \
KC_LCTL,           KC_A,              KC_S,              KC_D,              KC_F,              KC_G,              KC_H,              KC_J,              KC_K,              KC_L,              KC_SCLN,           KC_QUOT, \
KC_LSFT,           KC_Z,              KC_X,              KC_C,              KC_V,              KC_B,              KC_N,              KC_M,              KC_COMM,           KC_DOT,            KC_SLSH,           TD(U_TD_U_BASE), \
U_NP,              U_NP,              U_NP,              U_NP,              LT(U_MOUSE,KC_ESC),LT(U_NAV,KC_ENT),  KC_BSPC,           LT(U_NUM,KC_SPC),  LT(U_SYM,KC_DEL),  U_NP,              U_NP,              U_NP

#define MIRYOKU_LAYER_NAV \
TD(U_TD_BOOT),     U_NA,              TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   KC_VOLU,           U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             U_NP,      \
U_NA,              KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           KC_VOLD,           CW_TOGG,           KC_LEFT,           KC_DOWN,           KC_UP,             KC_RGHT,           U_NP,      \
U_NA,              U_NA,              KC_ALGR,           TD(U_TD_U_NUM),    TD(U_TD_U_NAV),    KC_MUTE,           KC_INS,            KC_HOME,           KC_PGDN,           KC_PGUP,           KC_END,            U_NP,      \
U_NP,              U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_BSPC,           KC_SPC,            KC_DEL,            U_NP,              U_NP,              U_NP

#define MIRYOKU_LAYER_MOUSE \
TD(U_TD_BOOT),     U_NA,              TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   KC_VOLU,           U_RDO,             U_PST,             U_CPY,             U_CUT,             U_UND,             U_NP,      \
U_NA,              KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           KC_VOLD,           U_NU,              KC_MS_L,           KC_MS_D,           KC_MS_U,           KC_MS_R,           U_NP,      \
U_NA,              U_NA,              KC_ALGR,           TD(U_TD_U_SYM),    TD(U_TD_U_MOUSE),  KC_MUTE,           U_NU,              KC_WH_L,           KC_WH_D,           KC_WH_U,           KC_WH_R,           U_NP,      \
U_NP,              U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_BTN1,           KC_BTN2,           KC_BTN3,           U_NP,              U_NP,              U_NP

#define MIRYOKU_LAYER_MEDIA \
TD(U_TD_BOOT),     U_NA,              TD(U_TD_U_TAP),    TD(U_TD_U_EXTRA),  TD(U_TD_U_BASE),   KC_VOLU,           RGB_TOG,           RGB_MOD,           RGB_HUI,           RGB_SAI,           RGB_VAI,           U_NP,      \
U_NA,              KC_LGUI,           KC_LALT,           KC_LCTL,           KC_LSFT,           KC_VOLD,           U_NU,              KC_MPRV,           KC_VOLD,           KC_VOLU,           KC_MNXT,           U_NP,      \
U_NA,              U_NA,              KC_ALGR,           TD(U_TD_U_FUN),    TD(U_TD_U_MEDIA),  KC_MUTE,           OU_AUTO,           U_NU,              U_NU,              U_NU,              U_NU,              U_NP,      \
U_NA,              U_NP,              U_NP,              U_NA,              U_NA,              U_NA,              KC_MSTP,           KC_MPLY,           KC_MUTE,           U_NP,              U_NP,              U_NP

#define MIRYOKU_LAYER_NUM \
U_NA,              KC_GRV,            U_NA,              KC_MINS,           KC_EQL,            KC_BSLS,           KC_VOLU,           TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    U_NP,              TD(U_TD_BOOT), \
U_NA,              KC_6,              KC_7,              KC_8,              KC_9,              KC_0,              KC_VOLD,           KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           U_NP,      \
U_NA,              KC_1,              KC_2,              KC_3,              KC_4,              KC_5,              KC_MUTE,           TD(U_TD_U_NUM),    TD(U_TD_U_NAV),    KC_ALGR,           U_NA,              U_NP,      \
U_NP,              U_NP,              U_NP,              U_NP,              KC_LBRC,           KC_RBRC,           KC_BSPC,           U_NA,              U_NA,              U_NP,              U_NP,              U_NP

#define MIRYOKU_LAYER_SYM \
U_NA,              KC_TILD,           U_NP,              KC_UNDS,           KC_PLUS,           KC_PIPE,           KC_VOLU,           TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    U_NP,              TD(U_TD_BOOT), \
U_NA,              KC_CIRC,           KC_AMPR,           KC_ASTR,           KC_LPRN,           KC_RPRN,           KC_VOLD,           KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           U_NP,      \
U_NA,              KC_EXLM,           KC_AT,             KC_HASH,           KC_DLR,            KC_PERC,           KC_MUTE,           TD(U_TD_U_SYM),    TD(U_TD_U_MOUSE),  KC_ALGR,           U_NA,              U_NP,      \
U_NP,              U_NP,              U_NP,              U_NP,              KC_LPRN,           KC_RPRN,           KC_UNDS,           U_NA,              U_NA,              U_NP,              U_NP,              U_NP

#define MIRYOKU_LAYER_FUN \
U_NA,              KC_F11,            KC_F12,            KC_PSCR,           KC_SCRL,           KC_PAUS,           KC_VOLU,           TD(U_TD_U_BASE),   TD(U_TD_U_EXTRA),  TD(U_TD_U_TAP),    U_NA,              TD(U_TD_BOOT),     \
U_NA,              KC_F6,             KC_F7,             KC_F8,             KC_F9,             KC_F10,            KC_VOLD,           KC_LSFT,           KC_LCTL,           KC_LALT,           KC_LGUI,           U_NP,      \
U_NA,              KC_F1,             KC_F2,             KC_F3,             KC_F4,             KC_F5,             KC_MUTE,           TD(U_TD_U_FUN),    TD(U_TD_U_MEDIA),  KC_ALGR,           U_NA,              U_NP,      \
U_NP,              U_NP,              U_NP,              U_NP,              KC_ESC,            KC_ENT,            KC_BSPC,           U_NA,              U_NA,              U_NA,              U_NP,              U_NP
