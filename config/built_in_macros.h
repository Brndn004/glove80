
/* Glove80 system behavior & macros */
/ {
    behaviors {
        // For the "layer" key, it'd nice to be able to use it as either a shift or a toggle.
        // Configure it as a tap dance, so the first tap (or hold) is a &mo and the second tap is a &to
        lower: lower {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <200>;
            bindings = <&mo LAYER_Lower>, <&to LAYER_Lower>;
        };
    };
};

/ {
    macros {
        rgb_ug_status_macro: rgb_ug_status_macro {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings
                = <&rgb_ug RGB_STATUS>;
        };
    };
};


/ {
#ifdef BT_DISC_CMD
    behaviors {
        bt_0: bt_0 {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <200>;
            bindings = <&bt_select_0>, <&bt BT_DISC 0>;
        };
        bt_1: bt_1 {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <200>;
            bindings = <&bt_select_1>, <&bt BT_DISC 1>;
        };
        bt_2: bt_2 {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <200>;
            bindings = <&bt_select_2>, <&bt BT_DISC 2>;
        };
        bt_3: bt_3 {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <200>;
            bindings = <&bt_select_3>, <&bt BT_DISC 3>;
        };
    };
    macros {
        bt_select_0: bt_select_0 {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings
                = <&out OUT_BLE>,
                  <&bt BT_SEL 0>;
        };
        bt_select_1: bt_select_1 {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings
                = <&out OUT_BLE>,
                  <&bt BT_SEL 1>;
        };
        bt_select_2: bt_select_2 {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings
                = <&out OUT_BLE>,
                  <&bt BT_SEL 2>;
        };
        bt_select_3: bt_select_3 {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings
                = <&out OUT_BLE>,
                  <&bt BT_SEL 3>;
        };
    };
#else
    macros {
        bt_0: bt_0 {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings
                = <&out OUT_BLE>,
                  <&bt BT_SEL 0>;
        };
        bt_1: bt_1 {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings
                = <&out OUT_BLE>,
                  <&bt BT_SEL 1>;
        };
        bt_2: bt_2 {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings
                = <&out OUT_BLE>,
                  <&bt BT_SEL 2>;
        };
        bt_3: bt_3 {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            bindings
                = <&out OUT_BLE>,
                  <&bt BT_SEL 3>;
        };
    };
#endif
};

/ {
    behaviors {
        magic: magic {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <2>;
            flavor = "tap-preferred";
            tapping-term-ms = <200>;
            bindings = <&mo>, <&rgb_ug_status_macro>;
        };
    };
};

