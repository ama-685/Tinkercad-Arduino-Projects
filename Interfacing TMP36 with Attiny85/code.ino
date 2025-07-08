// TMP35 Analog pin
const int tempPin = A1;

// RGB LED pins
const int redPin = 0;
const int greenPin = 1;
const int bluePin = 2;

// DIP switch pins
const int dip1 = 3;  // PB3
const int dip2 = 4;  // PB4

void setup() {
  pinMode(redPin, OUTPUT);
  pinMode(greenPin, OUTPUT);
  pinMode(bluePin, OUTPUT);

  pinMode(dip1, INPUT);
  pinMode(dip2, INPUT);
}

void loop() {
  int dipValue1 = digitalRead(dip1);
  int dipValue2 = digitalRead(dip2);

  int rawADC = analogRead(tempPin);
  float voltage = rawADC * (3.0 / 1023.0);  // for 3V coin cell
  float temperatureC = (voltage - 0.5) * 100.0;  // TMP35 logic

  // RGB LED logic: choose behavior based on DIP switch
  if (dipValue1 == HIGH && dipValue2 == LOW) {
    // Mode 1: Red if >30°C, else Green
    if (temperatureC > 30) {
      setColor(1, 0, 0); // Red
    } else {
      setColor(0, 1, 0); // Green
    }
  } else if (dipValue1 == LOW && dipValue2 == HIGH) {
    // Mode 2: Blue if <20°C
    if (temperatureC < 20) {
      setColor(0, 0, 1); // Blue
    } else {
      setColor(0, 1, 0); // Green
    }
  } else {
    // Default/unknown mode: White
    setColor(1, 1, 1);
  }

  delay(500);
}

void setColor(bool r, bool g, bool b) {
  digitalWrite(redPin, r);
  digitalWrite(greenPin, g);
  digitalWrite(bluePin, b);
}
