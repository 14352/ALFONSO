

void commsInit(){
  Serial.begin(9600);
  Serial.println("arduino ONLINE");
}
void getCommand(){
  
  String goARR = "nothing"; 
  goARR= getSTR();
  int OUTINT = 0;
  if(goARR == "a open door"){
    openDoor();
  } else if(goARR == "a close door"){
    closeDoor();
  } else if(goARR == "a fan on"){
    fanOn();
  } else if(goARR == "a fan off"){
    fanOff();
  } else if(goARR == "a blinds up"){
    upBlinds();
  }else if(goARR == "a blinds down"){
    downBlinds();
  } else if(goARR == "a leds on"){
    LEDS_POWER();
    delay(100);
    LEDS_POWER();
    delay(100);
    LEDS_POWER();
  } else if(goARR == "a leds off"){
    LEDS_POWER();
    delay(100);
    LEDS_POWER();
    delay(100);
    LEDS_POWER();
  } else if(goARR == "a leds red"){
    LEDS_RED();
    delay(100);
    LEDS_RED();
    delay(100);
    LEDS_RED();
    delay(100);
  } else if(goARR == "a leds blue"){
    LEDS_BLUE();
    delay(100);
    LEDS_BLUE();
    delay(100);
    LEDS_BLUE();
    delay(100);
  } else if(goARR == "a leds green"){
    LEDS_GREEN();
    delay(100);
    LEDS_GREEN();
    delay(100);
    LEDS_GREEN();
    delay(100);
  } else if(goARR == "a leds disco"){
    LEDS_DISCO();
    delay(100);
    LEDS_DISCO();
    delay(100);
    LEDS_DISCO();
    delay(100);
  } else if(goARR == "a leds white"){
    LEDS_WHITE();
    delay(100);
    LEDS_WHITE();
    delay(100);
    LEDS_WHITE();
    delay(100);
  } else if(goARR == "a projector power"){
    projectorPower();
    delay(1000);
    projectorPower();
    delay(1000);
    projectorPower();
    delay(1000);
  } else{
    OUTINT = 0; 
  }
  
}


String getSTR(){
  String ThisString;
  if(Serial.available() > 0){
    ThisString = Serial.readString();
  } else {
    ThisString = "no";
  }
  return ThisString;
}
