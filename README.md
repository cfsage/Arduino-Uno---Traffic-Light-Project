# Arduino Traffic Light Simulation

This project simulates a **traffic light system** using an Arduino board and three LEDs (Red, Yellow, Green). The program controls the sequence and timing of lights similar to a real-world traffic signal.

## Features

* **Red Light (Stop):** Turns on for 6 seconds.
* **Yellow Light (Ready):** Turns on for 3 seconds after red.
* **Green Light (Go):** Turns on for 6 seconds.
* **Green Light Blinking:** After the green phase, it blinks three times (0.5s on, 0.5s off) before switching back to red.

## Hardware Requirements

* Arduino Uno (or compatible board)
* 1 × Red LED
* 1 × Yellow LED
* 1 × Green LED
* 3 × 220Ω resistors
* Breadboard & jumper wires

## Circuit Setup

* Red LED → Pin 8 (with resistor to GND)
* Yellow LED → Pin 10 (with resistor to GND)
* Green LED → Pin 12 (with resistor to GND)

## How It Works

1. The **red LED** turns on for 6 seconds, signaling stop.
2. The **yellow LED** turns on for 3 seconds, preparing vehicles to move.
3. The **green LED** turns on for 6 seconds, allowing vehicles to pass.
4. The green LED then **blinks three times** to warn that it’s about to switch back to red.
5. The cycle repeats infinitely.

## Running the Code

1. Open the `.ino` file in the **Arduino IDE**.
2. Connect your Arduino board via USB.
3. Select the correct **board** and **port** from the IDE.
4. Upload the sketch to your Arduino.

---

With this setup, you’ll have a **mini traffic light system** that mimics real-world traffic signals.

---
