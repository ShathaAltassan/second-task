// C++ code
//
#include <Servo.h>

int i = 0;

int j = 0;

Servo servo_6;

void setup()
{
  servo_6.attach(6, 500, 2500);
}

void loop()
{
  for (i = 0; i <= 180; i += 1) {
    servo_6.write(i);
    delay(6); // Wait for 6 millisecond(s)
  }
  for (j = 180; j >= 0; j -= 1) {
    servo_6.write(j);
    delay(6); // Wait for 6 millisecond(s)
  }
}