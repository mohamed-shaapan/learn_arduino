// program description
// ************************************************
/*
	use external switch to turn on internal led on or off
	view switch circuit (Arduino simple digital analog input)
*/

// import libraies
// ************************************************
//#include <string.h>


// global variables
// ************************************************
const int led_pin=13;
const int input_pin=2;

// setup environment
// ************************************************
	void setup() {
		// the setup function runs once when you press reset or power the board
	  	pinMode(led_pin, OUTPUT);
	  	pinMode(input_pin, INPUT);

	}

// main loop
// ************************************************
	void loop() {
		// the loop function runs over and over again forever
	  	int val=digitalRead(input_pin);
	  	if(val==HIGH){
	  		digitalWrite(led_pin, HIGH);
	  	}else{
	  		digitalWrite(led_pin, LOW);
	  	}
	}


