
/ {
    behaviors {
        skq: sticky_key_quick_release {
          compatible = "zmk,behavior-sticky-key";
          #binding-cells = <1>;
          release-after-ms = <1000>;
          quick-release;
          ignore-modifiers;
          bindings = <&kp>;
        };
        //  Tap once: sticky LAYER_OneShot.
        // Tap twice: to LAYER_HOLD.
        layer_helper: layer_helper {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <200>;
            bindings = <&sl LAYER_OneShot>, <&to LAYER_Hold>;
        };
        stick_shift: stick_shift {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <200>;
            bindings = <&skq LSHFT>, <&skq LC(LSHFT)>;
        };
        stick_ctrl: stick_ctrl {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <200>;
            bindings = <&skq LCTRL>, <&skq LC(LALT)>;
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
            bindings = <&kp I>, <&kp STAR>;
        };
        vim_u: vim_u {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <200>;
            bindings = <&kp U>, <&kp HASH>;
        };
    };
};


