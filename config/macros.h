
/ {
    macros {
        asfe: adp_start_fe {
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
        asde: adp_start_docker_example {
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
        areo: adp_run_example_optimized {
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
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            tap-ms = <1>;
            wait-ms = <1>;
            bindings
                = <&sk LGUI>
                , <&kp L>;
        };
        slack_prev: slack_prev {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            tap-ms = <1>;
            wait-ms = <1>;
            bindings
                = <&kt LALT>
                , <&sk LSHFT>
                , <&kp UP>
                , <&kt LALT>;
        };
        slack_next: slack_next {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            tap-ms = <1>;
            wait-ms = <1>;
            bindings
                = <&kt LALT>
                , <&sk LSHFT>
                , <&kp DOWN>
                , <&kt LALT>;
        };
        dt_up: desktop_up {
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
        dt_dn: desktop_down {
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
        term_open: open_terminal {
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
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            tap-ms = <1>;
            wait-ms = <1>;
            bindings
                = <&sk LCTRL>
                , <&kp TAB>;
        };
        tab_move_right: tab_move_right {
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
        win_snap_up: window_snap_up {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            tap-ms = <1>;
            wait-ms = <1>;
            bindings
                = <&sk LGUI>
                , <&kp UP>;
        };
        win_snap_dn: window_snap_dn {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            tap-ms = <1>;
            wait-ms = <1>;
            bindings
                = <&sk LGUI>
                , <&kp DOWN>;
        };
        win_snap_left: window_snap_left {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            tap-ms = <1>;
            wait-ms = <1>;
            bindings
                = <&sk LGUI>
                , <&kp LEFT>;
        };
        win_snap_right: window_snap_right {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            tap-ms = <1>;
            wait-ms = <1>;
            bindings
                = <&sk LGUI>
                , <&kp RIGHT>;
        };
        win_up: window_up {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            tap-ms = <1>;
            wait-ms = <1>;
            bindings
                = <&kt LCTRL>
                , <&kt LALT>
                , <&sk LSHFT>
                , <&kp UP>
                , <&kt LALT>
                , <&kt LCTRL>;
        };
        win_dn: window_dn {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            tap-ms = <1>;
            wait-ms = <1>;
            bindings
                = <&kt LCTRL>
                , <&kt LALT>
                , <&sk LSHFT>
                , <&kp DOWN>
                , <&kt LALT>
                , <&kt LCTRL>;
        };
        win_prev: window_prev {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            tap-ms = <1>;
            wait-ms = <1>;
            bindings
                = <&kt LALT>
                , <&sk LSHFT>
                , <&kp TAB>
                , <&kt LALT>;
        };
        win_next: window_next {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            tap-ms = <1>;
            wait-ms = <1>;
            bindings
                = <&sk LALT>
                , <&kp TAB>;
        };
        win_close: window_close {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            tap-ms = <1>;
            wait-ms = <1>;
            bindings
                = <&sk LALT>
                , <&kp F4>;
        };
        zoom_in: zoom_in {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            tap-ms = <1>;
            wait-ms = <1>;
            bindings
                = <&sk LCTRL>
                , <&kp PLUS>;
        };
        zoom_out: zoom_out {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            tap-ms = <1>;
            wait-ms = <1>;
            bindings
                = <&sk LCTRL>
                , <&kp MINUS>;
        };
        hist_back: hist_back {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            tap-ms = <1>;
            wait-ms = <1>;
            bindings
                = <&sk LALT>
                , <&kp LEFT>;
        };
        hist_for: hist_for {
            compatible = "zmk,behavior-macro";
            #binding-cells = <0>;
            tap-ms = <1>;
            wait-ms = <1>;
            bindings
                = <&sk LALT>
                , <&kp RIGHT>;
        };
        vim: vim {
            compatible = "zmk,behavior-macro";
            #binding-cells = <1>;
            tap-ms = <1>;
            wait-ms = <1>;
            bindings
                = <&kp SEMI>
                , <&macro_param_1to1>
                , <&kp MACRO_PLACEHOLDER>;
        };
    };
};
