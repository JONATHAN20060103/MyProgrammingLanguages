#include <iostream>
#include <string>
using namespace std;

class Vehicle {
public:
    string brand;
    string model;
    double cost;

    void TurnEngineOn() {
        cout << "The engine is now on." << endl;
    }

    void TurnEngineOff() {
        cout << "The engine is now off." << endl;
    }

    void SteerLeft() {
        cout << "The vehicle is now steering left." << endl;
    }

    void SteerRight() {
        cout << "The vehicle is now steering right." << endl;
    }
};

class Car : public Vehicle {
public:
    bool IsInsured;
    int EngineCapacity;

    void GearChange() {
        cout << "The gear has been changed." << endl;
    }

    void LockDoors() {
        cout << "The doors are now locked." << endl;
    }
};

int main () {
    Car BMW;
    BMW.brand = "BMW";
    BMW.model = "X5";
    BMW.cost = 50000.00;
    BMW.IsInsured = true;
    BMW.EngineCapacity = 3.0;

    Car Mercedes;
    Mercedes.brand = "Mercedes";
    Mercedes.model = "C-Class";
    Mercedes.cost = 40000.00;
    Mercedes.IsInsured = false;
    Mercedes.EngineCapacity = 2.0;

    Car Audi;
    Audi.brand = "Audi";
    Audi.model = "A4";
    Audi.cost = 45000.00;
    Audi.IsInsured = true;
    Audi.EngineCapacity = 2.5;

    cout << "BMW:" << BMW.brand << " " << BMW.model     << endl;
    cout << "Engine Capacity:" << BMW.EngineCapacity << "L" << endl;
    cout << "Cost: $" << BMW.cost << endl;

    BMW.TurnEngineOn();
    BMW.SteerLeft();
    BMW.GearChange();
    BMW.LockDoors();
    
    
    cout << "Mercedes:" << Mercedes.brand << " " << Mercedes.model << endl;
    cout << "Engine Capacity:" << Mercedes.EngineCapacity << "L" << endl;
    Mercedes.TurnEngineOn();
    Mercedes.SteerRight();
    Mercedes.GearChange();
    Mercedes.LockDoors();
   
   
    cout << "Audi:" << Audi.brand << " " << Audi.model << endl;
    cout << "Engine Capacity:" << Audi.EngineCapacity << "L" << endl;
    cout << "Cost: $" << Audi.cost << endl;
    Audi.TurnEngineOn();
    Audi.SteerLeft();
    Audi.GearChange();
    Audi.LockDoors();

    return 0;
}