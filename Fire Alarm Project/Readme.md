# Temperature & Gas Monitoring System using Arduino (TinkerCAD)

This project uses an Arduino UNO to monitor **temperature** and **gas levels** using a **TMP36 temperature sensor** and an **analog gas sensor**. If the temperature rises above 80°C, an LED turns ON. If gas levels are high, a buzzer sounds. This is built and tested in **TinkerCAD**.

---

## 🧰 Components Used

- Arduino UNO  
- TMP36 Temperature Sensor  
- MQ-2 (or similar) Gas Sensor  
- 1 × LED  
- 2 × 220Ω Resistors *(one for LED, one for gas sensor output if needed)*  
- 1 × Active Buzzer  
- Jumper Wires  
- Breadboard  
- TinkerCAD Circuit Simulator

---

## Tinkercad project link-https://www.tinkercad.com/things/f7bFEX2bHql-fire-alarm-project

## 👨‍💻 Made by  
**Al Mouiz Abid**

---

## 🎯 Project Overview

- 🔥 Measures **temperature** from TMP36 via analog pin A1  
- 💨 Reads **gas levels** from analog sensor on pin A0  
- 💡 Turns ON **LED** if temperature ≥ 80°C  
- 🔊 Sounds **buzzer** if gas level ≥ 400  
- 📟 Displays both values on Serial Monitor every second

---

## ⚙️ Circuit Connections

| Component        | Arduino Pin        |
|------------------|--------------------|
| TMP36 OUT        | A1 (Analog Input)  |
| Gas Sensor OUT   | A0 (Analog Input)  |
| LED (+)          | Pin 13 (Digital)   |
| LED (–)          | GND via 220Ω Resistor |
| Buzzer (+)       | Pin 9 (Digital)    |
| Buzzer (–)       | GND                |
| TMP36 & Gas Sensor Power | 5V and GND  |
| *(Optional)* Gas Sensor Output → A0 via 220Ω (if needed for protection) |

---

## 🔍 How It Works

- TMP36 outputs analog voltage:  
  → `Temp (°C) = ((analogRead × 5.0 × 1000.0) / 1023.0 − 500) / 10`

- Gas sensor outputs an analog signal depending on gas concentration.

- LED indicates **high temperature**  
- Buzzer signals **high gas concentration**

---

## 📌 Features

- Dual sensor system  
- Audio + visual alerts  
- Can be simulated 100% in **TinkerCAD**  
- Adjustable thresholds

---

## 🧠 Learning Outcomes

- Reading analog sensors in Arduino  
- Converting voltage to temperature  
- Using conditions to trigger outputs  
- Working with multiple sensor types  
- Building emergency alert systems

---

## 🔗 Tools Used

- Arduino UNO  
- TinkerCAD Circuit Designer  
- Arduino IDE (for code)
