/*
 * main.cpp
 *
 *  Created on: Jun 7, 2015
 *      Author: toanthanh
 */



#include <Arduino.h>


int main(void)
{
	init();

	setup();

	for (;;)
		loop();

	return 0;
}
void setup() {
	Serial.begin(9600);
	Serial1.begin(9600);


//	delay(1000);
//	Serial1.print("+++");
////	Serial.write("+++");
//	Serial.println("+++");
//	delay(1000);
//
//	if (Serial1.available()) {
//		int inByte = Serial1.read();
//		Serial.write(inByte);
//	  }
//
//
//	Serial1.println("AT");
//  if (Serial1.available()) {
//	int inByte = Serial1.read();
//	Serial.write(inByte);
//  }
}
void loop() {
	  if (Serial1.available()) {
	    int inByte = Serial1.read();
	    Serial.write(inByte);
	  }
//
//	  // read from port 0, send to port 1:
	  if (Serial.available()) {
	    int inByte = Serial.read();
	    Serial1.write(inByte);
	  }

}
