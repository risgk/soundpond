#define ANTICHATTERING_WAIT (100)   // milliseconds
#define ACTIVE              (LOW)
#define INPUT_PIN           (2)



#define INACTIVE            ((ACTIVE == HIGH) ? LOW : HIGH)
#define INVALID             (0xFF)
#define LED_PIN             (13)

typedef struct {
  byte          value;            // HIGH or LOW
  unsigned long valueChangedTime; // milliseconds
} SENSOR_STATE;

SENSOR_STATE s_sensorStates = {
  INACTIVE, 0,
};

void setup() {
  pinMode(INPUT_PIN, INPUT);
  
  pinMode(LED_PIN, OUTPUT);
  digitalWrite(LED_PIN, LOW);
}

void loop() {
  unsigned long currentTime = millis();
  
  if (currentTime - s_sensorStates.valueChangedTime >= ANTICHATTERING_WAIT) {
    byte currentValue = digitalRead(INPUT_PIN);
    
    if ((s_sensorStates.value == INACTIVE) && (currentValue == ACTIVE)) {
      s_sensorStates.value = ACTIVE;
      s_sensorStates.valueChangedTime = currentTime;
      digitalWrite(LED_PIN, HIGH);
    } else if ((s_sensorStates.value == ACTIVE) && (currentValue == INACTIVE)) {
      s_sensorStates.value = INACTIVE;
      s_sensorStates.valueChangedTime = currentTime;
      digitalWrite(LED_PIN, LOW);
    }
  }
}
