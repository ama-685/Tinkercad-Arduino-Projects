#include <Keypad.h>

// Define keypad size
const byte ROWS = 4;
const byte COLS = 4;

// Define key map (4x4 layout)
char keys[ROWS][COLS] = {
  {'1','2','3','A'},
  {'4','5','6','B'},
  {'7','8','9','C'},
  {'*','0','#','D'}
};

// Connect keypad ROW0, ROW1, ROW2 and ROW3 to Arduino
byte rowPins[ROWS] = {11, 10, 9, 8}; 

// Connect keypad COL0, COL1, COL2 and COL3 to Arduino
byte colPins[COLS] = {7, 6, 5, 4}; 

// Create keypad object
Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

void setup() {
  Serial.begin(9600);
  Serial.println("Keypad Test Ready");
}

void loop() {
  char key = keypad.getKey();  // Get the key pressed

  if (key) {
    Serial.print("Pressed: ");
    Serial.println(key);
  }
}
