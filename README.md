# embedded_project_template
An easy project template for building and flashing firmware onto ATMega328p. Used in the cpp_for_developers course.

## main.cpp
This file contains the entrypoint for our program. Here we find the:
* **Declaration** - Declaring global variables
* **SETUP** - Initializing your drivers
* **SUPER-LOOP** - The repeated tasks performed while the MCU is powered on

## Makefile
This file contains all the instructions for compiling your program. For now it is set for running on ATMega328p.

You might have to configure the paths for the following variables in the Makefile:
```makefile
CC=C:\avr\bin\avr-g++
LD=C:\avr\bin\avr-ld
OBJCOPY="C:\avr\bin\avr-objcopy"
OBJDUMP="C:\avr\bin\avr-objdump"
AVRSIZE="C:\avr\bin\avr-size"
OBJISP="C:\avr\bin\avrdude"
```

## millis
Courtesy of Zak Kemble - a library to keep track of time in the AVR mcu space.