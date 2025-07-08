const int gasSensorPin = A1;
const int tempSensorPin = A0;
const int ledPin = 13;
const int buzzerPin = 9;

const int gasThreshold = 300;     // Tune as needed
const float tempThreshold = 50.0; // Celsius

void setup() {
  pinMode(ledPin, OUTPUT);
  pinMode(buzzerPin, OUTPUT);
  Serial.begin(9600);
}

void loop() {
  int gasValue = analogRead(gasSensorPin);
  int tempRaw = analogRead(tempSensorPin);
  float temperature = (tempRaw * 5.0 * 100.0) / 1024.0; // For LM35

  Serial.print("Gas: ");
  Serial.print(gasValue);
  Serial.print(" | Temp: ");
  Serial.println(temperature);

  if (gasValue > gasThreshold || temperature > tempThreshold) {
    digitalWrite(ledPin, HIGH);
    tone(buzzerPin, 1000);
  } else {
    digitalWrite(ledPin, LOW);
    noTone(buzzerPin);
  }

  delay(500);
}
