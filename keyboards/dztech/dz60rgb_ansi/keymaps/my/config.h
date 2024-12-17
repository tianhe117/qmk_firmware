#define DYNAMIC_KEYMAP_LAYER_COUNT 6

/*
 * RGB Matrix Animation modes. Explicitly enabled
 * For full list of effects, see:
 * https://docs.qmk.fm/#/feature_rgb_matrix?id=rgb-matrix-effects
 */

#ifdef ENABLE_MY_RGB
  #define ENABLE_RGB_MATRIX_BREATHING                   // 单色呼吸
  #define ENABLE_RGB_MATRIX_HUE_BREATHING               // 变色呼吸
  #define ENABLE_RGB_MATRIX_TYPING_HEATMAP              // 打字热图,打的越快,越亮
  #define ENABLE_RGB_MATRIX_DIGITAL_RAIN                // 下雨
  #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_SIMPLE       // 单键按下,单键亮起
  #define ENABLE_RGB_MATRIX_SOLID_REACTIVE              // 单键按下,附近亮起
  #define ENABLE_RGB_MATRIX_SOLID_REACTIVE_MULTIWIDE    // 单键按下,附近彩色亮起
  #define ENABLE_RGB_MATRIX_SPLASH                      // 单击后从按键处向四周扩散彩色灯
  #define ENABLE_RGB_MATRIX_SOLID_MULTISPLASH           // 单击后从按键处向四周扩散单色灯
#endif
