// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     * ┌───┬───┬───┬───┐ ┌───┬───┬───┬───┐ ┌───┬───┬───┐
     * │F5 │F6 │F7 │F8 │ │F9 │F10│F11│F12│ │PSc│Scr│Pse│
     * └───┴───┴───┴───┘ └───┴───┴───┴───┘ └───┴───┴───┘
     * ┌──┬───┬───┬───┬───┬───┬───┬───────┐ ┌───┬───┬───┐
     * │6 │ 7 │ 8 │ 9 │ 0 │ - │ = │ Backsp│ │Ins│Hom│PgU│
     * ├───┴─┬─┴─┬─┴─ ┴─┬─┴─┬─┴─┬─┴─┬─────┤ ├───┼───┼───┤
    *   │ Y │ U │ I │ O │ P │ [ │ ] │  \  │ │Del│End│PgD│
     * ├─────┴┬──┴┬──┬──┴┬──┴┬──┴┬──┴─────│ └───┴───┴───┘
     *   │ H │ J │ K │ L │ ; │ ' │  Ent   │
     * ├─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴─┬─┴───┴────┤     ┌───┐
     * │ B │ N │ M │ , │ . │ / │    Shift │     │ ↑ │
     * ├─── ───┴───┴──┬┴───┼───┴┬────┬────┤ ┌───┼───┼───┐
     *  │             │ Alt│ GUI│Menu│Ctrl│ │ ← │ ↓ │ → │
     * └──────────────┴────┴────┴────┴────┘ └───┴───┴───┘
     */
    [0] = LAYOUT_reoright_iso(
            KC_F5,   KC_F6,   KC_F7,   KC_F8,   KC_F9,   KC_F10,  KC_F11,  KC_F12,               KC_PSCR, KC_SCRL, KC_PAUS,
    KC_6,   KC_7,    KC_8,    KC_9,    KC_0,    KC_MINS, KC_EQL,           KC_BSPC,              KC_INS,  KC_HOME, KC_PGUP,
            KC_Y,    KC_U,    KC_I,    KC_O,    KC_P,    KC_LBRC, KC_RBRC, KC_NUHS,   KC_DEL,  KC_END,  KC_PGDN,
            KC_H,    KC_J,    KC_K,    KC_L,    KC_SCLN, KC_QUOT, KC_ENT,
    KC_B,   KC_N,    KC_M,    KC_COMM, KC_DOT,  KC_SLSH,          KC_RSFT                               ,  KC_UP,
                     KC_SPC          , KC_RALT, KC_RGUI,          KC_APP,  KC_RCTL              ,KC_LEFT, KC_DOWN, KC_RGHT
    )
};