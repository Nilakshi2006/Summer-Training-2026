// We want to store the information of different vehicles. Create a class named Vehicle with two data member named mileage and price. Create its two subclasses

// *Car with data members to store ownership cost, warranty (by years), seating capacity and fuel type (diesel or petrol).
// *Bike with data members to store the number of cylinders, number of gears, cooling type(air, liquid or oil), wheel type(alloys or spokes) and fuel tank size(in inches)
// Make another two subclasses Audi and Ford of Car, each having a data member to store the model type. Next, make two subclasses Bajaj and TVS, each having a data member to store the make-type.
// Now, store and print the information of an Audi and a Ford car (i.e. model type, ownership cost, warranty, seating capacity, fuel type, mileage and price.) Do the same for a Bajaj and a TVS bike.
#include <iostream>
#include <string>
using namespace std;

// Base class Vehicle
class Vehicle {
protected:
    int mileage, price;
public:
    void setV() {
        cout << "Enter the mileage: ";
        cin >> mileage;
        cout << "Enter the price: ";
        cin >> price;
    }
    void showV() {
        cout << "Mileage: " << mileage << endl;
        cout << "Price: " << price << endl;
    }
};

// Subclass Car
class Car : public Vehicle {
protected:
    int ownershipCost, warranty, seatingCapacity;
    string fuelType;
public:
    void setC() {
        setV();
        cout << "Enter ownership cost: ";
        cin >> ownershipCost;
        cout << "Enter warranty (years): ";
        cin >> warranty;
        cout << "Enter seating capacity: ";
        cin >> seatingCapacity;
        cout << "Enter fuel type (diesel/petrol): ";
        cin >> fuelType;
    }
    void showC() {
        showV();
        cout << "Ownership Cost: " << ownershipCost << endl;
        cout << "Warranty: " << warranty << " years" << endl;
        cout << "Seating Capacity: " << seatingCapacity << endl;
        cout << "Fuel Type: " << fuelType << endl;
    }
};

// Subclass Bike
class Bike : public Vehicle {
protected:
    int cylinders, gears, fuelTank;
    string coolingType, wheelType;
public:
    void setB() {
        setV();
        cout << "Enter number of cylinders: ";
        cin >> cylinders;
        cout << "Enter number of gears: ";
        cin >> gears;
        cout << "Enter cooling type (air/liquid/oil): ";
        cin >> coolingType;
        cout << "Enter wheel type (alloys/spokes): ";
        cin >> wheelType;
        cout << "Enter fuel tank size (inches): ";
        cin >> fuelTank;
    }
    void showB() {
        showV();
        cout << "Cylinders: " << cylinders << endl;
        cout << "Gears: " << gears << endl;
        cout << "Cooling Type: " << coolingType << endl;
        cout << "Wheel Type: " << wheelType << endl;
        cout << "Fuel Tank Size: " << fuelTank << " inches" << endl;
    }
};

// Subclasses of Car
class Audi : public Car {
private:
    string modelType;
public:
    void setAudi() {
        setC();
        cout << "Enter model type: ";
        cin >> modelType;
    }
    void showAudi() {
        showC();
        cout << "Model Type: " << modelType << endl;
    }
};

class Ford : public Car {
private:
    string modelType;
public:
    void setFord() {
        setC();
        cout << "Enter model type: ";
        cin >> modelType;
    }
    void showFord() {
        showC();
        cout << "Model Type: " << modelType << endl;
    }
};

// Subclasses of Bike
class Bajaj : public Bike {
private:
    string makeType;
public:
    void setBajaj() {
        setB();
        cout << "Enter make type: ";
        cin >> makeType;
    }
    void showBajaj() {
        showB();
        cout << "Make Type: " << makeType << endl;
    }
};

class TVS : public Bike {
private:
    string makeType;
public:
    void setTVS() {
        setB();
        cout << "Enter make type: ";
        cin >> makeType;
    }
    void showTVS() {
        showB();
        cout << "Make Type: " << makeType << endl;
    }
};

int main() {
    Audi a;
    cout << "Enter Audi details:" << endl;
    a.setAudi();
    cout << "\nAudi details:" << endl;
    a.showAudi();

    Ford f;
    cout << "\nEnter Ford details:" << endl;
    f.setFord();
    cout << "\nFord details:" << endl;
    f.showFord();

    Bajaj b;
    cout << "\nEnter Bajaj details:" << endl;
    b.setBajaj();
    cout << "\nBajaj details:" << endl;
    b.showBajaj();

    TVS t;
    cout << "\nEnter TVS details:" << endl;
    t.setTVS();
    cout << "\nTVS details:" << endl;
    t.showTVS();

    return 0;
}