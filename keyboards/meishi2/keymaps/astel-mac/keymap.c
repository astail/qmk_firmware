#include QMK_KEYBOARD_H

enum custom_keycodes {
  COMNUM = SAFE_RANGE,
  COMPASS
};


const uint16_t PROGMEM keymaps[][MATRIX_ROWS][MATRIX_COLS] = {
[0] = LAYOUT( /* Base */
  COMNUM,  COMPASS,  LCTL(KC_C), KC_ENTER \
),
};

const uint16_t PROGMEM fn_actions[] = {

};


void matrix_init_user(void) {

}

void matrix_scan_user(void) {

}

bool process_record_user(uint16_t keycode, keyrecord_t *record) {
  switch(keycode){
    case COMNUM:
      if(record->event.pressed){
        //pressed
        SEND_STRING("123456");
      } else {
        //released
      }
      break;
    case COMPASS:
    if(record->event.pressed){
        //pressed
      SEND_STRING("hogehoge");
    }else{
        //released
      }
      break;
  }

  return true;
}

void led_set_user(uint8_t usb_led) {

}

