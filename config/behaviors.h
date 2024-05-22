
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
        // Hold for first param, sticky layer for second param.
        mo_sticky: mo_sticky_layer {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <2>;
            flavor = "hold-preferred";
            tapping-term-ms = <100>;
            bindings = <&mo>, <&sl>;
        };
        //       Hold: mo LAYER_Hold.
        //   Tap once: sl LAYER_Hold.
        //  Tap twice: sl LAYER_OneShot.
        // Tap thrice: to LAYER_HOLD.
        layer_helper: layer_helper {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <200>;
            bindings = <&mo_sticky LAYER_Hold LAYER_Hold>, <&sl LAYER_OneShot>, <&to LAYER_Hold>;
        };
        hold_stick: hold_stick {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <2>;
            flavor = "tap-preferred";
            tapping-term-ms = <200>;
            require-prior-idle-ms = <125>;
            bindings = <&kp>, <&skq>;
        };
        stick_shift: stick_shift {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <200>;
            bindings = <&hold_stick LSHFT LSHFT>, <&skq LC(LSHFT)>;
        };
        spenter: spenter {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <200>;
            bindings = <&kp SPACE>, <&kp RET>;
        };
        shft_ctrl: shft_ctrl {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <200>;
            bindings = <&skq LSHFT>, <&skq LCTRL>, <&skq LC(LSHFT)>;
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
        vht: vim_hold_tap {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <2>;
            flavor = "tap-preferred";
            tapping-term-ms = <350>;
            bindings = <&vim>, <&kp>;
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


