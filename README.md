
# Arduino-GPS-Data-Logger


The Arduino GPS Data Logger is a project that interfaces with a GPS module to extract GPS data such as latitude, longitude, altitude, speed, and date. It uses the TinyGPS++ library to parse NMEA GPS data and provides real-time GPS information.




## Features

- Real-time GPS data retrieval and display
- Latitude and longitude with 6 decimal places precision
- Altitude in meters
- Speed in miles per hour (mph)
- Date in the format DDMMYY

## Hardware Requirements
To use the Arduino GPS Data Logger, you will need the following hardware components:

- Arduino board (e.g., Arduino Uno, Arduino Mega, various other versions)( I've used ESP32)
- GPS module (supporting NMEA data output)
- Wires and a breadboard (for connecting the GPS module)
- USB cable (for Arduino board power and communication)
## Installation
To set up the Arduino GPS Data Logger project, follow these steps:

1. Connect the GPS module to the Arduino board accordingly.
2. Open the Arduino IDE and install the required libraries (if not already installed):
   - `TinyGPS++`: You can install this library from the Arduino Library Manager.
3. Clone this repository to your local machine using Git or download it as a ZIP file.
4. Open the `Arduino-GPS-Data-Logger.ino` file in the Arduino IDE.
5. Connect your Arduino board to your computer and upload the code to the board.
6. Open the Arduino Serial Monitor at a baud rate of 115200 to view the GPS data.
####################################################

This README file provides an overview of the Arduino GPS Data Logger project and how to set it up and use it. Customize it as needed to best represent your project.    
## Library required


HardwareSerial Library
- https://github.com/espressif/arduino-esp32/blob/master/cores/esp32/HardwareSerial.h

TinyGPSplus Library

- https://github.com/mikalhart/TinyGPSPlus/blob/master/src/TinyGPS%2B%2B.h
