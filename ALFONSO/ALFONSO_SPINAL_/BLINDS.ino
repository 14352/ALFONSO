void blindsInit(){
    pinMode(5, OUTPUT); //init the output
    pinMode(6, OUTPUT);
    pinMode(7, OUTPUT); 
}
void blindsReverse(double percent){
    digitalWrite(5, HIGH); //reverse
    digitalWrite(6, LOW); //reverse
    analogWrite(7, percent*255); //pin 3 is PWM, 76/255 = (about) 30% speed. Max is 255. 
}
void blindsForward(double percent){
    digitalWrite(5, LOW); //forward
    digitalWrite(6, HIGH); //forward
    analogWrite(7, percent*255); //pin 3 is PWM, 178/255 = (about) 70% speed. Max is 255.
}
void blindsBreak(){
    digitalWrite(5, LOW); //reverse
    digitalWrite(6, LOW); //reverse
    analogWrite(7, 0); //pin 3 is PWM, 76/255 = (about) 30% speed. Max is 255. 
}
void blindsCoast(){
    digitalWrite(5, HIGH); //reverse
    digitalWrite(6, HIGH); //reverse
    analogWrite(7, 0); //pin 3 is PWM, 76/255 = (about) 30% speed. Max is 255. 
}

void downBlinds(){
  blindsForward(.2);
  delay(700);
  blindsForward(0);
}

void upBlinds(){
  blindsReverse(.2);
  delay(700);
  blindsReverse(0);
}
