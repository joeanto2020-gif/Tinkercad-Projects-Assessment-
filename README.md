# Tinkercad Projects Assessment

This repository contains a collection of Arduino and Tinkercad learning projects focused on basic electronic control and embedded programming concepts. Each project is designed to explore practical circuit behavior and improve understanding of microcontroller-based systems.

## Overview

These projects demonstrate foundational skills in:
- Digital input and output control
- Button debouncing
- LED state switching
- Timed LED behavior without blocking code execution
- Basic Arduino programming logic

## Included Projects

### 1. Debouncing Circuit with LED
The `debouncing_circuit_with_led1.ino` sketch demonstrates how to eliminate false state changes caused by mechanical button noise. It uses a pull-up resistor and a debounce timer to ensure the LED toggles only when a stable button press is detected.

### 2. Non-Blocking LED Control
The `non_blocking_led1.ino` sketch shows how to control two LEDs independently using `millis()` instead of `delay()`. This approach allows the program to handle multiple tasks at the same time without pausing the entire system, making it a common and efficient technique in embedded programming.

## Purpose

This repository serves as a record of learning and experimentation with Tinkercad, Arduino, and practical electronics. It is intended to showcase simple, real-world examples that build foundational knowledge in hardware simulation and coding.

## Tools Used
- Arduino IDE
- Tinkercad
- C++ for Arduino sketches

## License
This project is for educational purposes and is shared as part of personal learning and experimentation.
