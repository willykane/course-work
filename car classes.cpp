/*

AUTHOR:WILLYCE OJWANG GWARA 
 REG NO: BSE-05-0044/2024 */

#include <iostream>
#include <string>
using namespace std;

// define car class//
class Car {
    public:
//attributes of the car class//
    string brand;
    string model;
    float price;
    int mileage;

/*method to display car information*/
    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
        cout << "Mileage: " << mileage << " miles" << endl;
    }

//method to update mileage after driving the car//
    void drive(int distance) {
        milieage += distance;
        cout << "Car driven for " << distance << " miles" <<endl;
        cout << "Update mileage: " << mileage << " miles" <<endl;
    }
};

int main() {

    Car myCar;

    //attributes of the car//
    
    myCar.brand = "Toyota";
    myCar.model = "Corolla";
    myCar.price = 20000;
    myCar.milieage = 5000;

    myCar.display();

//drive car and update mileage//
    
    myCar.drive(150);
    myCar.drive(300);

    return 0;
}
