/
 //his ESP32 code is created by Kuldeep_Aher

#define DOOR_SENSOR_PIN  21 // ESP32 pin GIOP21 connected to door sensor's pin
#define RELAY_PIN        27 // ESP32 pin GIOP27 connects to the IN pin of relay

int doorState;

void setup() {
  Serial.begin(9600);                     // initialize serial
  pinMode(DOOR_SENSOR_PIN, INPUT_PULLUP); // set ESP32 pin to input pull-up mode
  pinMode(RELAY_PIN, OUTPUT);             // set ESP32 pin to output mode
}

void loop() {
  doorState = digitalRead(DOOR_SENSOR_PIN); // read state

  if (doorState == HIGH) {
    Serial.println("The door is open!, turns the relay ON");
    digitalWrite(RELAY_PIN, HIGH); // turn on relay
  } else {
  
    Serial.println("The door is closed, turns the relay OFF");
    digitalWrite(RELAY_PIN, LOW);  // turn off relay
  }
}
