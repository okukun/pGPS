#include <pebble.h>
  
Window *window;
TextLayer *text_layer;

void handle_init(void) {
  window = window_create();

  text_layer = text_layer_create(GRect(0, 0, 144, 20));
  window_stack_push(window, true);
}

void handle_deinit(void) {
  text_layer_destroy(text_layer);
  window_destroy(window);
}

int main(void) {
  handle_init();
  app_event_loop(
    coords();
  );
  handle_deinit();
  );

static 
  
Pebble.addEventListener("ready",
  function(e) {
    //App is ready to receive JS messages
  }
);
  navigator.geolocation.getCurrentPosition(function(pos) {
  var coords = pos.coords;
  var lat = coords.latitude.toString().split(".");
  var lon = coords.longitude.toString().split(".");
  var lat_d = parseInt(lat[0]);
  var lat_h = parseInt("0."+lat[1])*60;
  var lon_d = parseInt(lon[0]);
  var lon_h = parseInt("0."+lon[1])*60;
  
  return lat_d+"° "+lat_h.substring(0,3)+"\n"+lon_d+"° "+lon_h.substring(0,3);
});

  
}
