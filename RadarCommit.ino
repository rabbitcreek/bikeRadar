#include <Wire.h> 
#include <TFT_eSPI.h>
#include <SPI.h>
TFT_eSPI tft=TFT_eSPI();


void setup(){
   Wire.begin(); 
   Serial.begin(57600);
   pinMode(13, INPUT);
   digitalWrite(13, LOW);
   pinMode(17, INPUT);
   digitalWrite(17, LOW);
   tft.init();
   tft.fillScreen(TFT_BLACK);
}
void loop() {
  /*
  Serial.print("Detected   ");
  Serial.println("Front/Back");
  Serial.print(digitalRead(13));
  Serial.println(digitalRead(17));
  */ 
  tft.drawCircle(70, 120, 40, TFT_GREEN);
  if(digitalRead(13)){
    if(digitalRead(17)){
      tft.fillCircle(70,120,30, TFT_RED);
    }
      else tft.fillCircle(70, 120,30, TFT_BLUE);
    }
    delay(500);
   tft.fillCircle(70,120,30, TFT_BLACK);
  }
