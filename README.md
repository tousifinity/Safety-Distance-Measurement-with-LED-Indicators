# Distance Measurement with LED Indicators

This project uses an ultrasonic distance sensor to measure the distance to an object and display the distance on an LCD. Based on the measured distance, different LEDs are triggered to indicate proximity. The system consists of three LEDs and an ultrasonic sensor, which work together to provide real-time feedback.



## Features
- **Ultrasonic Distance Measurement**: Measures the distance of an object in front of the sensor using ultrasonic waves.
- **LCD Display**: Displays the group name, lab number, and the current distance reading in centimeters.
- **LED Indicators**: There are three LEDs with different behaviors based on the distance:
  - **LED1**: Lights up when the distance is less than 5 cm.
  - **LED2**: Lights up when the distance is between 5 cm and 15 cm.
  - **LED3**: Lights up when the distance is greater than 15 cm.



## Hardware Requirements
- **Arduino Uno** 
- **Ultrasonic Sensor** (e.g., HC-SR04)
- **LiquidCrystal I2C Display** (16x2)
- **3 LEDs**


## Wiring Configuration
| Arduino Pin | Component Pin |
|-------------|---------------|
| Pin 10      | Trigger Pin (Ultrasonic) |
| Pin 11      | Echo Pin (Ultrasonic)    |
| Pin 2       | LED1 (Proximity < 5 cm)   |
| Pin 3       | LED2 (Proximity 5-15 cm)  |
| Pin 4       | LED3 (Proximity > 15 cm)  |



## Libraries Used
- **UltraDistSensor**: For controlling the ultrasonic sensor and reading distance.
- **Wire**: For I2C communication with the LCD.
- **LiquidCrystal_I2C**: To control the LCD via I2C interface.


## Setup Instructions
1. **Install Libraries**: Ensure that the `UltraDistSensor`, `Wire`, and `LiquidCrystal_I2C` libraries are installed in the Arduino IDE.
2. **Wiring the Circuit**: Connect the ultrasonic sensor's trigger and echo pins to the Arduino and wire up the three LEDs to digital pins 2, 3, and 4.
3. **Upload Code**: Upload the code to your Arduino using the Arduino IDE.
4. **View Output**:
   - The LCD will display the current distance.
   - The LEDs will change state based on the distance measured by the ultrasonic sensor.
