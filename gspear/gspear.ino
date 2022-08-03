#include <Adafruit_DotStar.h>

#include <Adafruit_NeoPixel.h>
#ifdef __AVR__
#include <avr/power.h>
#endif

#define PIN 4

Adafruit_NeoPixel pixels = Adafruit_NeoPixel(150, PIN, NEO_GRB + NEO_KHZ800);
Adafruit_DotStar dotstar = Adafruit_DotStar(1, INTERNAL_DS_DATA, INTERNAL_DS_CLK, DOTSTAR_BGR);

int delayval = 10;

void setup() {
  pixels.begin();
  dotstar.begin();
}

void loop() {
  dotstar.setPixelColor(0, pixels.Color(255, 50, 0));
  dotstar.show();
  delay(delayval);
  for (int i = 0; i < 41; i++) {
    pixels.setPixelColor(i, pixels.Color(255, 50, 0));
    pixels.show();
    delay(delayval);
  }
  for (int i = 44; i > 40; i--) {
    pixels.setPixelColor(i, pixels.Color(255, 50, 0));
    pixels.show();
    delay(delayval);
  }
  for (int i = 57; i > 44; i--) {
    pixels.setPixelColor(i, pixels.Color(255, 50, 0));
    pixels.show();
    delay(delayval);
  }
  for (int i = 58; i < 61; i++) {
    pixels.setPixelColor(i, pixels.Color(255, 50, 0));
    pixels.show();
    delay(delayval);
  }
  for (int i = 61; i < 150; i++) {
    pixels.setPixelColor(i, pixels.Color(0, 170 - ((i - 60)), 200));
    pixels.show();
    delay(delayval);
  }
}
