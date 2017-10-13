// program description
// ************************************************
/*
	make internal LED turn on and off every 1 second
	using delay function
*/


// import libraies
// ************************************************
//#include <string.h>


// global variables
// ************************************************


// setup environment
// ************************************************
	void setup() {
		// the setup function runs once when you press reset or power the board
	  	// initialize digital pin LED_BUILTIN as an output.
	  	pinMode(LED_BUILTIN, OUTPUT);

	}

// main loop
// ************************************************
	void loop() {
		// the loop function runs over and over again forever
	  	digitalWrite(LED_BUILTIN, HIGH);   // turn the LED on (HIGH is the voltage level)
	  	delay(1000);                       // wait for a second
	  	digitalWrite(LED_BUILTIN, LOW);    // turn the LED off by making the voltage LOW
	  	delay(1000);                       // wait for a second
	}


