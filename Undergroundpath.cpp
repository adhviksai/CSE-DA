#include<iostream>
class GateController {  //Creating the main class
private: //private members
    bool opengate;
    double waterLevelThreshold;

public: //public members
    GateController(double threshold) : opengate(true), waterLevelThreshold(threshold) {
        
        void checkWaterLevel(double waterLevel) {
        if (waterLevel >= waterLevelThreshold && opengate) {
            closeGates();
        } else if (waterLevel < waterLevelThreshold && !opengate) {
            openGates();
        }
    }

private: //private members
    void closeGates() {  //function for closing the gates
        opengate = false;
        cout<< "Closing the gates of the underground walkway."<<endl;
    }

    void openGates() {  //function for opening the gates
        opengate = true;
        cout<<"Opening the gates of the underground walkway."<<endl;
    }
};

int main() {  //main function
    double waterLevel;
    double threshold;

    threshold=4;

    GateController gateController(threshold);

    while (true) {
        cout<<"Water level from the sensor: ";
        cin>>waterLevel;

        gateController.checkWaterLevel(waterLevel);
    }

    return 0;
}
