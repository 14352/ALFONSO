String mostRecentCommand = "NULL";
void setup() {
  blindsInit();
  doorInit();
  commsInit();
  fanInit();
  initIR():
  pinMode(13, OUTPUT);
}

void loop() {
  getCommand(); 
  //Serial.println(getDistance());
}
