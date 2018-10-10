void setup(){

   //Buzzer
  pinMode(beepPin, OUTPUT);
  digitalWrite(beepPin, LOW);
  
  //OLED 
  Serial.begin(115200);
  Serial.println("Motivator is ready...");
  display.begin(SSD1306_SWITCHCAPVCC, 0x3C); 
  display.clearDisplay();

  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.setCursor(0,0);
  display.println("Hello!");
  display.setTextSize(2);
  display.setTextColor(BLACK, WHITE); // 'inverted' text 
  display.println("Motivator");//display.println(3.141592);
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.println("IS");
  display.setTextSize(2);
  display.setTextColor(WHITE);
  display.print("READY");
  display.display();
  delay(3000);
  
  //display.display();
  //delay(2000);
  // Clear the buffer.

   //Push button
  pinMode(btn, INPUT_PULLUP);
  attachInterrupt(digitalPinToInterrupt(btn), interdis, CHANGE);

  //IR distance
  pinMode(reading, INPUT);
  Serial.print("Value");
  Serial.println ("\tVoltage"); //”\t” create spacing of a tab

  //LED on
  pinMode(ledPin, OUTPUT);
 

 
  }
  
