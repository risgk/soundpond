#define SERIAL_SPEED      (31250)
#define SERIAL_SPEED      (38400)

#define NOTE_ON_VELOCITY  (100)
#define DEFAULT_CH        (0)   // default MIDI channel



#define INVALID (0xFF)
#define NUM_PIN (54 + 16) // digital pins + analog pins

typedef struct {
  byte          value;            // HIGH or LOW (low active)
  unsigned long valueChangedTime; // milliseconds
  byte          midiCh;           // 0 to 15
  byte          noteNumber;       // 0 to 127 (INVALID if there is no sensor)
} SENSOR_STATE;

SENSOR_STATE s_SensorStates[NUM_PIN] = {
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 0 (RX0, reserved)
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 1 (TX0, reserved)
  { HIGH, 0, DEFAULT_CH, 60      },  // Pin 2
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 3
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 4
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 5
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 6
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 7
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 8
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 9
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 10
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 11
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 12
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 13
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 14
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 15
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 16
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 17
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 18
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 19
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 20
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 21
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 22
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 23
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 24
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 25
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 26
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 27
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 28
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 29
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 30
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 31
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 32
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 33
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 34
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 35
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 36
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 37
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 38
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 39
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 40
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 41
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 42
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 43
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 44
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 45
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 46
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 47
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 48
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 49
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 50
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 51
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 52
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 53
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 54 (A0)
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 55 (A1)
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 56 (A2)
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 57 (A3)
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 58 (A4)
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 59 (A5)
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 60 (A6)
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 61 (A7)
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 62 (A8)
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 63 (A9)
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 64 (A10)
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 65 (A11)
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 66 (A12)
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 67 (A13)
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 68 (A14)
  { HIGH, 0, DEFAULT_CH, INVALID },  // Pin 69 (A15)
};

void setup() {
  // todo
  pinMode(2, INPUT);
  Serial.begin(SERIAL_SPEED);
}

void loop() {
  // todo
}
