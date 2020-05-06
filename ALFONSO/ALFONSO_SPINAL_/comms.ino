

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
