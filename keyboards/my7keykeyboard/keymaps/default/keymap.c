// Copyright 2023 QMK
// SPDX-License-Identifier: GPL-2.0-or-later

#include QMK_KEYBOARD_H
#define UC_OHM       UC(0x03A9) // Ω
#define UC_PI        UC(0x03C0) // π
#define UC_SQRT      UC(0x221A) // √
#define UC_PLUSMIN   UC(0x00B1) // ±
#define UC_APPROX    UC(0x2248) // ≈
#define UC_EMDASH    UC(0x2014) // —
#define UC_CARET     UC(0x005E) // ^

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
    /*
     *     ┬───┬
     *     │ Ω │ 
     * ├───┼───┼───┼
     * │ π │ √ │ ± │
     * ├───┼───┼───┼
     * │ ≈ │ — │ ^ │ 
     * ├───┼───┼───┼
    
     */
    [0] = LAYOUT(
                 UC_OHM,      
        UC_PI,   UC_SQRT, UC_PLUSMIN,  
        UC_APPROX, UC_EMDASH, UC_CARET
    )


};
