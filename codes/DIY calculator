#include <Keypad.h>
#include <LiquidCrystal.h>

// Initialize LCD (RS, E, D4, D5, D6, D7)
LiquidCrystal lcd(13, 12, 11, 10, 9, 8);

// Define keypad
const byte ROWS = 4;
const byte COLS = 4;

char keys[ROWS][COLS] = {
  {'1','2','3','+'},
  {'4','5','6','-'},
  {'7','8','9','*'},
  {'C','0','=','/'}
};

byte rowPins[ROWS] = {7, 6, 5, 4}; // Connect to the row pinouts of the keypad
byte colPins[COLS] = {3, 2, 1, 0}; // Connect to the column pinouts of the keypad

Keypad keypad = Keypad(makeKeymap(keys), rowPins, colPins, ROWS, COLS);

// Variables
String input = "";
float num1 = 0;
float num2 = 0;
char op = '\0';
bool calculating = false;

void setup() {
  lcd.begin(16, 2);
  lcd.print("Arduino Calc");
  delay(2000);
  lcd.clear();
}

void loop() {
  char key = keypad.getKey();
  
  if (key) {
    if (key >= '0' && key <= '9') {
      input += key;
      lcd.print(key);
    } else if (key == '+' || key == '-' || key == '*' || key == '/') {
      if (!calculating && input != "") {
        num1 = input.toFloat();
        op = key;
        input = "";
        lcd.print(key);
        calculating = true;
      }
    } else if (key == '=') {
      if (calculating && input != "") {
        num2 = input.toFloat();
        float result = calculate(num1, num2, op);
        lcd.setCursor(0, 1);
        lcd.print("= ");
        lcd.print(result);
        delay(3000);
        lcd.clear();
        input = "";
        calculating = false;
        op = '\0';
      }
    } else if (key == 'C') {
      input = "";
      num1 = num2 = 0;
      op = '\0';
      calculating = false;
      lcd.clear();
    }
  }
}

float calculate(float a, float b, char oper) {
  switch (oper) {
    case '+': return a + b;
    case '-': return a - b;
    case '*': return a * b;
    case '/': return b != 0 ? a / b : 0; // Avoid division by zero
    default: return 0;
  }
}
