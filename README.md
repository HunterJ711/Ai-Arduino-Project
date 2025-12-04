# Smart Fan Timer

## Overview
This project is a temperature-aware, voice-controlled fan timer built with an Arduino Mega and Python. The Arduino continuously uses a DHT sensor to read and print the room temperature to the terminal while the system is idle. The temperature and the button are handled as separate functions: the DHT sensor is responsible for gathering temperature data, and the button is responsible for starting and ending an interaction.

Once the user presses the button, the Arduino turns on an indicator LED and stops printing temperature to the terminal. At that point, the Python script uses speech recognition to collect how long the user wants the fan to run for. The requested time is sent to the Arduino over serial, and the Arduino runs the fan (represented by an LED in the demo) for that duration. When the cycle is complete, the user presses the button again to turn the indicator LED off, and the system returns to its idle state where it resumes collecting and printing temperature data.


## Hardware Requirements

| Component              | Version/Details        | Notes                                            |
|------------------------|------------------------|--------------------------------------------------|
| Arduino Mega 2560      | Any revision           | Main microcontroller                             |
| DHT temperature sensor | DHT11 or DHT22         | Room temperature readings                        |
| Push button            | Momentary, NO          | Indicates user presence / starts interaction     |
| Indicator LED          | Any                    | Shows occupied/ready state                     |
| Fan LED (demo output)  | Any                    | Stands in for the fan                            |
| Resistors              | 220Ω or 330Ω           | For LEDs and button as needed                    |
| Breadboard             | Standard               | Prototyping                                      |
| Jumper wires           | Male-to-male           | Connections                                      |
| USB cable              | USB-A to USB-B         | Arduino to computer                              |

## Software Requirements

| Software          | Version  | Notes                                      |
|-------------------|----------|--------------------------------------------|
| Python            | 3.12.1   | Runs the speech recognition script         |
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

## Diagram
- DHT sensor connections (VCC, GND, data pin)  
- Button wiring  
- Indicator LED and fan LED pins and resistors  

## Demo Video
Demo video of the system:  
https://www.youtube.com/shorts/HcZ98Ubza5I

## License
This project uses the MIT License.
