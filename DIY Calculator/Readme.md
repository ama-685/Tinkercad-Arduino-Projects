# 🧮 Arduino-Based Calculator Using 4x4 Keypad and 16x2 LCD Display

This is a fully functional **DIY Arduino calculator** built using a 4x4 matrix keypad and a 16x2 character LCD. It can handle basic arithmetic operations like addition, subtraction, multiplication, and division. The project combines hardware interfacing with logic design, making it an ideal hands-on introduction to **embedded systems and real-time interaction**.

---

## 🔩 Components Used

| Component            | Quantity |
|---------------------|----------|
| Arduino UNO (or compatible) | 1        |
| 4x4 Matrix Keypad   | 1        |
| 16x2 LCD Display (I2C or Parallel) | 1 |
| Breadboard          | 1        |
| Jumper Wires        | Several  |
| Potentiometer (if using parallel LCD) | 1 |

---

## ⚙️ How It Works

### 🔢 Input Mechanism
- The **user inputs numbers and operators** using the 4x4 keypad.
- Inputs are **displayed live** on the LCD screen as feedback.
- Once `=` is pressed, the result of the operation is calculated and displayed.

### ➕ Supported Operations
- **Addition (`+`)**
- **Subtraction (`-`)**
- **Multiplication (`*`)**
- **Division (`/`)**

---

## 📊 Workflow

1. Enter the **first operand** using the keypad.
2. Press any **operator key**.
3. Enter the **second operand**.
4. Press the `=` key to display the result on the LCD.
5. Use the `C` key to **clear/reset** the calculator.

---

## 🧠 Special Features

- 🧮 **Real-time Display**: Inputs appear on LCD as you type.
- ❌ **Invalid Input Handling**: Division by zero shows **"Invalid"** instead of crashing.
- 💾 **Result Memory**: Stores previous result for chaining operations (e.g., result becomes new first operand).
- 🔄 **Reset Option**: Pressing `C` clears everything instantly.

---

## 📚 What You’ll Learn

- Interfacing a **4x4 matrix keypad** with Arduino.
- Real-time display using **16x2 LCD (I2C or parallel)**.
- Implementing **input parsing and logic control** on embedded systems.
- Creating **state-based systems** for calculator operations.
- Writing clean and modular **Arduino C/C++** code.

---

## 🖼️ Visual Layout

*(You can include screenshots or Tinkercad diagrams here to show your wiring and working simulation.)*

---

## 🧪 Testing

| Test Case        | Expected Result         |
|------------------|--------------------------|
| `5 + 3 =`         | `8`                      |
| `9 / 0 =`         | `Invalid`               |
| `7 * 6 =`         | `42`                    |
| Press `C`         | Clears the display      |

---

## 📦 Future Improvements (Optional Ideas)

- Add **decimal support** for floating point calculations.
- Include **backspace (`←`)** functionality.
- Add **power (^)** and **modulo (%)** operations.
- Upgrade to a **TFT touch screen interface**.

---

## 🏷️ Hashtags

#Arduino #KeypadInterface #LCDProjects #ArduinoCalculator #EmbeddedC #ElectronicsFun #RealTimeDisplay #IOTBeginners #DIYTech #EngineeringProjects #SajeebProjects

---
## 💻 Tinkercad Simulation

🔗 [Click to open simulation in Tinkercad](https://www.tinkercad.com/things/dT3Ce6AZHEP-diy-calculator)

## 👤 Author

**Al Mouiz Abid**  
Student, Department of EEE, KUET  
Passionate about electronics, embedded systems, and DIY innovations.  
📅 Project Completed: June 2025

---

## 📜 License

This project is open-source and free to use for educational and personal purposes. Attribution is appreciated.
