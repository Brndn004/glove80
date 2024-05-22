
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
        vim_b: vim_b {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <200>;
            bindings = <&kp B>, <&kp_vim B>;
        };
        vim_c: vim_c {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <200>;
            bindings = <&kp C>, <&kp_vim Q>, <&kp_vim_double Q Q>;
        };
        vim_d: vim_d {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <200>;
            bindings = <&kp D>, <&kp_vim D>;
        };
        vim_e: vim_e {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <200>;
            bindings = <&kp E>, <&kp_vim E>;
        };
        vim_f: vim_f {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <200>;
            bindings = <&kp F>, <&kp_vim F>;
        };
        vim_g: vim_g {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <200>;
            bindings = <&kp G>, <&kp_vim N5>;
        };
        vim_h: vim_h {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <200>;
            bindings = <&kp H>, <&kp_vim N6>;
        };
        vim_i: vim_i {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <200>;
            bindings = <&kp I>, <&kp_vim STAR>;
        };
        vim_r: vim_r {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <200>;
            bindings = <&kp R>, <&kp_vim R>;
        };
        vim_s: vim_s {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <200>;
            bindings = <&kp S>, <&kp_vim SQT>, <&kp_vim DQT>;
        };
        vim_t: vim_t {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <300>;
            bindings = <&kp T>, <&kp_vim T>;
        };
        vim_u: vim_u {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <200>;
            bindings = <&kp U>, <&kp_vim HASH>;
        };
        vim_w: vim_w {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <200>;
            bindings = <&kp W>, <&kp_vim W>, <&kp_vim_double W Q>;
        };
        vim_x: vim_x {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <200>;
            bindings = <&kp X>, <&kp_vim X>;
        };
        vim_z: vim_z {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <200>;
            bindings = <&kp Z>, <&kp_vim Z>;
        };
    };
};


