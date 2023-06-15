#include <behaviors.dtsi>
#include <dt-bindings/zmk/keys.h>
#include <dt-bindings/zmk/bt.h>
#include <dt-bindings/zmk/rgb.h>
#include <dt-bindings/zmk/outputs.h>

#define NAV 2
#define SYM 3
#define NUM 4
#define ADJ 5

// Keycode defines
#define VD_NEW          LC(LG(D))
#define VD_LEFT         LC(LG(LEFT))
#define VD_RIGHT        LC(LG(RIGHT))
#define VD_CLOSE        LC(LG(F4))

&mt     {
        retro-tap;
         };

&sk     {
        release-after-ms = <2000>;
        quick-release;
         };

&sl     {
         release-after-ms = <150>;
         };