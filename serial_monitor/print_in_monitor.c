// program description
// ************************************************
/*
	read and write from serial monitor
*/

// import libraies
// ************************************************
//#include <string.h>


// global variables
// ************************************************
unsigned long time;

// setup environment
// ************************************************
	void setup() {
		// the setup function runs once when you press reset or power the board

	}

// main loop
// ************************************************
	void loop() {
		// the loop function runs over and over again forever
		print_time();
		delay(5000);
	}


// internal functions
// ***********************************************
	boolean print_time(){
		Serial.print("Time : ");
		time=millis();
		Serial.print(millis);
	}


