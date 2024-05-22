
/* #define VIM_DANCE_DOUBLE(t1, t2, t3) &vim_dance_double t1 t2 t3 */
/* #define VIM_DANCE_SINGLE(t1, t2) &vim_dance t1 t2 */
/* #define VIM_DANCE_REPEAT(t1) VIM_DANCE_SINGLE(t1, t1) */
/* #define GET_MACRO(_1,_2,_3,NAME,...) NAME */
/* #define VIM_DANCE(...) GET_MACRO(__VA_ARGS__, VIM_DANCE_DOUBLE, VIM_DANCE_SINGLE, VIM_DANCE_REPEAT)(__VA_ARGS__) */


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
        vim_w: vim_s {
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


