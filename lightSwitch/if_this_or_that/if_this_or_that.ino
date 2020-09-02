#include <IRremote.h>

int RECV_PIN = 6;
IRrecv irrecv(RECV_PIN);
decode_results results;

#define POWER 0x00FF629D
#define A 0x00FF22DD
#define B 0x00FF02FD
#define C 0x00FFC23D
#define UP 0x00FF9867
#define DOWN 0x00FF38C7
#define LEFT 0x00FF30CF
#define RIGHT 0x00FF7A85
#define SELECT 0x00FF18E7

//------------------------------------------------------------

void setup()
{
  Serial.begin(9600);
  irrecv.enableIRIn(); // Start the receiver
}

void loop()
{
  if (irrecv.decode(&results))
  {
    if (results.value == 0x40BE827D)
    {
      Serial.println("ref");
    }
    else if (results.value == 0x40BE42BD)
    {
      Serial.println("-");
    }
    
    irrecv.resume();

  }
  
}
