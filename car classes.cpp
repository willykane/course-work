#include <iostream>
#include <string>
using namespace std;


class Car {
    public:

    string brand;
    string model;
    float price;
    int milieage;


    void display() {
        cout << "Brand: " << brand << endl;
        cout << "Model: " << model << endl;
        cout << "Price: $" << price << endl;
        cout << "Milieage: " << milieage << " miles" << endl;
    }


    void drive(int distance) {
        milieage += distance;
        cout << "Car driven for " << distance << " miles" <<endl;
        cout << "Update milieage: " << milieage << " miles" <<endl;
    }
};

int main() {

    Car myCar;
    myCar.brand = "Toyota";
    myCar.model = "Corolla";
    myCar.price = 20000;
    myCar.milieage = 5000;

    myCar.display();


    myCar.drive(150);
    myCar.drive(300);

    return 0;
}
