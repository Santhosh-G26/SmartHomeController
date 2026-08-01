SmartHome Controller

Features:
- LED driver
- Button driver
- GPIO abstraction

Architecture:

Application Layer
        |
Driver Layer
        |
Hardware Abstraction Layer

Build:
gcc src/*.c -I include -o main