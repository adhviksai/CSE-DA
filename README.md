# Underground water pathways blockage system during rains

# INTRODUCTION:

Every year several thousand people die in underwater pathways due to flooding and lack of proper system.

The following code is written in C++. The purpose of the code is to simulate a gate for an underground pathway. It explains how the gates are automatically closed when the water level crosses a certain limit and opens once the water level falls below. The code takes the input in feet and when the sensor detects the the rise of water level above 4 feet the gates close automatically.

## Concepts Used:
* OOPS
* Control Flow Statements(If/If-else)

## About The Code:
### Class GateController

The class "GateController" serves as the class of the code.

### Constructors:
The constructor `checkWaterLevel(double waterLevel)`

The Constructor `closeGates()` closes the gates of the pathway

The Constructor `openGates()` opens the gates of the pathway

### Main Function:
The main() function takes the input from the sensor which has to be set in the underground pathway. It consists of a while loop which keeps running until the sensor detects in the change of value going above or below the limit of 4 feet. Once a change is noticed it executes the class.
