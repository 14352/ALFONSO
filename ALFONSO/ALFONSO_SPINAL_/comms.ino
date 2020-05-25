

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
  } else if(goARR == "a leds off"){
    LEDS_POWER();
  } else if(goARR == "a leds red"){
    LEDS_RED();
    LEDS_RED();
    LEDS_RED();
  } else if(goARR == "a leds blue"){
    LEDS_BLUE();
    LEDS_BLUE();
    LEDS_BLUE();
  } else if(goARR == "a leds green"){
    LEDS_GREEN();
    LEDS_GREEN();
    LEDS_GREEN();
  } else if(goARR == "a leds disco"){
    LEDS_DISCO();
    LEDS_DISCO();
    LEDS_DISCO();
  } else if(goARR == "a leds white"){
    LEDS_WHITE();
    LEDS_WHITE();
    LEDS_WHITE();
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
