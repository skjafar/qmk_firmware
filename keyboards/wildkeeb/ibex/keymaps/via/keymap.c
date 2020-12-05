/* Copyright 2019 COSEYFANNITUTTI
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
#include QMK_KEYBOARD_H

#define REC_M       DYN_REC_START1
#define PLAY_M      DYN_MACRO_PLAY1
#define KP_PLUS     KC_KP_PLUS
#define KP_MINUS    KC_KP_MINUS
#define KP_ENT      KC_KP_ENTER
#define KP_SLASH    KC_KP_SLASH
#define KP_MULT     KC_KP_ASTERISK
#define KP_DOT      KC_KP_DOT

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
  [0] = LAYOUT_65_ansi(
//             ESC
               KC_GESC,
//    knob     ~        1        2        3        4        5        6        7        8        9        0        -         =        bkspc     HOME
      KC_MUTE, KC_GRV,  KC_1,    KC_2,    KC_3,    KC_4,    KC_5,    KC_6,    KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS,  KC_EQL,  KC_BSPC,  KC_HOME,
//    F1       tab      Q        W        E        R        T        Y        U        I        O        P        [         ]        \         END 
      KC_F1,   KC_TAB,  KC_Q,    KC_W,    KC_E,    KC_R,    KC_T,    KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC,  KC_RBRC, KC_BSLS,  KC_END,
//    F2       caps     A        S        D        F        G        H        J        K        L        ;        '         enter              SUPER
      KC_F2,   KC_CAPS, KC_A,    KC_S,    KC_D,    KC_F,    KC_G,    KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT,  KC_ENT,            MO(3),
//    F3       shift             Z        X        C        V        B        N        M        ,        .        /         shift    up        DEL
      KC_F3,   KC_LSFT,          KC_Z,    KC_X,    KC_C,    KC_V,    KC_B,    KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,  KC_RSFT, KC_UP,    KC_DEL,
//    F4       ctrl     win      alt                                 space                      alt      fn       ctrl      left     down     right*/
      KC_F4,   KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                    KC_RALT, MO(1),   KC_RCTL,  KC_LEFT, KC_DOWN, KC_RIGHT),

  [1] = LAYOUT_65_ansi(
//             ESC
               KC_TRNS,
//    knob     ~        1        2        3        4        5        6        7        8        9        0        -         =        bkspc     HOME
      KC_TRNS, KC_TRNS, KC_F1,   KC_F2,   KC_F3,   KC_F4,   KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,   KC_F12,  KC_TRNS,  KC_PGUP,
//    F1       tab      Q        W        E        R        T        Y        U        I        O        P        [         ]        \         END 
      PLAY_M,  KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_INS,  KC_TRNS, KC_PSCR, KC_TRNS,  KC_TRNS, KC_TRNS,  KC_PGDN,
//    F2       caps     A        S        D        F        G        H        J        K        L        ;        '         enter              SUPER
      KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS,  KC_TRNS,           KC_TRNS,
//    F3       shift             Z        X        C        V        B        N        M        ,        .        /         shift    up        DEL
      KC_TRNS, KC_TRNS,          KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, TG(2),   REC_M,   KC_TRNS, KC_TRNS, KC_TRNS,  KC_RSFT, KC_VOLU,  KC_TRNS,
//    F4       ctrl     win      alt                                 space                      alt      fn       ctrl      left     down     right*/
      KC_TRNS, KC_LCTL, KC_LGUI, KC_LALT,                            KC_SPC,                    KC_RALT, KC_TRNS, KC_RCTL,  KC_TRNS, KC_VOLD, KC_TRNS),

  [2] = LAYOUT_65_ansi(
//             ESC
               KC_GESC,
//    knob     ~        1        2        3        4        5        6        7        8        9        0        -         =        bkspc     HOME
      KC_TRNS, KC_NO,   KC_NO,   KC_NO,   KP_SLASH,KP_MULT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_TRNS,  KC_TRNS, KC_TRNS,  KC_TRNS,
//    F1       tab      Q        W        E        R        T        Y        U        I        O        P        [         ]        \         END 
      KC_TRNS, KC_TRNS, KC_NO,   KC_7,    KC_8,    KC_9,    KP_MINUS,KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,    KC_TRNS,  
//    F2       caps     A        S        D        F        G        H        J        K        L        ;        '         enter              SUPER
      KC_TRNS, KC_TRNS, KC_NO,   KC_4,    KC_5,    KC_6,    KP_PLUS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_ENT,            KC_TRNS,  
//    F3       shift             Z        X        C        V        B        N        M        ,        .        /         shift    up        DEL
      KC_TRNS, KC_TRNS,          KC_DOT,  KC_1,    KC_2,    KC_3,    KP_ENT,  TG(2),   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_TRNS, KC_TRNS,  KC_TRNS,  
//    F4       ctrl     win      alt                                 space                      alt      fn       ctrl      left     down     right*/
      KC_TRNS, KC_LCTL, KC_LGUI, KC_0,                               KC_SPC,                    KC_RALT, KC_TRNS, KC_RCTL,  KC_TRNS, KC_TRNS, KC_TRNS),

  [3] = LAYOUT_65_ansi(
//             ESC
               KC_GESC,
//    knob     ~        1        2        3        4        5        6        7        8        9        0        -         =        bkspc     HOME
      KC_NO,   KC_NO,   KC_NO,   KC_NO,   KP_SLASH,KP_MULT, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_NO,   KC_NO,    KC_NO,  
//    F1       tab      Q        W        E        R        T        Y        U        I        O        P        [         ]        \         END 
      KC_NO,   KC_NO,   KC_NO,   KC_7,    KC_8,    KC_9,    KP_MINUS,KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_MPRV, KC_NO,    KC_NO,   KC_NO,    KC_NO,    
//    F2       caps     A        S        D        F        G        H        J        K        L        ;        '         enter              SUPER
      KC_NO,   KC_NO,   KC_NO,   KC_4,    KC_5,    KC_6,    KP_PLUS, KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_ENT,            KC_TRNS,  
//    F3       shift             Z        X        C        V        B        N        M        ,        .        /         shift    up        DEL
      KC_NO,   KC_NO,            KC_DOT,  KC_1,    KC_2,    KC_3,    KP_ENT,  KC_MNXT, KC_NO,   KC_NO,   KC_NO,   KC_NO,    KC_TRNS, KC_VOLU,  KC_NO,    
//    F4       ctrl     win      alt                                 space                      alt      fn       ctrl      left     down     right*/
      KC_NO,   KC_LCTL, KC_LGUI, KC_0,                               KC_MPLY,                   KC_RALT, KC_TRNS, KC_RCTL,  KC_TRNS, KC_VOLD, KC_TRNS)
};

void encoder_update_kb(uint8_t index, bool clockwise) {
    if (index == 0) { /* First encoder */
        if (clockwise) {
            tap_code(KC_VOLU);
        } else {
            tap_code(KC_VOLD);
        }
    }
}
