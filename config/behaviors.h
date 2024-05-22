
/ {
    behaviors {
        // Hold for first param, sticky layer for second param.
        mo_sticky: mo_sticky_layer {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <2>;
            flavor = "hold-preferred";
            tapping-term-ms = <100>;
            bindings = <&mo>, <&sl>;
        };
        //      Hold: LAYER_Hold.
        //  Tap once: sticky LAYER_OneShot.
        // Tap twice: toggle LAYER_HOLD.
        layer_helper: layer_helper {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <100>;
            bindings = <&mo_sticky LAYER_Hold LAYER_OneShot>, <&to LAYER_Hold>;
        };
        vim_s: vim_s {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <100>;
            bindings = <&kp S>, <&kp_vim SQT>, <&kp_vim DQT>;
        };
        vim_w: vim_w {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <100>;
            bindings = <&kp W>, <&kp_vim W>, <&kp_vim_double W Q>;
        };
    };
};


