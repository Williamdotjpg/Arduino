/*
  Blink

  Developer: Will
  Date: 2.13.2026

  Turns an LED on for one second, then off for one second, repeatedly.

  Most Arduinos have an on-board LED you can control. On the UNO, MEGA and ZERO
  it is attached to digital pin 13, on MKR1000 on pin 6. LED_BUILTIN is set to
  the correct LED pin independent of which board is used.
  If you want to know what pin the on-board LED is connected to on your Arduino
  model, check the Technical Specs of your board at:
  https://docs.arduino.cc/hardware/

  modified 8 May 2014
  by Scott Fitzgerald
  modified 2 Sep 2016
  by Arturo Guadalupi
  modified 8 Sep 2016
  by Colby Newman

  This example code is in the public domain.

  https://docs.arduino.cc/built-in-examples/basics/Blink/
*/
#define BUZZER 11 //makes a varible called BUZZER its on pin

void setup() {
  pinMode(10, OUTPUT);
  pinMode(9, OUTPUT);
  pinMode(BUZZER, OUTPUT);
}

void loop() {
  // WEE
  digitalWrite(10, HIGH); //Light Turn on
  digitalWrite(9, LOW); // Light Turns off
  tone(BUZZER, 1000);   // high tone
  delay(500);

  // OO
  digitalWrite(9, HIGH); //Light Turn On
  digitalWrite(10, LOW); // Light Turn off
  tone(BUZZER, 600);    // low tone
  delay(500);
}
