
/ {
    keymap {
        compatible = "zmk,keymap";
        layer_REPLACE_ME {
            bindings = <
        ////           C6     C5     C4     C3     C2     C1          T1      T2      T3             T3      T2      T1     C1     C2     C3     C4     C5     C6
        /* R1 */        &none  &none  &none  &none  &none                                 /*|*/                          &none  &none  &none  &none  &none
        /* R2 */        &none  &none  &none  &none  &none  &none                          /*|*/                          &none  &none  &none  &none  &none  &none
        /* R3 */        &none  &none  &none  &none  &none  &none                          /*|*/                          &none  &none  &none  &none  &none  &none
        /* R4 */        &none  &none  &none  &none  &none  &none                          /*|*/                          &none  &none  &none  &none  &none  &none
        /* R5 */        &none  &none  &none  &none  &none  &none  &trans  &trans  &trans  /*|*/  &trans  &trans  &trans  &none  &none  &none  &none  &none  &none
        /* R6 */        &none  &none  &none  &none  &none         &trans  &trans  &trans  /*|*/  &trans  &trans  &trans         &none  &none  &none  &none  &none
        ////                                                          T4      T5      T6             T6      T5      T4     C1     C2     C3     C4     C5     C6
            >;
        };
    };
};
