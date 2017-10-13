// program description
// ************************************************
/*
	make internal LED turn on and off every 1 second
	without using delay function
*/


// import libraies
// ************************************************
//#include <string.h>


// global variables
// ************************************************
	// set pin and led ports
	const int ledPin = 13;

	// set program variables
	int ledState = LOW; 		// ledState used to set the LED
	long previousMillis = 0; 	// will store last time LED was updated
	long interval = 1000;		// interval at which to blink (milliseconds)


// setup environment
// ************************************************
	void setup() {
		// the setup function runs once when you press reset or power the board
	  	// initialize digital pin LED_BUILTIN as an output.
	  	pinMode(ledPin, OUTPUT);

	}

// main loop
// ************************************************
	void loop() {
	/* check to see if it's time to blink the LED; that is, if the
	   difference between the current time and last time you blinked
	   the LED is bigger than the interval at which you want to
	   blink the LED.
	*/
		unsigned long currentMillis = millis();
		if(currentMillis - previousMillis > interval) {
			// save the last time you blinked the LED
			previousMillis = currentMillis;

			// if the LED is off turn it on and vice-versa:
			if (ledState == LOW){
				ledState = HIGH;
			}else{
				ledState = LOW;
			}

		// set the LED with the ledState of the variable:
		digitalWrite(ledPin, ledState);
		}

		
	}


