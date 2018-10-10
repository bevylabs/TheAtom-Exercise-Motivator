void beeps(){
  
  digitalWrite(beepPin, HIGH);
  delay(100);
  digitalWrite(beepPin, LOW);
  }

  void interdis(){

      Serial.println("Push button pressed");
    digitalWrite(ledPin, LOW);
    delay(2000);
    //digitalWrite(ledPin, HIGH);
    
     
      
    }
