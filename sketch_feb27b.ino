// C++ code
// motion sensor connected to digital pin 2
const int MotionSensor = 2;
// initial state of sensor is LOW
int MotionState = LOW;
void setup() {
// initialize the LED pin as an output:
pinMode(LED_BUILTIN, OUTPUT);
// initialize the Motion Sensor as an input:
pinMode(MotionSensor, INPUT);
// Initialize serial communication
Serial.begin(9600);
}
void loop() {
// read the state of the MotionSenor value:
MotionState = digitalRead(MotionSensor);
// turn on led if motion detected
if (MotionState == HIGH) {
Serial.println("Motion detected");
digitalWrite(LED_BUILTIN, HIGH);
Serial.println("LED turned on");
}
// turn off led if motion not detected
else {
Serial.println("Motion not detected");
digitalWrite(LED_BUILTIN, LOW);
Serial.println("LED turned off");
}
delay(1000);
}
