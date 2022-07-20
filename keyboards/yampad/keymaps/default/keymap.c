/* MIT License

Copyright (c) 2019 Mattia Dal Ben

Permission is hereby granted, free of charge, to any person obtaining a copy
of this software and associated documentation files (the "Software"), to deal
in the Software without restriction, including without limitation the rights
to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
copies of the Software, and to permit persons to whom the Software is
furnished to do so, subject to the following conditions:

The above copyright notice and this permission notice shall be included in all
copies or substantial portions of the Software.

THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN THE
SOFTWARE.
*/

#include QMK_KEYBOARD_H

// Each layer gets a name for readability, which is then used in the keymap matrix below.
// The underscores don't mean anything - you can have a layer called STUFF or any other name.
// Layer names don't all need to be of the same length, obviously, and you can also skip them
// entirely and just use numbers.
enum layers {
<<<<<<< HEAD
  _BL = 0,
  _NV,
  _FN
};
enum custom_keycodes {
    KC_DBL0 = SAFE_RANGE,
>>>>>>> 62e3f8b8855ed25865a7e8d0063b9c6b5926fe2a
};

const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
/* Keymap _BL: (Base Layer) Default Layer
 * | NV | /  | *  |-/FN|
 * |----|----|----|----|
 * | 7  | 8  | 9  |    |
 * |----|----|----| +  |
 * | 4  | 5  | 6  |    |
 * |----|----|----|----|
 * | 1  | 2  | 3  |    |
 * |----|----|----| En |
 * | 0  | 00 | .  |    |
 * `-------------------'
 */
  [_BL] = LAYOUT(
<<<<<<< HEAD
    TG(_NV),  KC_PSLS,  KC_PAST,   LT(_FN, KC_PMNS), \
    KC_P7,    KC_P8,    KC_P9,              \
    KC_P4,    KC_P5,    KC_P6,     KC_PPLS, \
    KC_P1,    KC_P2,    KC_P3,              \
=======
    TG(_NV),  KC_PSLS,  KC_PAST,   LT(_FN, KC_PMNS),
    KC_P7,    KC_P8,    KC_P9,
    KC_P4,    KC_P5,    KC_P6,     KC_PPLS,
    KC_P1,    KC_P2,    KC_P3,
>>>>>>> 62e3f8b8855ed25865a7e8d0063b9c6b5926fe2a
    KC_P0,    KC_DBL0,  KC_PDOT,   KC_PENT
  ),

/* Keymap _NV: Navigation layer
