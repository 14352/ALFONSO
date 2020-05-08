int IRledPin =  10;    // LED connected to digital pin 13

// The setup() method runs once, when the sketch starts

void InitIR()   {               
  // initialize the IR digital pin as an output:
  pinMode(IRledPin, OUTPUT);     
  pinMode(7, OUTPUT);
  
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

void projectorPower(){
   delayMicroseconds(14748);
pulseIR(9200);
delayMicroseconds(4600);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(540);
delayMicroseconds(1760);
pulseIR(560);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(540);
pulseIR(560);
delayMicroseconds(600);
pulseIR(560);
delayMicroseconds(1740);
pulseIR(540);
delayMicroseconds(600);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(580);
pulseIR(560);
delayMicroseconds(580);
pulseIR(540);
delayMicroseconds(600);
pulseIR(540);
delayMicroseconds(1740);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(540);
delayMicroseconds(600);
pulseIR(540);
delayMicroseconds(600);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(560);
delayMicroseconds(580);
pulseIR(560);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(580);
pulseIR(560);
delayMicroseconds(580);
pulseIR(560);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(560);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(560);
delayMicroseconds(42240);
pulseIR(9240);
delayMicroseconds(4600);
pulseIR(680);
delayMicroseconds(1620);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(560);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(540);
pulseIR(600);
delayMicroseconds(580);
pulseIR(560);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(560);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(580);
pulseIR(560);
delayMicroseconds(580);
pulseIR(560);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(580);
pulseIR(560);
delayMicroseconds(540);
pulseIR(580);
delayMicroseconds(1740);
pulseIR(580);
delayMicroseconds(540);
pulseIR(600);
delayMicroseconds(1720);
pulseIR(560);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(560);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(42220);
pulseIR(9240);
delayMicroseconds(4600);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(560);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(580);
pulseIR(560);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(600);
pulseIR(580);
delayMicroseconds(580);
pulseIR(540);
delayMicroseconds(1740);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(580);
pulseIR(560);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(580);
pulseIR(540);
delayMicroseconds(600);
pulseIR(560);
delayMicroseconds(580);
pulseIR(560);
delayMicroseconds(580);
pulseIR(580);
delayMicroseconds(560);
pulseIR(540);
delayMicroseconds(620);
pulseIR(560);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(560);
delayMicroseconds(1700);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(560);
delayMicroseconds(48120);
pulseIR(980);
delayMicroseconds(6840);
pulseIR(41144); 
}
void tvOn(){
delayMicroseconds(43292);
pulseIR(9260);
delayMicroseconds(4580);
pulseIR(600);
delayMicroseconds(560);
pulseIR(580);
delayMicroseconds(1720);
pulseIR(600);
delayMicroseconds(540);
pulseIR(600);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(540);
pulseIR(600);
delayMicroseconds(540);
pulseIR(600);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(540);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(540);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(1680);
pulseIR(620);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(540);
pulseIR(600);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(540);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(540);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(620);
delayMicroseconds(1680);
pulseIR(600);
delayMicroseconds(560);
pulseIR(600);
delayMicroseconds(1700);
pulseIR(600);
delayMicroseconds(42020);
pulseIR(9260);
delayMicroseconds(2280);
pulseIR(600);
delayMicroseconds(32944);
pulseIR(9300);
delayMicroseconds(2240);
pulseIR(740);
delayMicroseconds(32784);
pulseIR(9300);
delayMicroseconds(2260);
pulseIR(600);
delayMicroseconds(32924);
pulseIR(9280);
delayMicroseconds(2280);
pulseIR(620);
}


