#include <IRremote.h>
int RECV_PIN = 2;
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
  Serial.println("ready");
  irrecv.enableIRIn(); // Start the receiver
}

void loop()
{
  if (irrecv.decode(&results))
  {
    if (results.value == POWER)
    {
      Serial.println("POWER");
    }
    else if (results.value == A)
    {
      Serial.println("A");
    }
    else if (results.value == B)
    {
      Serial.println("B");
    }
    else if (results.value == C)
    {
      Serial.println("C");
    }
    else if (results.value == UP)
    {
      Serial.println("UP");
    }
    else if (results.value == DOWN)
    {
      Serial.println("DOWN");
    }
    else if (results.value == LEFT)
    {
      Serial.println("LEFT");
    }
    else if (results.value == RIGHT)
    {
      Serial.println("RIGHT");
    }
    else if (results.value == SELECT)
    {
      Serial.println("SELECT");
    }
    else {
      Serial.println("IR RECV Code Value Not Defined or Button was Held Down");
    }

    Serial.print("IR RECV Code = 0x ");
    Serial.println(results.value, HEX);
    irrecv.resume();
  }
}
