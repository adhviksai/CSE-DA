# Underground water pathways blockage system during rains

#include <iostream>

class GateController {
private:
    bool gatesOpen;
    double waterLevelThreshold;

public:
    GateController(double threshold) : gatesOpen(true), waterLevelThreshold(threshold) {}

    void checkWaterLevel(double waterLevel) {
        if (waterLevel > waterLevelThreshold && gatesOpen) {
            closeGates();
        } else if (waterLevel <= waterLevelThreshold && !gatesOpen) {
            openGates();
        }
    }

private:
    void closeGates() {
        gatesOpen = false;
        cout<< "Closing the gates of the underground walkway."<<endl;
    }

    void openGates() {
        gatesOpen = true;
        cout<<"Opening the gates of the underground walkway."<<endl;
    }
};

int main() {
    double waterLevel;
    double threshold;

    threshold=6;

    GateController gateController(threshold);

    while (true) {
        cout<<"Enter the current water level: ";
        cin>>waterLevel;

        gateController.checkWaterLevel(waterLevel);
    }

    return 0;
}
