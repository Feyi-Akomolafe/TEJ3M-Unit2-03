/* Copyright(c) 2023 Feyi Akomolafe All rights reserved.
  Created by : Feyi Akomolafe
  Created on : February 2023
  TEJ3M-Unit2-03.ino File.
*/

int pin13 = 13;

void setup()
{
 pinMode(pin13, OUTPUT);
}

void loop()
{
 digitalWrite(pin13, HIGH);
 delay(1000);
 digitalWrite(pin13, LOW);
 delay(1000);
}
