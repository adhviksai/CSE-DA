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
