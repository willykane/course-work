/* simple code to calculate volume of a cylinder 

AUTHOR:WILLYCE OJWANG GWARA
REG NO: BSE-05-0044/2024 */



#include <iostream>
#include <cmath>
using namespace std;

/*function to calculate volume of the cylinder */

double calculateCylinderVolume(double radius, double height) {

    double volume = M_PI * pow(radius, 2) * height;
    return volume;
}
int main() {
    double radius, height;
    
//prompts the user to input radius & height of the cylinder //
    
    cout << "Enter the radius of the cylinder: ";
    cin >> radius;
    cout << "Enter the height of the cylinder: ";
    cin >> height;

    // calculate & display's volume //
    
    double volume = calculateCylinderVolume(radius, height);
    cout << "The volume of the cylinder is: " << volume << endl;
    return 0;
}
