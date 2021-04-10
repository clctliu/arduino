// use Tools --> Serial Plotter to read changes.
// Joystick GND --> G, +5V --> V, VRX --> A0, VRY --> A1, SW --> D8

void setup() {
  // put your setup code here, to run once:
  Serial.begin(9600);
  pinMode(8, INPUT_PULLUP);
}

void loop() {
  // put your main code here, to run repeatedly:
  Serial.print(analogRead(0)); Serial.print(" ");

// It it hard to read button's data (range from 0 to 1)
// Change the data to 1023 
// Serial.print(digitalRead(8)); Serial.print(" ");  
  Serial.print(digitalRead(8)*1023); Serial.print(" ");    

  Serial.println(); delay(10);
}
