# intelligent-temperature-controlled-fan-system-using-Arduino
This project implements an intelligent temperature-controlled fan system using Arduino. The system utilizes a TMP36 temperature sensor to continuously monitor ambient temperature, a servo motor functioning as a variable-speed fan, and an I2C LCD display for real-time data presentation. As temperatures rise above 0°C, the fan speed automatically adjusts, increasing proportionally with temperature to maintain optimal cooling. The servo motor's speed is controlled by mapping temperature readings to appropriate servo signals, ensuring smooth and responsive performance.
![image](https://github.com/nimageran/intelligent-temperature-controlled-fan-system-using-Arduino/assets/70598630/83116446-f117-4812-8b2c-a72d88465da0)

The system features an intuitive user interface via the LCD screen, displaying both the current temperature in Celsius and the corresponding fan speed. For temperatures at or below 0°C, the fan automatically shuts off to conserve energy. The project demonstrates practical applications of embedded systems in environmental control, showcasing the integration of sensor data acquisition, motor control, and user feedback. This repository contains the complete Arduino code, circuit diagrams, and documentation, providing a comprehensive resource for hobbyists and developers interested in temperature-responsive automation and embedded system design.
This project demonstrates an embedded system that uses a TMP36 temperature sensor to control a continuous rotation servo motor, simulating a fan. The system is designed to gradually increase the fan speed as the ambient temperature rises, with a clear and user-friendly display of both temperature and fan speed on a 16x2 LCD with a PCF8574 I2C interface. The system is programmed to ensure that the fan remains off at temperatures below 0°C, providing a practical and intuitive solution for temperature-based fan control in various applications such as climate control in homes, offices, or industrial settings.

The embedded system leverages the Arduino platform for its ease of use and flexibility. The continuous rotation servo motor is carefully controlled to only rotate clockwise, ensuring safe and predictable operation. The LCD display provides real-time feedback to the user, enhancing the system's usability and transparency. This project is a great example of integrating sensors, actuators, and displays in a cohesive embedded system, showcasing the potential for practical applications in temperature management and automated control systems.

Wiring Summary:
Components:

Arduino
TMP36 Temperature Sensor
Continuous Rotation Servo
16x2 LCD Display with PCF8574 I2C Interface
Jumper Wires
Connections:

TMP36 Temperature Sensor:

VCC (Power): Connect to the 5V pin on the Arduino.
GND (Ground): Connect to the GND pin on the Arduino.
VOUT (Analog Output): Connect to the A0 pin on the Arduino.
Continuous Rotation Servo:

Power Wire (Red): Connect to the 5V pin on the Arduino.
Ground Wire (Brown): Connect to the GND pin on the Arduino.
Signal Wire (Orange): Connect to the PWM pin 9 on the Arduino.
16x2 LCD Display with PCF8574 I2C Interface:

GND: Connect to the GND pin on the Arduino.
VCC: Connect to the 5V pin on the Arduino.
SDA: Connect to the A4 pin on the Arduino.
SCL: Connect to the A5 pin on the Arduino.
This wiring ensures that the TMP36 sensor correctly reads the temperature, the servo motor operates within the desired range, and the PCF8574 I2C LCD provides real-time feedback to the user.
