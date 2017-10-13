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
int incomingByte = 0;   // for incoming serial data

// setup environment
// ************************************************
	void setup() {
		// the setup function runs once when you press reset or power the board
		Serial.begin(9600);     // opens serial port, sets data rate to 9600 bps

	}

// main loop
// ************************************************
	void loop() {
		// the loop function runs over and over again forever
		read_from_serial();
	}


// internal functions
// ***********************************************
	boolean read_from_serial(){
		// send data only when you receive data:
        if (Serial.available() > 0) {
                // read the incoming byte:
                incomingByte = Serial.read();

                // say what you got:
                Serial.print("I received: ");
                Serial.println(incomingByte, DEC);
        }
	}


