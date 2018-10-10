//OLED
#include <SPI.h>
#include <Wire.h>
#include <Adafruit_GFX.h>
#include <Adafruit_SSD1306.h>
#define OLED_RESET LED_BUILTIN //4
Adafruit_SSD1306 display(OLED_RESET);

#if (SSD1306_LCDHEIGHT != 64)
#error("Height incorrect, please fix Adafruit_SSD1306.h!");
#endif

//IR distance
#define reading A0
unsigned int value;

int state = 0;
const byte btn = D8;
int beepPin = D7;
int ledPin = D6;
//volatile boolean LED_ON = false;

void loop(){
  //OLED start
  display.clearDisplay();
   display.setTextSize(1);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("Let's Start...");
  display.setTextSize(1);
 display.println("Be Prepare and ready for your exercises..");
 display.setTextSize(2);
  display.setTextColor(WHITE);
  display.print(">Press the ");
   display.setTextColor(BLACK,WHITE);
  display.println("Button");
 display.display();

 process();
  
  //IR distance
  value = analogRead(reading); //take reading from sensor
  float raw_voltage = value*0.00488; //convert analog value to voltage
  Serial.print(value); //display analog value in serial monitor
  Serial.print("\t");
  Serial.println(raw_voltage); //display value of voltage in serial monitor
  delay(100); //create a delay of 1s

   
  
  }
void process(){

  //beepstest();
  beeps();
  digitalWrite(ledPin, HIGH);

  

  
  }

