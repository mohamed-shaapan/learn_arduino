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
const int debounce_delay=10;

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
	  	if(debounce(input_pin)){
	  		digitalWrite(led_pin, HIGH);
	  	}
	}


// internal functions
// ***********************************************
	boolean debounce(int pin){
		//this function 
		boolean state;
		boolean previous_state;
		
		previous_state=digitalRead(pin);
		for(int counter=1; counter<debounce_delay; counter++){
			delay(1);
			state=digitalRead(pin);
			if(state!=previous_state){
				counter=0;
				previous_state=state;
			}
		}

		return state;

	}

