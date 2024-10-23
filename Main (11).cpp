#include <iostream>
#include <string>
using namespace std;

class Car {
public:
    // Properties
    string brand;
    string model;
    int year;

    // Function to display car info
    void displayInfo() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Year: " << year << endl;
    }
};

int main() {
    // Create an object for car1
    Car car1;
    car1.brand = "Tesla";
    car1.model = "Model S";
    car1.year = 2022;

    // Create an object for car2
    Car car2;
    car2.brand = "range rover";
    car2.model = "range rover suv";
    car2.year = 2020;

    // Create an object for car3
    Car car3;
    car3.brand = "Toyota";
    car3.model = "Supra";
    car3.year = 2019;

    // Print attribute values
    cout << "Car1 Information: " << endl;
    car1.displayInfo();
    cout << endl;

    cout << "Car2 Information: " << endl;
    car2.displayInfo();
    cout << endl;

    cout << "Car3 Information: " << endl;
    car3.displayInfo();
    cout << endl;

    return 0;
}
