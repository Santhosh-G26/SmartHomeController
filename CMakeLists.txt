cmake_minimum_required(VERSION 3.10)

project(SmartHomeControl)


include_directories(include)


add_executable(
    SmartHome
    src/main.c
    src/app.c
    src/motor.c
    src/led.c
    src/gpio.c
    src/button.c
)