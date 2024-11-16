#define Xaxis_pin A0 // Arduino pin connected to the VRx Pin
#define Yaxis_pin A1 // Arduino pin connected to the VRy Pin
#define SW_pin A2 // Arduino pin connected to the SW Pin

void setup() {
  pinMode(SW_pin, INPUT);
  digitalWrite(SW_pin, HIGH);
  Serial.begin(9600);
}

void loop() {
  // read the sensor value:
  int sensorValue = analogRead(A0);
  // map the sensor range (0-1023) to a range of 1-100:
  int mappedValue = map(sensorValue, 0, 1023, 1, 100);
  // print the mapped value to the serial port:
  Serial.println(mappedValue);
  // wait a bit for the next reading:
  delay(100);
}
