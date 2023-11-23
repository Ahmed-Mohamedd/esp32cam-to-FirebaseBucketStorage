// #include "WiFi.h"
// #include "esp_camera.h"
// #include "Arduino.h"
// #include "soc/soc.h"           // Disable brownout problems
// #include "soc/rtc_cntl_reg.h"  // Disable brownout problems
// #include "driver/rtc_io.h"
// #include <SPIFFS.h>
// #include <FS.h>
// #include <Firebase_ESP_Client.h>
// //Provide the token generation process info.
// #include <addons/TokenHelper.h>
#include "ESP32Servo.h"


Servo myservo;
#define turn_time 175

void setup() {
  // Serial port for debugging purposes
  Serial.begin(115200);
  myservo.attach(14);

myservo.write(90);
  // initWiFi();
  // initSPIFFS();
  // // Turn-off the 'brownout detector'
  // WRITE_PERI_REG(RTC_CNTL_BROWN_OUT_REG, 0);
  // initCamera();



}

void loop() {
  

  myservo.write(0);
  delay(turn_time);
  myservo.write(90);
  delay(12*3600*1000);
}
