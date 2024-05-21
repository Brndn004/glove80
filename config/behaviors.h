
/ {
    behaviors {
        // Hold for first param, sticky layer for second param.
        mo_sticky: mo_sticky_layer {
            compatible = "zmk,behavior-hold-tap";
            #binding-cells = <2>;
            flavor = "hold-preferred";
            tapping-term-ms = <200>;
            bindings = <&mo>, <&sl>;
        };
        //      Hold: LAYER_Hold.
        //  Tap once: sticky LAYER_OneShot.
        // Tap twice: toggle LAYER_HOLD.
        layer_helper: layer_helper {
            compatible = "zmk,behavior-tap-dance";
            #binding-cells = <0>;
            tapping-term-ms = <200>;
            bindings = <&mo_sticky LAYER_Hold LAYER_OneShot>, <&tog LAYER_Hold>;
        };
    };
};


