///////////////////////////////////////////////////////////////
// Main Boards for Sound Pond (Sketch for Arduino Mega 2560) //
///////////////////////////////////////////////////////////////

#define SERIAL_SPEED        (31250)
//#define SERIAL_SPEED        (38400)

#define NOTE_ON_VELOCITY    (100)
#define DEFAULT_CH          (0)     // default MIDI channel
#define ANTICHATTERING_WAIT (100)   // milliseconds
#define ACTIVE              (LOW)
#define DISTANCE_SENS_WAIT  (60)    // milliseconds



#define INACTIVE            ((ACTIVE == HIGH) ? LOW : HIGH)
#define INVALID             (0xFF)
#define NUM_PIN             (54 + 16) // digital pins + analog pins
#define LED_L_PIN           (13)
#define D_SENSOR_TRIG_PIN   (52)
#define D_SENSOR_ECHO_PIN   (53)

typedef struct {
  byte          value;            // HIGH or LOW
  unsigned long valueChangedTime; // milliseconds
  byte          midiCh;           // 0 to 15
  byte          noteNumber;       // 0 to 127 (INVALID if there is no sensor)
} SENSOR_STATE;

SENSOR_STATE s_sensorStates[NUM_PIN] = {
  { INACTIVE, 0, DEFAULT_CH, INVALID      },  // Pin 0 (RX0, reserved)
  { INACTIVE, 0, DEFAULT_CH, INVALID      },  // Pin 1 (TX0, reserved)
  { INACTIVE, 0, DEFAULT_CH, 54 /* F#3 */ },  // Pin 2
  { INACTIVE, 0, DEFAULT_CH, 70 /* A#4 */ },  // Pin 3
  { INACTIVE, 0, DEFAULT_CH, 73 /* C#5 */ },  // Pin 4
  { INACTIVE, 0, DEFAULT_CH, 71 /* B4  */ },  // Pin 5
  { INACTIVE, 0, DEFAULT_CH, 69 /* A4  */ },  // Pin 6
  { INACTIVE, 0, DEFAULT_CH, 66 /* F#4 */ },  // Pin 7
  { INACTIVE, 0, DEFAULT_CH, 65 /* F4  */ },  // Pin 8
  { INACTIVE, 0, DEFAULT_CH, 67 /* G4  */ },  // Pin 9
  { INACTIVE, 0, DEFAULT_CH, 64 /* E4  */ },  // Pin 10
  { INACTIVE, 0, DEFAULT_CH, 62 /* D4  */ },  // Pin 11
  { INACTIVE, 0, DEFAULT_CH, 63 /* D#4 */ },  // Pin 12
  { INACTIVE, 0, DEFAULT_CH, INVALID      },  // Pin 13 (LED L, reserved)
  { INACTIVE, 0, DEFAULT_CH, 68 /* G#4 */ },  // Pin 14
  { INACTIVE, 0, DEFAULT_CH, 74 /* D5  */ },  // Pin 15
  { INACTIVE, 0, DEFAULT_CH, 78 /* F#5 */ },  // Pin 16
  { INACTIVE, 0, DEFAULT_CH, 76 /* E5  */ },  // Pin 17
  { INACTIVE, 0, DEFAULT_CH, 72 /* C5  */ },  // Pin 18
  { INACTIVE, 0, DEFAULT_CH, 79 /* G5  */ },  // Pin 19
  { INACTIVE, 0, DEFAULT_CH, 83 /* B5  */ },  // Pin 20
  { INACTIVE, 0, DEFAULT_CH, 75 /* D#5 */ },  // Pin 21
  { INACTIVE, 0, DEFAULT_CH, 80 /* G#5 */ },  // Pin 22
  { INACTIVE, 0, DEFAULT_CH, 37 /* C#2 */ },  // Pin 23
  { INACTIVE, 0, DEFAULT_CH, 77 /* F5  */ },  // Pin 24
  { INACTIVE, 0, DEFAULT_CH, 82 /* A#5 */ },  // Pin 25
  { INACTIVE, 0, DEFAULT_CH, 36 /* C2  */ },  // Pin 26
  { INACTIVE, 0, DEFAULT_CH, 81 /* A5  */ },  // Pin 27
  { INACTIVE, 0, DEFAULT_CH, 38 /* D2  */ },  // Pin 28
  { INACTIVE, 0, DEFAULT_CH, 42 /* F#2 */ },  // Pin 29
  { INACTIVE, 0, DEFAULT_CH, 45 /* A2  */ },  // Pin 30
  { INACTIVE, 0, DEFAULT_CH, 40 /* E2  */ },  // Pin 31
  { INACTIVE, 0, DEFAULT_CH, 43 /* G2  */ },  // Pin 32
  { INACTIVE, 0, DEFAULT_CH, 39 /* D#2 */ },  // Pin 33
  { INACTIVE, 0, DEFAULT_CH, 41 /* F2  */ },  // Pin 34
  { INACTIVE, 0, DEFAULT_CH, 44 /* G#2 */ },  // Pin 35
  { INACTIVE, 0, DEFAULT_CH, 46 /* A#2 */ },  // Pin 36
  { INACTIVE, 0, DEFAULT_CH, 47 /* B2  */ },  // Pin 37
  { INACTIVE, 0, DEFAULT_CH, 49 /* C#3 */ },  // Pin 38
  { INACTIVE, 0, DEFAULT_CH, 48 /* C3  */ },  // Pin 39
  { INACTIVE, 0, DEFAULT_CH, 51 /* D#3 */ },  // Pin 40
  { INACTIVE, 0, DEFAULT_CH, 52 /* E3  */ },  // Pin 41
  { INACTIVE, 0, DEFAULT_CH, 50 /* D3  */ },  // Pin 42
  { INACTIVE, 0, DEFAULT_CH, 53 /* F3  */ },  // Pin 43
  { INACTIVE, 0, DEFAULT_CH, 56 /* G#3 */ },  // Pin 44
  { INACTIVE, 0, DEFAULT_CH, 55 /* G3  */ },  // Pin 45
  { INACTIVE, 0, DEFAULT_CH, 57 /* A3  */ },  // Pin 46
  { INACTIVE, 0, DEFAULT_CH, 58 /* A#3 */ },  // Pin 47
  { INACTIVE, 0, DEFAULT_CH, 59 /* B3  */ },  // Pin 48
  { INACTIVE, 0, DEFAULT_CH, 61 /* C#4 */ },  // Pin 49
  { INACTIVE, 0, DEFAULT_CH, 60 /* C4  */ },  // Pin 50
  { INACTIVE, 0, DEFAULT_CH, INVALID      },  // Pin 51
  { INACTIVE, 0, DEFAULT_CH, INVALID      },  // Pin 52 (Distance Sensor Trig, reserved)
  { INACTIVE, 0, DEFAULT_CH, INVALID      },  // Pin 53 (Distance Sensor Echo, reserved)
  { INACTIVE, 0, DEFAULT_CH, INVALID      },  // Pin 54 (A0)
  { INACTIVE, 0, DEFAULT_CH, INVALID      },  // Pin 55 (A1)
  { INACTIVE, 0, DEFAULT_CH, INVALID      },  // Pin 56 (A2)
  { INACTIVE, 0, DEFAULT_CH, INVALID      },  // Pin 57 (A3)
  { INACTIVE, 0, DEFAULT_CH, INVALID      },  // Pin 58 (A4)
  { INACTIVE, 0, DEFAULT_CH, INVALID      },  // Pin 59 (A5)
  { INACTIVE, 0, DEFAULT_CH, INVALID      },  // Pin 60 (A6)
  { INACTIVE, 0, DEFAULT_CH, INVALID      },  // Pin 61 (A7)
  { INACTIVE, 0, DEFAULT_CH, INVALID      },  // Pin 62 (A8)
  { INACTIVE, 0, DEFAULT_CH, INVALID      },  // Pin 63 (A9)
  { INACTIVE, 0, DEFAULT_CH, INVALID      },  // Pin 64 (A10)
  { INACTIVE, 0, DEFAULT_CH, INVALID      },  // Pin 65 (A11)
  { INACTIVE, 0, DEFAULT_CH, INVALID      },  // Pin 66 (A12)
  { INACTIVE, 0, DEFAULT_CH, INVALID      },  // Pin 67 (A13)
  { INACTIVE, 0, DEFAULT_CH, INVALID      },  // Pin 68 (A14)
  { INACTIVE, 0, DEFAULT_CH, INVALID      },  // Pin 69 (A15)
};

unsigned long s_distanceSensedTime = 0; // milliseconds
byte s_ccMidiCh = 0;
byte s_ccValue = 0;

void setup() {
  for (byte i = 0; i < NUM_PIN; i++) {
    if (s_sensorStates[i].noteNumber != INVALID) {
      pinMode(i, INPUT);
    }
  }

  Serial.begin(SERIAL_SPEED);

  {
    pinMode(D_SENSOR_TRIG_PIN, OUTPUT);
    digitalWrite(D_SENSOR_TRIG_PIN, LOW);
    
    pinMode(D_SENSOR_ECHO_PIN, INPUT);
    
    sendMIDIConstolChange(s_ccMidiCh, s_ccValue);
  }
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

  {
    if (millis() - s_distanceSensedTime >= DISTANCE_SENS_WAIT) {
      digitalWrite(D_SENSOR_TRIG_PIN, HIGH);
      delayMicroseconds(10);
      digitalWrite(D_SENSOR_TRIG_PIN, LOW);
      unsigned long pulseCount = pulseIn(D_SENSOR_ECHO_PIN, HIGH, 5 * 1000);
      //Serial.println(pulseCount);
      s_distanceSensedTime = millis();
      
      byte newValue = 0;
      byte denominator = 16;
      unsigned int shortLength = 320;
      if (pulseCount == 0) {
        newValue = 0;
      } else if (pulseCount <= shortLength) {
        newValue = 127;
      } else if (pulseCount <= shortLength + (127 * denominator)) {
        newValue = ((shortLength + (127 * denominator)) - pulseCount) / denominator;
      }
      
      if (s_ccValue != newValue) {
        s_ccValue = newValue;
        sendMIDIConstolChange(s_ccMidiCh, s_ccValue);
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

void sendMIDIConstolChange(byte midiCh, byte value) {
  Serial.write(0xE0 | midiCh);
  Serial.write(0x00);
  Serial.write((value >> 1) + 0x40);
  Serial.flush();
}
