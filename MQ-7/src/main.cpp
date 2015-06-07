/*
 * main.cpp
 *
 *  Created on: Jun 7, 2015
 *      Author: toanthanh
 */

/*
 Citizen Sensor
 http://citizensensor.cc
 MQ-7 Carbon Monoxide Sensor
 Power Cycle + Analog Read

 for this example:
 - the "tog" pin of the breakout should be connected to digital pin 12.
 - the "out" pin of the breakout should be connected to analog pin 0.

 >> When the sensor is receiving 5v of power, the LED Indicator (Pin 13) will
 >> be ON.  During this time data the data being output is NOT readable.
 >> When the sensor is receiving 1.4v or power, the LED Indicator will be
 >> OFF.  This when the data being output is USABLE.

 */

#include <CS_MQ7.h>
#include <Arduino.h>
#include "HardwareSerial.h"


CS_MQ7 MQ7(12, 13);  // 12 = digital Pin connected to "tog" from sensor board
                     // 13 = digital Pin connected to LED Power Indicator

int CoSensorOutput = 0; //analog Pin connected to "out" from sensor board
int CoData = 0;         //analog sensor data


int main(void)
{
	init();

	setup();

	for (;;)
		loop();

	return 0;
}

void setup(){

  Serial.begin(9600);
}

void loop(){

//  MQ7.CoPwrCycler();


  /* your code here and below! */

//  if(MQ7.CurrentState() == LOW){   //we are at 1.4v, read sensor data!
    CoData = analogRead(CoSensorOutput);
    Serial.println(CoData);
    delay(1000);
//  }
//  else{                            //sensor is at 5v, heating time
//    Serial.println("sensor heating!");
//  }
}

