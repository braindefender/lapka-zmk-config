/*
 * Russian ЙЦУКЕН keyboard layout aliases for ZMK.
 * Maps RU_* key codes to their US scancode equivalents
 * based on the standard Russian Windows layout.
 */

#pragma once

#include <dt-bindings/zmk/keys.h>

/* Row 1: Ё -> GRAVE */
#define RU_CYRILLIC_IO    GRAVE   // ё

/* Row 2: digits stay the same, but shifted gives different symbols */

/* Row 3: QWERTY -> ЙЦУКЕНГШЩЗХЪ */
#define RU_CYRILLIC_SHORT_I   Q       // й
#define RU_CYRILLIC_TSE       W       // ц
#define RU_CYRILLIC_U         E       // у
#define RU_CYRILLIC_KA        R       // к
#define RU_CYRILLIC_IE        T       // е
#define RU_CYRILLIC_EN        Y       // н
#define RU_CYRILLIC_GHE       U       // г
#define RU_CYRILLIC_SHA       I       // ш
#define RU_CYRILLIC_SHCHA     O       // щ
#define RU_CYRILLIC_ZE        P       // з
#define RU_CYRILLIC_HA        LBKT    // х
#define RU_CYRILLIC_HARD_SIGN RBKT    // ъ

/* Row 4: ASDFGHJKL;' -> ФЫВАПРОЛДЖЭ */
#define RU_CYRILLIC_EF        A       // ф
#define RU_CYRILLIC_YERU      S       // ы
#define RU_CYRILLIC_VE        D       // в
#define RU_CYRILLIC_A         F       // а
#define RU_CYRILLIC_PE        G       // п
#define RU_CYRILLIC_ER        H       // р
#define RU_CYRILLIC_O         J       // о
#define RU_CYRILLIC_EL        K       // л
#define RU_CYRILLIC_DE        L       // д
#define RU_CYRILLIC_ZHE       SEMI    // ж
#define RU_CYRILLIC_E         SQT     // э

/* Row 5: ZXCVBNM,./ -> ЯЧСМИТЬБЮ. */
#define RU_CYRILLIC_YA        Z       // я
#define RU_CYRILLIC_CHE       X       // ч
#define RU_CYRILLIC_ES        C       // с
#define RU_CYRILLIC_EM        V       // м
#define RU_CYRILLIC_I         B       // и
#define RU_CYRILLIC_TE        N       // т
#define RU_CYRILLIC_SOFT_SIGN M       // ь
#define RU_CYRILLIC_BE        COMMA   // б
#define RU_CYRILLIC_YU        DOT     // ю

/* Punctuation in Russian layout */
#define RU_DOT      FSLH              // . (точка)
#define RU_COMMA    LS(FSLH)          // , (запятая) — Shift + /
#define RU_SEMI     LS(N4)            // ; (точка с запятой) — Shift+4
#define RU_COLON    LS(N6)            // : (двоеточие) — Shift+6
#define RU_QMARK    LS(N7)            // ? (вопросительный знак) — Shift+7
#define RU_FSLH     LS(BSLH)         // / (слэш) — Shift+\  (backslash position)
#define RU_BACKSLASH BSLH             // \ (обратный слэш)
#define RU_EXCL     LS(N1)            // !
#define RU_DQUOT    LS(N2)            // "
#define RU_NUMBER_SIGN LS(N3)         // №
#define RU_PRCNT    LS(N5)            // %
