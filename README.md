# Smart Fan Timer

## Overview
This project is a temperature-aware, voice-controlled fan timer built with an Arduino Mega and Python. The Arduino uses a DHT sensor to monitor room temperature. When the temperature passes a threshold set in the code and a button is pressed, an indicator LED turns on to show that someone is in the room. At that point, a Python script uses speech recognition to ask how long the fan should run. The requested time is sent to the Arduino over serial, and the Arduino runs the fan (represented by an LED in the demo) for that duration. When the cycle is complete, the user presses the button again to turn off the indicator LED and return the system to temperature monitoring.

## Hardware Requirements

| Component              | Version/Details        | Notes                                            |
|------------------------|------------------------|--------------------------------------------------|
| Arduino Mega 2560      | Any revision           | Main microcontroller                             |
| DHT temperature sensor | DHT11 or DHT22         | Room temperature readings                        |
| Push button            | Momentary, NO          | Indicates user presence / starts interaction     |
| Indicator LED          | Any                    | Shows “occupied/ready” state                     |
| Fan LED (demo output)  | Any                    | Stands in for the fan                            |
| Resistors              | 220Ω or 330Ω           | For LEDs and button as needed                    |
| Breadboard             | Standard               | Prototyping                                      |
| Jumper wires           | Male-to-male           | Connections                                      |
| USB cable              | USB-A to USB-B         | Arduino to computer                              |

## Software Requirements

| Software          | Version  | Notes                                      |
|-------------------|----------|--------------------------------------------|
| Python            | 3.x      | Runs the speech recognition script         |
| SpeechRecognition | Latest   | Converts spoken input to text              |
| PyAudio (or backend) | Latest| Microphone input                            |
| pySerial          | Latest   | Serial communication with Arduino          |
| Arduino IDE       | Current  | Uploads Arduino code                       |
| DHT library       | Compatible with board | Used by Arduino sketch     |

## Hidden / Easily Overlooked Details
- Baud rate in Python and Arduino must match.
- The serial port name in the Python script must match the actual port.
- The DHT data pin must match the pin defined in the Arduino sketch.
- PyAudio can be difficult to install on some systems and may require extra system packages.
- The system assumes the indicator LED is on when the user is present; forgetting to turn it off means it won’t fully return to idle behavior.

## Diagram
- DHT sensor connections (VCC, GND, data pin)  
- Button wiring  
- Indicator LED and fan LED pins and resistors  

## Demo Video
Demo video of the system:  
https://www.youtube.com/shorts/HcZ98Ubza5I

## License
This project uses the MIT License.
