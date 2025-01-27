# Arduino Projects Repository

This repository contains various Arduino projects, each designed to help with learning and experimenting with different electronic components and programming techniques. Each project is contained in its own folder, and you can find specific details for each project below.

## Table of Contents
1. [RGB Color Controller with Button Inputs](#rgb-color-controller-with-button-inputs)
2. [Project 2 - Future Project Name](#project-2)
3. [Project 3 - Future Project Name](#project-3)
4. [How to Run the Projects](#how-to-run-the-projects)
5. [License](#license)

---

## RGB Color Controller with Button Inputs

### Description
This project demonstrates how to control the color of an RGB LED using two buttons. Button A decreases the value of one color while increasing the next, and Button B does the opposite by increasing the current color and decreasing the next. The RGB values are printed to the Serial Monitor to keep track of the changes.

### Features:
- Press Button A to decrease one color value and increase the next.
- Press Button B to increase one color value and decrease the next.
- Current RGB values are printed to the Serial Monitor.

### Hardware Requirements:
- 1 RGB LED (Common Cathode or Common Anode depending on your configuration)
  - Connect the Blue, Green, and Red pins to Arduino pins 3, 5, and 6 respectively.
- 2 push buttons connected to Arduino pins 8 (Button B) and 9 (Button A).
- Optional: Resistors for the buttons to avoid floating inputs.

### Circuit Diagram
- **RGB LED Pinout:**
  - Pin 3: Blue
  - Pin 5: Green
  - Pin 6: Red
- **Button Pinout:**
  - Pin 9: Button A
  - Pin 8: Button B

### Code Overview
- **Pins Defined:**
  - The RGB LED is connected to pins 3 (Blue), 5 (Green), and 6 (Red).
  - Two buttons are connected to pins 8 and 9.
  
- **Button A:**
  - When Button A is pressed, it decreases the current color value and increases the next color value.
  
- **Button B:**
  - When Button B is pressed, it increases the current color value and decreases the next color value.
  
- **Serial Output:**
  - The current RGB values are printed to the Serial Monitor for tracking purposes.
  
### How It Works:
1. Initially, the RGB LED is set to red (`255, 0, 0`).
2. Pressing **Button A** will cycle through the colors, transitioning from red to green to blue and back to red.
3. Pressing **Button B** does the opposite by cycling through the colors in reverse.
4. The RGB values are updated and printed to the Serial Monitor for visibility.

### Code Explanation:
- The code uses `analogWrite()` to control the brightness of the RGB LED.
- The program uses two flags (`r`, `g`, `b`) to track which color is currently active.
- The functions `changeValue()` and `printRGB()` are used to modify and display the current RGB values.

---

## Project 2

**Description:**  


---

## Project 3

**Description:**  


---

## How to Run the Projects

### Requirements:
- An Arduino board (e.g., Arduino Uno, Mega, Nano, etc.)
- Arduino IDE installed on your computer
- RGB LED and buttons (as required by individual projects)

### Steps:
1. Clone the repository to your local machine:
    ```bash
    git clone https://github.com/yourusername/arduino-projects.git
    ```

2. Open the desired project folder in the Arduino IDE.
3. Upload the code to your Arduino board.
4. Connect the required hardware (LEDs, buttons, sensors, etc.) according to the circuit diagram provided in the respective project sections.
5. Open the Serial Monitor (Tools > Serial Monitor) to view the output.

---

## License

This repository is licensed under the MIT License - see the [LICENSE](LICENSE) file for details.

---
