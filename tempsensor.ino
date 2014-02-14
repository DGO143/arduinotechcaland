// these constants won't change:
const int ledPin = 13;      // led connected to digital pin 13
const int tempSensor = A0; // the piezo is connected to analog pin 0
const int threshold = 200;  // threshold value to decide when the detected sound is a knock or not


// these variables will change:
int sensorReading = 0;      // variable to store the value read from the sensor pin
int ledState = LOW;         // variable used to store the last LED status, to toggle the light

void setup() {
  pinMode(ledPin, OUTPUT); // declare the ledPin as as OUTPUT
  Serial.begin(9600);       // use the serial port
}

void loop() {
  // read the sensor and store it in the variable sensorReading:
  sensorReading = analogRead(tempSensor);    

  // if the sensor reading is greater than the threshold:
  if (sensorReading >= threshold) {
    // toggle the status of the ledPin:
    ledState = !ledState;   
    // update the LED pin itself:        
    digitalWrite(ledPin, ledState);
    // send the string "Knock!" back to the computer, followed by newline
    Serial.println("TOO HOT IN HERE!!!");         
  }
  Serial.println(sensorReading);
  delay(1000);  // delay to avoid overloading the serial port buffer
}
