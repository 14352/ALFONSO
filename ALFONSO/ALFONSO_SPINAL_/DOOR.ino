const int trigPin = 8;
const int echoPin = 10;

float duration, distance, motorSpeed;

void doorInit(){
    pinMode(2, OUTPUT); //init the output
    pinMode(3, OUTPUT); 
    pinMode(4, OUTPUT); 
    pinMode(53, OUTPUT); //this is the relay module for the door feedback
    pinMode(trigPin, OUTPUT);
    pinMode(echoPin, INPUT);
}
void doorReverse(float percent){
    digitalWrite(2, HIGH); //reverse
    digitalWrite(3, LOW); //reverse
    analogWrite(4, percent*255); //pin 3 is PWM, 76/255 = (about) 30% speed. Max is 255. 
}
void doorForward(float percent){
    digitalWrite(2, LOW); //forward
    digitalWrite(3, HIGH); //forward
    analogWrite(4, percent*255); //pin 3 is PWM, 178/255 = (about) 70% speed. Max is 255.
}
void doorBreak(){
    digitalWrite(2, LOW); //reverse
    digitalWrite(3, LOW); //reverse
    analogWrite(4, 0); //pin 3 is PWM, 76/255 = (about) 30% speed. Max is 255. 
}
void doorCoast(){
    digitalWrite(2, HIGH); //reverse
    digitalWrite(3, HIGH); //reverse
    analogWrite(4, 0); //pin 3 is PWM, 76/255 = (about) 30% speed. Max is 255. 
}
void doorRelayOn(){
   digitalWrite(53, HIGH);
}
void doorRelayOff(){
   digitalWrite(53, LOW); 
}

float getDistance(){
  digitalWrite(trigPin, LOW);
  delayMicroseconds(2);
  digitalWrite(trigPin, HIGH);
  delayMicroseconds(10);
  digitalWrite(trigPin, LOW);

  duration = pulseIn(echoPin, HIGH);
  distance = (duration*.0343)/2;
  //Serial.println(distance);
  delay(100);
  return distance;
}
void openDoor(){
  
  while(getDistance()>35){
    motorSpeed = (getDistance()-30)/20;
    doorRelayOn();
    doorForward(motorSpeed);
  } 
  doorRelayOff();
  doorForward(0);
 // Serial.println("door opened");
}

void closeDoor(){
  
  while(getDistance()<180){
    //motorSpeed = getDistance()/100;
    doorRelayOn();
    doorReverse(.5);
    
  } 
  doorRelayOff();
  doorReverse(0);
  //Serial.println("door closed");
}
void sav(){
 doorRelayOn();
    doorForward(.3);
    delay(5000);
    doorRelayOff();
    doorForward(0);
    delay(5000);
    doorRelayOn();
    doorReverse(.3);
    delay(3000);
    doorRelayOff();
    doorForward(0);
    delay(5000); 
}
