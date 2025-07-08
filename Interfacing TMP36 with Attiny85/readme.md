# TMP35 + ATtiny85 RGB Temperature Monitor

Created by **Al Mouiz Abid**

This project interfaces a **TMP35 temperature sensor** with an **ATtiny85 microcontroller** to visually indicate temperature ranges using an **RGB LED**. A **DIP switch** allows switching between different display modes. Powered by a **coin cell battery**, the setup is ideal for compact, low-power temperature-based indicators.

## 🔧 Components Used

- ATtiny85 microcontroller
- TMP35 temperature sensor
- RGB LED (common cathode)
- DIP switch (2 or 3-position)
- 3x 10kΩ resistors (pull-downs for DIP switch)
- 3x 220Ω resistors (for RGB LED)
- Coin cell battery (3V)
- Breadboard and jumper wires

## ⚙️ Circuit Description

### TMP35:
- **VCC** → Coin cell +
- **GND** → Coin cell –
- **VOUT** → ATtiny85 **A1** (physical pin 7)

### RGB LED:
- Red → 220Ω → PB0 (pin 5)
- Green → 220Ω → PB1 (pin 6)
- Blue → 220Ω → PB2 (pin 7)
- Common cathode → GND

### DIP Switch:
- Switch 1 → PB3 (pin 2) with 10kΩ pull-down
- Switch 2 → PB4 (pin 3) with 10kΩ pull-down

> PB5 (pin 1) is reset and should not be used for regular I/O unless reconfigured via fuses.

### Power:
- Coin cell + → VCC (pin 8)
- Coin cell – → GND (pin 4)

---

## 🧠 Logic & Modes

The ATtiny85 reads the TMP35 output to calculate temperature in °C. The RGB LED changes color based on the current temperature and DIP switch setting.

## Tinkercad simulation link-(https://www.tinkercad.com/things/2bJG6yvmA93-ineterfacing-tmp35-with-attiny85)

