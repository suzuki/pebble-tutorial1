#include <pebble.h>

static Window *s_main_window;

static void main_window_load(Window *window) {

}

static void main_window_unload(Window *window) {

}

static void init() {
  // Create main Window
  s_main_window = window_create();

  // Set Handlers
  window_set_window_handlers(s_main_window, (WindowHandlers) {
    .load = main_window_load,
    .unload = main_window_unload
  });

  // Show Window
  window_stack_push(s_main_window, true);
}

static void deinit() {
  // Destory Window
  window_destroy(s_main_window);
}

int main(void) {
  init();
  app_event_loop();
  deinit();
}
