#define SERIAL_SPEED        (31250)
//#define SERIAL_SPEED        (38400)

#define NOTE_ON_VELOCITY    (100)
#define DEFAULT_CH          (0)     // default MIDI channel
#define ANTICHATTERING_WAIT (100)   // milliseconds
#define ACTIVE              (LOW)



#define INACTIVE            ((ACTIVE == HIGH) ? LOW : HIGH)
#define INVALID             (0xFF)
#define NUM_PIN             (54 + 16) // digital pins + analog pins

typedef struct {
  byte          value;            // HIGH or LOW
  unsigned long valueChangedTime; // milliseconds
  byte          midiCh;           // 0 to 15
  byte          noteNumber;       // 0 to 127 (INVALID if there is no sensor)
} SENSOR_STATE;

SENSOR_STATE s_sensorStates[NUM_PIN] = {
#if 1
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 0 (RX0, reserved)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 1 (TX0, reserved)
  { INACTIVE, 0, DEFAULT_CH, 36      },  // Pin 2
  { INACTIVE, 0, DEFAULT_CH, 37      },  // Pin 3
  { INACTIVE, 0, DEFAULT_CH, 38      },  // Pin 4
  { INACTIVE, 0, DEFAULT_CH, 39      },  // Pin 5
  { INACTIVE, 0, DEFAULT_CH, 40      },  // Pin 6
  { INACTIVE, 0, DEFAULT_CH, 41      },  // Pin 7
  { INACTIVE, 0, DEFAULT_CH, 42      },  // Pin 8
  { INACTIVE, 0, DEFAULT_CH, 43      },  // Pin 9
  { INACTIVE, 0, DEFAULT_CH, 44      },  // Pin 10
  { INACTIVE, 0, DEFAULT_CH, 45      },  // Pin 11
  { INACTIVE, 0, DEFAULT_CH, 46      },  // Pin 12
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 13 (LED, reserved)
  { INACTIVE, 0, DEFAULT_CH, 47      },  // Pin 14
  { INACTIVE, 0, DEFAULT_CH, 48      },  // Pin 15
  { INACTIVE, 0, DEFAULT_CH, 49      },  // Pin 16
  { INACTIVE, 0, DEFAULT_CH, 50      },  // Pin 17
  { INACTIVE, 0, DEFAULT_CH, 51      },  // Pin 18
  { INACTIVE, 0, DEFAULT_CH, 52      },  // Pin 19
  { INACTIVE, 0, DEFAULT_CH, 53      },  // Pin 20
  { INACTIVE, 0, DEFAULT_CH, 54      },  // Pin 21
  { INACTIVE, 0, DEFAULT_CH, 55      },  // Pin 22
  { INACTIVE, 0, DEFAULT_CH, 56      },  // Pin 23
  { INACTIVE, 0, DEFAULT_CH, 57      },  // Pin 24
  { INACTIVE, 0, DEFAULT_CH, 58      },  // Pin 25
  { INACTIVE, 0, DEFAULT_CH, 59      },  // Pin 26
  { INACTIVE, 0, DEFAULT_CH, 60      },  // Pin 27
  { INACTIVE, 0, DEFAULT_CH, 61      },  // Pin 28
  { INACTIVE, 0, DEFAULT_CH, 62      },  // Pin 29
  { INACTIVE, 0, DEFAULT_CH, 63      },  // Pin 30
  { INACTIVE, 0, DEFAULT_CH, 64      },  // Pin 31
  { INACTIVE, 0, DEFAULT_CH, 65      },  // Pin 32
  { INACTIVE, 0, DEFAULT_CH, 66      },  // Pin 33
  { INACTIVE, 0, DEFAULT_CH, 67      },  // Pin 34
  { INACTIVE, 0, DEFAULT_CH, 68      },  // Pin 35
  { INACTIVE, 0, DEFAULT_CH, 69      },  // Pin 36
  { INACTIVE, 0, DEFAULT_CH, 70      },  // Pin 37
  { INACTIVE, 0, DEFAULT_CH, 71      },  // Pin 38
  { INACTIVE, 0, DEFAULT_CH, 72      },  // Pin 39
  { INACTIVE, 0, DEFAULT_CH, 73      },  // Pin 40
  { INACTIVE, 0, DEFAULT_CH, 74      },  // Pin 41
  { INACTIVE, 0, DEFAULT_CH, 75      },  // Pin 42
  { INACTIVE, 0, DEFAULT_CH, 76      },  // Pin 43
  { INACTIVE, 0, DEFAULT_CH, 77      },  // Pin 44
  { INACTIVE, 0, DEFAULT_CH, 78      },  // Pin 45
  { INACTIVE, 0, DEFAULT_CH, 79      },  // Pin 46
  { INACTIVE, 0, DEFAULT_CH, 80      },  // Pin 47
  { INACTIVE, 0, DEFAULT_CH, 81      },  // Pin 48
  { INACTIVE, 0, DEFAULT_CH, 82      },  // Pin 49
  { INACTIVE, 0, DEFAULT_CH, 83      },  // Pin 50
  { INACTIVE, 0, DEFAULT_CH, 84      },  // Pin 51
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 52
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 53
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 54 (A0)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 55 (A1)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 56 (A2)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 57 (A3)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 58 (A4)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 59 (A5)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 60 (A6)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 61 (A7)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 62 (A8)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 63 (A9)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 64 (A10)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 65 (A11)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 66 (A12)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 67 (A13)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 68 (A14)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 69 (A15)
#else
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 0 (RX0, reserved)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 1 (TX0, reserved)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 2
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 3
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 4
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 5
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 6
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 7
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 8
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 9
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 10
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 11
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 12
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 13 (LED, reserved)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 14
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 15
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 16
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 17
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 18
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 19
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 20
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 21
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 22
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 23
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 24
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 25
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 26
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 27
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 28
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 29
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 30
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 31
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 32
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 33
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 34
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 35
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 36
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 37
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 38
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 39
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 40
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 41
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 42
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 43
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 44
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 45
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 46
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 47
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 48
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 49
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 50
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 51
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 52
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 53
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 54 (A0)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 55 (A1)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 56 (A2)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 57 (A3)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 58 (A4)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 59 (A5)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 60 (A6)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 61 (A7)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 62 (A8)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 63 (A9)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 64 (A10)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 65 (A11)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 66 (A12)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 67 (A13)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 68 (A14)
  { INACTIVE, 0, DEFAULT_CH, INVALID },  // Pin 69 (A15)
#endif
};

void setup() {
  for (byte i = 0; i < NUM_PIN; i++) {
    if (s_sensorStates[i].noteNumber != INVALID) {
      pinMode(i, INPUT);
    }
  }
  
  Serial.begin(SERIAL_SPEED);
}

void loop() {
  for (byte i = 0; i < NUM_PIN; i++) {
    if (s_sensorStates[i].noteNumber != INVALID) {
      unsigned long currentTime = millis();
      
      if (currentTime - s_sensorStates[i].valueChangedTime >= ANTICHATTERING_WAIT) {
        byte currentValue = digitalRead(i);
        
        if ((s_sensorStates[i].value == INACTIVE) && (currentValue == ACTIVE)) {
          s_sensorStates[i].value = ACTIVE;
          s_sensorStates[i].valueChangedTime = currentTime;
          sendMIDINoteOn(s_sensorStates[i].midiCh, s_sensorStates[i].noteNumber);
        } else if ((s_sensorStates[i].value == ACTIVE) && (currentValue == INACTIVE)) {
          s_sensorStates[i].value = INACTIVE;
          s_sensorStates[i].valueChangedTime = currentTime;
          sendMIDINoteOff(s_sensorStates[i].midiCh, s_sensorStates[i].noteNumber);
        }
      }
    }
  }
}

void sendMIDINoteOn(byte midiCh, byte noteNumber) {
  Serial.write(0x90 | midiCh);
  Serial.write(noteNumber);
  Serial.write(NOTE_ON_VELOCITY);
  Serial.flush();
}

void sendMIDINoteOff(byte midiCh, byte noteNumber) {
  Serial.write(0x80 | midiCh);
  Serial.write(noteNumber);
  Serial.write(0);
  Serial.flush();
}
