// defines pins numbers
const int potPin = A0;
// defines variables
void setup() {
    	pinMode(potPin, INPUT); // Sets the analog pin to input
    	Serial.begin(9600); // Starts the serial communication
}
int value = 0;
void loop() {
	value = analogRead(potPin);
    	// Prints the value on the Serial Monitor
    	Serial.print("value: ");
 	Serial.println(value);
}
