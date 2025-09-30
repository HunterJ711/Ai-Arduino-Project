# AI-Arduino-Project: Timer & Voice-Controlled Fan

## 🧠💨 Project Overview

This project is a smart home automation system that controls a fan using either a timer or voice commands. When a light is turned on (simulated using a button and LED), the system prompts the user to set a timer for how long the fan should run. This prompt will appear either on a scrolling screen or through a voice interface. Once the time is set, the fan turns on and will automatically shut off when the timer ends or if the light is turned off. This project is a hands-on exploration of automation, embedded systems, and basic AI interaction. The first version will use basic display input, and later versions will introduce AI voice recognition features.

---

## 👥 Team & Responsibilities

| Team Member | Task |
|-------------|------|
| Grace | Build button + LED circuit to simulate light |
| Amanda | Set up the fan and timer shutdown mechanism |
| Alexis | Create user prompt (voice or scrolling text) |
| Kristian | Integrate temperature sensor functionality |
| Hunter | Add AI element or Real Time Clock scheduling |

---

## 🧰 Required Hardware

- Arduino Mega 2560
- Button and LED (to simulate a light switch)
- Fan (DC or AC)
- Relay module (to control fan power)
- LCD or OLED display (to show prompts or timer)
- Microphone module or voice control module (for future versions)
- Temperature sensor (e.g., DHT11 or DHT22)
- Real Time Clock module (e.g., DS3231 — optional for scheduling)
- Jumper wires and breadboard
- Power supply (suitable for fan and Arduino)

---

## 💻 Required Software & Tools

- Arduino IDE
- Arduino libraries:
  - `LiquidCrystal` or `U8g2` for display
  - `DHT` for temperature sensor
  - `RTClib` for Real Time Clock module (if used)
- Optional external tools:
  - Hugging Face (for custom-trained voice models)
  - Google Teachable Machine (for simple voice command training)
  - Serial Monitor (for debugging and data display)

---

## 🤖 AI Integration Plan

The AI component will be added in later stages of the project:

### Phase 1: Basic Voice Command Control
- Integrate a basic voice module (e.g., Elechouse VR Module v3)
- Recognize fixed commands:  
  - “10 seconds”, “30 seconds”, “1 minute”

### Phase 2: Dynamic Voice Recognition with AI
- Use Hugging Face or Google Teachable Machine to train models
- Allow for more natural input like:  
  - “Set the fan for 5 minutes”  
  - “Turn the fan on for two minutes”

- Develop a way to pass voice commands to the Arduino through serial or Bluetooth communication

---

## 📌 Project Goals

- Build a functional fan system that can be controlled via user input
- Explore voice recognition and integrate it into a hardware project
- Learn how to schedule and automate real-world devices using AI or a real time clock
- Demonstrate collaboration and modular design through team roles

---

## 🔗 Notes

- This repository is public to showcase ongoing development
- Future commits will include circuit diagrams, code, AI model links, and build photos
- Each team member will commit their part of the work and merge it into the main project

