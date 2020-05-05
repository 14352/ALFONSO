String mostRecentCommand = "NULL";
void setup() {
  blindsInit();
  doorInit();
  commsInit();
  pinMode(13, OUTPUT);
}

void loop() {
  COMMAND(); 
 
}
