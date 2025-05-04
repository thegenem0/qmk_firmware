#include QMK_KEYBOARD_H

// clang-format off
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    [0] = LAYOUT(
            /* _BASE
             * ,-----------------------------------------.                      ,-----------------------------------------.
             * | ESC  |  1   |  2   |  3   |  4   |  5   |                      |  6   |  7   |  8   |  9   |  0   |      |
             * |------+------+------+------+------+------|                      |------+------+------+------+------+------|
             * | Tab  |  Q   |  W   |  E   |  R   |  T   |                      |  Y   |  U   |  I   |  O   |  P   | Bksp |
             * |------+------+------+------+------+------|                      |------+------+------+------+------+------|
             * | Shift|  A   |  S   |  D   |  F   |  G   |-------,      ,-------|  H   |  J   |  K   |  L   |  ;   | Enter|
             * |------+------+------+------+------+------| Mute  |      | Play  |------+------+------+------+------+------|
             * | Ctrl |  Z   |  X   |  C   |  V   |  B   |-------|______|-------|  N   |  M   |  ,   |  .   |  /   | RCtrl|
             * `-----------------------------------------|  /       /\       \  |-----------------------------------------'
             * |           \ |      |      | LAlt | LGui | / Space /  \ Space \ | M(1) | M(2) |      |      | /
             * `            \----------------------------'                      `----------------------------/
             */

                KC_ESC, KC_1, KC_2, KC_3, KC_4, KC_5,                            KC_6, KC_7, KC_8, KC_9, KC_0, KC_NO,
                KC_TAB, KC_Q, KC_W, KC_E, KC_R, KC_T,                            KC_Y, KC_U, KC_I, KC_O, KC_P, KC_BSPC,
                KC_LSFT, KC_A, KC_S, KC_D, KC_F, KC_G,                           KC_H, KC_J, KC_K, KC_L, KC_SCLN, KC_ENT,
                KC_LCTL, KC_Z, KC_X, KC_C, KC_V, KC_B,     KC_MUTE, RM_TOGG,     KC_N, KC_M, KC_COMM, KC_DOT, KC_SLSH, KC_RCTL,
                           KC_NO, KC_NO, KC_LALT, KC_LGUI, KC_SPC,  KC_SPC, MO(1), MO(2), KC_NO, KC_NO
                ),

            /* _RAISE
             * ,-----------------------------------------.                      ,-----------------------------------------.
             * | `    |      |      |      |      |      |                      |      |      |      |  -   |  =   |      |
             * |------+------+------+------+------+------|                      |------+------+------+------+------+------|
             * |      |      |      |      |      |      |                      |      |      |      |  [   |  ]   |  \   |
             * |------+------+------+------+------+------|                      |------+------+------+------+------+------|
             * | TRNS |      | PSCR |      |      |      |-------,      ,-------|  <-  | Down |  Up  |  ->  |  ;   |  '   |
             * |------+------+------+------+------+------| BKLT  |      |       |------+------+------+------+------+------|
             * | TRNS |      |      |      |      |      |-------|______|-------|      |      |  ,   |  .   |  /   | TRNS |
             * `-----------------------------------------|  /       /\       \  |-----------------------------------------'
             * |           \ |      |      | TRNS | TRNS | / TRNS  /  \ TRNS  \ |      |      |      |      | /
             * `            \----------------------------'                      `----------------------------/
             */

    [1] = LAYOUT(
                KC_GRV, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                          KC_NO, KC_NO, KC_NO, KC_MINS, KC_EQL, KC_NO,
                KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                           KC_NO, KC_NO, KC_NO, KC_LBRC, KC_RBRC, KC_BSLS,
                KC_TRNS, KC_NO, KC_PSCR, KC_NO, KC_NO, KC_NO,                       KC_LEFT, KC_DOWN, KC_UP, KC_RGHT, KC_SCLN, KC_QUOT,
                KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,     KC_NO, KC_NO,   KC_NO, KC_NO, KC_COMM, KC_DOT, KC_SLSH, KC_NO,
                                KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_NO, KC_NO
    ),

            /* _FUNC
             * ,-----------------------------------------.                      ,-----------------------------------------.
             * | F1   | F2   | F3   | F4   | F5   | F6   |                      | F7   | F8   | F9   | F10  | F11  | F12  |
             * |------+------+------+------+------+------|                      |------+------+------+------+------+------|
             * |      |      |      |      |      |      |                      |      |      |      |      |      |      |
             * |------+------+------+------+------+------|                      |------+------+------+------+------+------|
             * | TRNS |      |      |      |      |      |-------,      ,-------|      |      |      |      |      |      |
             * |------+------+------+------+------+------| TRNS  |      | TRNS  |------+------+------+------+------+------|
             * | TRNS |      |      |      |      |      |-------|______|-------|      |      |  ,   |  .   |  /   | TRNS |
             * `-----------------------------------------|  /       /\       \  |-----------------------------------------'
             * |           \ |      |      | TRNS | TRNS | / TRNS  /  \ TRNS  \ |      |      |      |      | /
             * `            \----------------------------'                      `----------------------------/
             */


    [2] = LAYOUT(
                KC_F1, KC_F2, KC_F3, KC_F4, KC_F5, KC_F6,                        KC_F7, KC_F8, KC_F9, KC_F10, KC_F11, KC_F12,
                KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,                        KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,
                KC_TRNS, KC_NO, KC_NO, KC_NO, KC_NO, KC_NO,   KC_TRNS, KC_TRNS,    KC_NO, KC_NO, KC_NO, KC_NO, KC_NO, KC_TRNS,
                              KC_NO, KC_NO, KC_TRNS, KC_TRNS, KC_TRNS, KC_TRNS, KC_NO, KC_TRNS, KC_NO, KC_NO
    )
};


#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
[0] = { ENCODER_CCW_CW(KC_VOLD, KC_VOLU), ENCODER_CCW_CW(RM_VALD, RM_VALU)},
[1] = { ENCODER_CCW_CW(KC_MPRV, KC_MNXT), ENCODER_CCW_CW(RM_PREV, RM_NEXT)},
[2] = { ENCODER_CCW_CW(RM_HUED, RM_HUEU), ENCODER_CCW_CW(RM_SPDU, RM_SPDD)},
};
#endif
