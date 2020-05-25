String mostRecentCommand = "NULL";
void setup() {
  blindsInit();
  doorInit();
  commsInit();
  fanInit();
  pinMode(13, OUTPUT);
}

void loop() {
  getCommand(); 
  //Serial.println(getDistance());
}
