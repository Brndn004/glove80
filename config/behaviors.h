
/ {
    behaviors {
        //  Tap once: sticky LAYER_OneShot.
        // Tap twice: to LAYER_HOLD.
        layer_helper: layer_helper {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <100>;
            bindings = <&sl LAYER_OneShot>, <&to LAYER_Hold>;
        };
        stick_shift: stick_shift {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <200>;
            bindings = <&sk LSHFT>, <&sk LC(LSHFT)>;
        };
        stick_ctrl: stick_ctrl {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <200>;
            bindings = <&sk LCTRL>, <&sk LC(LALT)>;
        };
        ht5: hold_tap_500_ms {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <2>;
            flavor = "tap-preferred";
            tapping-term-ms = <500>;
            bindings = <&kp>, <&kp>;
        };
        vim_i: vim_i {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <200>;
            bindings = <&kp I>, <&kp_vim STAR>;
        };
        vim_u: vim_u {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <200>;
            bindings = <&kp U>, <&kp_vim HASH>;
        };
    };
};


