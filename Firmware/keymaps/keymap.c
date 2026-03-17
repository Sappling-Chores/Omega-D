// SPDX-License-Identifier: GPL-2.0-or-later
// keymap.c — omega_d default keymap
// RP2040 | 6 rows × 16 cols | 84 keys | 1 rotary encoder (GP27/GP28)
//
// Physical layout (● = key present, · = absent / part of wider key):
//
//       x0    x1    x2    x3    x4    x5    x6    x7    x8    x9   x10   x11   x12   x13   x14   x15
// y0:  ESC   GRV    F1    F2    F3    F4    F5    F6    F7    F8    F9   F10   F11   F12   DEL   INS
// y1:  TAB    1     2     3     4     5     6     7     8     9     0    MINS  EQL  BSPC    ·   HOME
// y2:  CAPS   Q     W     E     R     T     Y     U     I     O     P     [     ]     \     ·   PGUP
// y3:  LSFT   A     S     D     F     G     H     J     K     L     ;     '     ·    ENT    ·   END
// y4:  LCTL   ·     Z     X     C     V     B     N     M     ,     .     /   RSFT    ·    UP  PGDN
// y5:  LGUI  LALT  SPC    ·     ·     ·   RALT    ·     ·     ·   MO(1) RCTL LEFT  DOWN RGHT  APP
//
// Notes on gaps:
//   x1  y4  ·  → absorbed by 1.5u LShift at y3
//   x3-5 y5 ·  → wide Spacebar registered at x2
//   x7-9 y5 ·  → right side of Spacebar / pad
//   x12 y3  ·  → 1.75u Enter registered at x13
//   x13 y4  ·  → 1.75u Enter registered at x13
//   x14 y1-3 · → tall key column (DEL at top, nav at bottom)

#include QMK_KEYBOARD_H

// ── Layer indices ──────────────────────────────────────────────────────────────
enum layers {
    _BASE = 0,
    _FN,
};

// ── Encoder map (requires ENCODER_MAP_ENABLE in config.h) ─────────────────────
#ifdef ENCODER_MAP_ENABLE
const uint16_t PROGMEM encoder_map[][NUM_ENCODERS][NUM_DIRECTIONS] = {
    //                      CCW              CW
    [_BASE] = { ENCODER_CCW_CW(KC_VOLD,  KC_VOLU) },  // Volume down / up
    [_FN]   = { ENCODER_CCW_CW(KC_MPRV,  KC_MNXT) },  // Prev track / next track
};
#endif

// ── Keymaps ───────────────────────────────────────────────────────────────────
//
//  LAYOUT() arguments are ordered COLUMN BY COLUMN, left→right (x=0..15),
//  top→bottom within each column (ascending y), matching keyboard.json exactly.
//  Absent matrix positions are simply omitted — do NOT insert KC_NO placeholders.
//
const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {

    /* ════════════════════════════════════════════════════════════════════════
     * Layer 0 — Base (QWERTY)
     * ════════════════════════════════════════════════════════════════════════ */
    [_BASE] = LAYOUT(

        /* ── x=0  │  y: 0  1  2  3  4  5  (all 6 rows) ── */
        KC_ESC,  KC_TAB,  KC_CAPS, KC_LSFT, KC_LCTL, KC_LGUI,

        /* ── x=1  │  y: 0  1  2  3  5  (y=4 absent — 1.5u LShift) ── */
        KC_GRV,  KC_1,    KC_Q,    KC_A,    KC_LALT,

        /* ── x=2  │  y: 0  1  2  3  4  5  (SPC at y5 = wide spacebar) ── */
        KC_F1,   KC_2,    KC_W,    KC_S,    KC_Z,    KC_SPC,

        /* ── x=3  │  y: 0  1  2  3  4  (y=5 absent — space pad) ── */
        KC_F2,   KC_3,    KC_E,    KC_D,    KC_X,

        /* ── x=4  │  y: 0  1  2  3  4  (y=5 absent — space pad) ── */
        KC_F3,   KC_4,    KC_R,    KC_F,    KC_C,

        /* ── x=5  │  y: 0  1  2  3  4  (y=5 absent — space pad) ── */
        KC_F4,   KC_5,    KC_T,    KC_G,    KC_V,

        /* ── x=6  │  y: 0  1  2  3  4  5 ── */
        KC_F5,   KC_6,    KC_Y,    KC_H,    KC_B,    KC_RALT,

        /* ── x=7  │  y: 0  1  2  3  4  (y=5 absent — right space pad) ── */
        KC_F6,   KC_7,    KC_U,    KC_J,    KC_N,

        /* ── x=8  │  y: 0  1  2  3  4  (y=5 absent) ── */
        KC_F7,   KC_8,    KC_I,    KC_K,    KC_M,

        /* ── x=9  │  y: 0  1  2  3  4  (y=5 absent) ── */
        KC_F8,   KC_9,    KC_O,    KC_L,    KC_COMM,

        /* ── x=10 │  y: 0  1  2  3  4  5 ── */
        KC_F9,   KC_0,    KC_P,    KC_SCLN, KC_DOT,  MO(_FN),

        /* ── x=11 │  y: 0  1  2  3  4  5 ── */
        KC_F10,  KC_MINS, KC_LBRC, KC_QUOT, KC_SLSH, KC_RCTL,

        /* ── x=12 │  y: 0  1  2  4  5  (y=3 absent — wide Enter at x13) ── */
        KC_F11,  KC_EQL,  KC_RBRC, KC_RSFT, KC_LEFT,

        /* ── x=13 │  y: 0  1  2  3  5  (y=4 absent — Enter spans y3) ── */
        KC_F12,  KC_BSPC, KC_BSLS, KC_ENT,  KC_DOWN,

        /* ── x=14 │  y: 0  4  5  (y=1,2,3 absent — tall key / nav gap) ── */
        KC_DEL,  KC_UP,   KC_RGHT,

        /* ── x=15 │  y: 0  1  2  3  4  5  (all 6 rows) ── */
        KC_INS,  KC_HOME, KC_PGUP, KC_END,  KC_PGDN, KC_APP
    ),

    /* ════════════════════════════════════════════════════════════════════════
     * Layer 1 — Function (hold MO(1) at x10 y5 to activate)
     *   • F-row  →  Media / brightness keys
     *   • WASD   →  Arrow cluster
     *   • esc    →  QK_BOOT (bootloader)
     *   • Encoder→  Prev / Next track (see encoder_map above)
     * ════════════════════════════════════════════════════════════════════════ */
    [_FN] = LAYOUT(

        /* x=0 */
        QK_BOOT, _______, _______, _______, _______, _______,

        /* x=1 */
        _______, KC_F1,   KC_F1,   KC_F1,   _______,

        /* x=2 */
        KC_BRID, KC_F2,   KC_UP,   KC_F2,   KC_F2,   _______,

        /* x=3 */
        KC_BRIU, KC_F3,   KC_F3,   KC_F3,   KC_F3,

        /* x=4 */
        KC_MPRV, KC_F4,   KC_F4,   KC_F4,   KC_F4,

        /* x=5 */
        KC_MPLY, KC_F5,   KC_F5,   KC_F5,   KC_F5,

        /* x=6 */
        KC_MNXT, KC_F6,   KC_LEFT, KC_DOWN, KC_F6,   _______,

        /* x=7 */
        KC_MUTE, KC_F7,   KC_RGHT, KC_F7,   KC_F7,

        /* x=8 */
        KC_VOLD, KC_F8,   KC_F8,   KC_F8,   KC_F8,

        /* x=9 */
        KC_VOLU, KC_F9,   KC_F9,   KC_F9,   KC_F9,

        /* x=10 */
        KC_F10,  KC_F10,  KC_F10,  KC_F10,  KC_F10,  _______,

        /* x=11 */
        KC_F11,  KC_F11,  KC_F11,  KC_F11,  KC_F11,  _______,

        /* x=12 */
        KC_F12,  _______, _______, _______, _______,

        /* x=13 */
        _______, _______, _______, _______, _______,

        /* x=14 */
        _______,          _______, _______,

        /* x=15 */
        _______, _______, _______, _______, _______, _______
    ),
};