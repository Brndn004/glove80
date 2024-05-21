
/ {
    macros {
        adp_start_fe: adp_start_fe {
            label = "&ADP_START_FE";
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            tap-ms = <1>;
            wait-ms = <1>;
            bindings
                = <&kp A>
                , <&kp D>
                , <&kp P>
                , <&kp SPACE>
                , <&kp S>
                , <&kp T>
                , <&kp A>
                , <&kp R>
                , <&kp T>
                , <&kp UNDER>
                , <&kp F>
                , <&kp E>
                , <&kp SPACE>
                , <&kp MINUS>
                , <&kp MINUS>
                , <&kp S>
                , <&kp I>
                , <&kp L>
                , <&kp E>
                , <&kp N>
                , <&kp C>
                , <&kp E>
                , <&kp UNDER>
                , <&kp E>
                , <&kp R>
                , <&kp R>
                , <&kp O>
                , <&kp R>
                , <&kp S>;
        };
    adp_start_docker_example: adp_start_docker_example {
            label = "&ADP_START_DOCKER_EXAMPLE";
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            tap-ms = <1>;
            wait-ms = <1>;
            bindings
                = <&kp A>
                , <&kp D>
                , <&kp P>
                , <&kp SPACE>
                , <&kp S>
                , <&kp T>
                , <&kp A>
                , <&kp R>
                , <&kp T>
                , <&kp UNDER>
                , <&kp D>
                , <&kp O>
                , <&kp C>
                , <&kp K>
                , <&kp E>
                , <&kp R>
                , <&kp SPACE>
                , <&kp E>
                , <&kp X>
                , <&kp A>
                , <&kp M>
                , <&kp P>
                , <&kp L>
                , <&kp E>;
        };
    adp_run_example_optimized: adp_run_example_optimized {
            label = "&ADP_RUN_EXAMPLE_OPTIMIZED";
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            tap-ms = <1>;
            wait-ms = <1>;
            bindings
                = <&kp A>
                , <&kp D>
                , <&kp P>
                , <&kp SPACE>
                , <&kp R>
                , <&kp U>
                , <&kp N>
                , <&kp SPACE>
                , <&kp E>
                , <&kp X>
                , <&kp A>
                , <&kp M>
                , <&kp P>
                , <&kp L>
                , <&kp E>
                , <&kp SPACE>
                , <&kp MINUS>
                , <&kp MINUS>
                , <&kp O>
                , <&kp P>
                , <&kp T>
                , <&kp I>
                , <&kp M>
                , <&kp I>
                , <&kp Z>
                , <&kp E>
                , <&kp D>;
        };
    lock: lock {
            label = "&LOCK";
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            tap-ms = <1>;
            wait-ms = <1>;
            bindings
                = <&sk LGUI>
                , <&kp L>;
        };
    desktop_up: desktop_up {
            label = "&DESKTOP_UP";
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            tap-ms = <1>;
            wait-ms = <1>;
            bindings
                = <&kt LCTRL>
                , <&sk LALT>
                , <&kp UP>
                , <&kt LCTRL>;
        };
    desktop_down: desktop_down {
            label = "&DESKTOP_DOWN";
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            tap-ms = <1>;
            wait-ms = <1>;
            bindings
                = <&kt LCTRL>
                , <&sk LALT>
                , <&kp DOWN>
                , <&kt LCTRL>;
        };
    open_terminal: open_terminal {
            label = "&OPEN_TERMINAL";
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            tap-ms = <1>;
            wait-ms = <1>;
            bindings
                = <&kt LCTRL>
                , <&sk LALT>
                , <&kp T>
                , <&kt LCTRL>;
        };
    tab_prev: tab_prev {
            label = "&TAB_PREV";
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            tap-ms = <1>;
            wait-ms = <1>;
            bindings
                = <&kt LCTRL>
                , <&sk LSHFT>
                , <&kp TAB>
                , <&kt LCTRL>;
        };
    tab_next: tab_next {
            label = "&TAB_NEXT";
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            tap-ms = <1>;
            wait-ms = <1>;
            bindings
                = <&sk LCTRL>
                , <&kp TAB>;
        };
    tab_move_right: tab_move_right {
            label = "&TAB_MOVE_RIGHT";
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            tap-ms = <1>;
            wait-ms = <1>;
            bindings
                = <&kt LCTRL>
                , <&sk LSHFT>
                , <&kp PG_DN>
                , <&kt LCTRL>;
        };
    tab_move_left: tab_move_left {
            label = "&TAB_MOVE_LEFT";
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            tap-ms = <1>;
            wait-ms = <1>;
            bindings
                = <&kt LCTRL>
                , <&sk LSHFT>
                , <&kp PG_UP>
                , <&kt LCTRL>;
        };
    window_next: window_next {
            label = "&WINDOW_NEXT";
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            tap-ms = <1>;
            wait-ms = <1>;
            bindings
                = <&sk LALT>
                , <&kp TAB>;
        };
    window_close: window_close {
            label = "&WINDOW_CLOSE";
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            tap-ms = <1>;
            wait-ms = <1>;
            bindings
                = <&sk LALT>
                , <&kp F4>;
        };
    zoom_in: zoom_in {
            label = "&ZOOM_IN";
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            tap-ms = <1>;
            wait-ms = <1>;
            bindings
                = <&sk LCTRL>
                , <&kp PLUS>;
        };
    zoom_out: zoom_out {
            label = "&ZOOM_OUT";
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            tap-ms = <1>;
            wait-ms = <1>;
            bindings
                = <&sk LCTRL>
                , <&kp MINUS>;
        };
    };
    // 1 param macro
    my_one_param_macro: my_one_param_macro {
        label = "&ONE_PARAM_MACRO";
        compatible = "zmk,behavior-macro-one-param";
        #binding-cells = <1>; // Must be 1
        bindings = <&kp>;
    };


};
