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

# Code:

#include<iostream>
class GateController {
private:
    bool opengate;
    double waterLevelThreshold;

public:
    GateController(double threshold) : opengate(true), waterLevelThreshold(threshold) {
        
        void checkWaterLevel(double waterLevel) {
        if (waterLevel > waterLevelThreshold && opengate) {
            closeGates();
        } else if (waterLevel <= waterLevelThreshold && !opengate) {
            openGates();
        }
    }

private:
    void closeGates() {
        opengate = false;
        cout<< "Closing the gates of the underground walkway."<<endl;
    }

    void openGates() {
        opengate = true;
        cout<<"Opening the gates of the underground walkway."<<endl;
    }
};

int main() {
    double waterLevel;
    double threshold;

    threshold=4;

    GateController gateController(threshold);

    while (true) {
        cout<<"Enter the current water level: ";
        cin>>waterLevel;

        gateController.checkWaterLevel(waterLevel);
    }

    return 0;
}
