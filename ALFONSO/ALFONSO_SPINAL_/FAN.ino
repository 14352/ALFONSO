void fanInit(){
  pinMode(49, OUTPUT);
}

void fanOn(){
 digitalWrite(49, HIGH); 
}
void fanOff(){
 digitalWrite(49, LOW);   
}
