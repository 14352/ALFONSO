

void commsInit(){
  Serial.begin(9600);
  Serial.println("arduino ONLINE");
}
void COMMAND(){
  int OUTINT = 0;
  String goARR = "nothing";
  
  goARR= getSTR();
  if(goARR == "a open door"){
    OUTINT = 1;
    openDoor();
    
  } else if(goARR == "a close door"){
    digitalWrite(13, HIGH); 
    delay(500); 
    digitalWrite(13, LOW);
    delay(500);
    closeDoor();
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
