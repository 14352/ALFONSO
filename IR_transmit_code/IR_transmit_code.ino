int IRledPin =  10;    // LED connected to digital pin 13

// The setup() method runs once, when the sketch starts

void setup()   {               
  // initialize the IR digital pin as an output:
  pinMode(IRledPin, OUTPUT);     
  pinMode(7, OUTPUT);
  Serial.begin(9600);
}

void loop()                    
{
  code2();
  delay(5000);  // wait twenty seconds (20 seconds * 1000 milliseconds) Change this value for different intervals.
}

// This procedure sends a 38KHz pulse to the IRledPin
// for a certain # of microseconds. We'll use this whenever we need to send codes
void pulseIR(long microsecs) {
  // we'll count down from the number of microseconds we are told to wait

  cli();  // this turns off any background interrupts

  while (microsecs > 0) {
    // 38 kHz is about 13 microseconds high and 13 microseconds low
   digitalWrite(IRledPin, HIGH);  // this takes about 3 microseconds to happen
   delayMicroseconds(10);         // hang out for 10 microseconds
   digitalWrite(IRledPin, LOW);   // this also takes about 3 microseconds
   delayMicroseconds(10);         // hang out for 10 microseconds

   // so 26 microseconds altogether
   microsecs -= 26;
  }

  sei();  // this turns them back on
}

void SendChannelUpCode() {
  // This is the code for the CHANNEL + for the TV COMCAST

delayMicroseconds(7724);
pulseIR(9240);
delayMicroseconds(4580);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(560);
pulseIR(640);
delayMicroseconds(500);
pulseIR(640);
delayMicroseconds(1640);
pulseIR(580);
delayMicroseconds(580);
pulseIR(620);
delayMicroseconds(500);
pulseIR(660);
delayMicroseconds(500);
pulseIR(580);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(540);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(560);
pulseIR(640);
delayMicroseconds(1640);
pulseIR(600);
delayMicroseconds(540);
pulseIR(660);
delayMicroseconds(1640);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(1680);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(560);
pulseIR(640);
delayMicroseconds(500);
pulseIR(600);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(540);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(1680);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(42240);
pulseIR(9240);
delayMicroseconds(4580);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(1680);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(540);
pulseIR(640);
delayMicroseconds(500);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(560);
pulseIR(640);
delayMicroseconds(500);
pulseIR(600);
delayMicroseconds(540);
pulseIR(600);
delayMicroseconds(540);
pulseIR(600);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(540);
pulseIR(640);
delayMicroseconds(1660);
pulseIR(580);
delayMicroseconds(560);
pulseIR(640);
delayMicroseconds(1640);
pulseIR(600);
delayMicroseconds(1680);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(1680);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(620);
delayMicroseconds(1680);
pulseIR(600);
delayMicroseconds(42220);
pulseIR(9220);
delayMicroseconds(4600);
pulseIR(600);
delayMicroseconds(1680);
pulseIR(620);
delayMicroseconds(1680);
pulseIR(600);
delayMicroseconds(1680);
pulseIR(600);
delayMicroseconds(1680);
pulseIR(620);
delayMicroseconds(540);
pulseIR(640);
delayMicroseconds(500);
pulseIR(600);
delayMicroseconds(1680);
pulseIR(620);
delayMicroseconds(520);
pulseIR(600);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(540);
pulseIR(600);
delayMicroseconds(1680);
pulseIR(620);
delayMicroseconds(540);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(620);
delayMicroseconds(520);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(1680);
pulseIR(620);
delayMicroseconds(1660);
pulseIR(620);
delayMicroseconds(1680);
pulseIR(620);
delayMicroseconds(520);
pulseIR(600);
delayMicroseconds(540);
pulseIR(600);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(620);
delayMicroseconds(43000);
pulseIR(1000);
delayMicroseconds(22160);
pulseIR(41224);

}
void code2(){
delayMicroseconds(46572);
pulseIR(9240);
delayMicroseconds(4580);
pulseIR(560);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(560);
delayMicroseconds(1720);
pulseIR(600);
delayMicroseconds(1680);
pulseIR(580);
delayMicroseconds(580);
pulseIR(560);
delayMicroseconds(580);
pulseIR(560);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(580);
pulseIR(560);
delayMicroseconds(580);
pulseIR(600);
delayMicroseconds(540);
pulseIR(580);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(1680);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(600);
delayMicroseconds(1680);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(560);
pulseIR(560);
delayMicroseconds(580);
pulseIR(560);
delayMicroseconds(580);
pulseIR(600);
delayMicroseconds(540);
pulseIR(580);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(560);
pulseIR(560);
delayMicroseconds(1720);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(1680);
pulseIR(580);
delayMicroseconds(42240);
pulseIR(9260);
delayMicroseconds(4580);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(1680);
pulseIR(580);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(1680);
pulseIR(580);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(560);
pulseIR(560);
delayMicroseconds(580);
pulseIR(560);
delayMicroseconds(580);
pulseIR(600);
delayMicroseconds(540);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(1680);
pulseIR(580);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(560);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(540);
pulseIR(600);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(540);
pulseIR(600);
delayMicroseconds(540);
pulseIR(600);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(1680);
pulseIR(600);
delayMicroseconds(42240);
pulseIR(9240);
delayMicroseconds(4580);
pulseIR(560);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(560);
delayMicroseconds(1720);
pulseIR(600);
delayMicroseconds(1680);
pulseIR(600);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(560);
pulseIR(560);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(580);
pulseIR(560);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(560);
pulseIR(560);
delayMicroseconds(580);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(560);
delayMicroseconds(580);
pulseIR(600);
delayMicroseconds(1680);
pulseIR(580);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(1680);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(560);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(580);
pulseIR(560);
delayMicroseconds(580);
pulseIR(560);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(540);
pulseIR(580);
delayMicroseconds(580);
pulseIR(560);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(48120);
pulseIR(980);
delayMicroseconds(6820);
pulseIR(41184);
digitalWrite(7, HIGH);
delay(1000);
digitalWrite(7, LOW);
delay(1000);
}
