/*code to show structures in c++

DATE:16 MARCH,2025
AUTHOR:WILLYCE OJWANG GWARA
 REG NO: BSE-05-0044/2024 */

#include <iostream>
#include <string>

using namespace std;

// Define the Patient structure
struct Patient {
    string name;
    int age;
    string diagnosis;
};

// Function to display patient details
void displayPatients(const Patient& p) {
    cout << "Patient Name: "<< p.name<< endl;
    cout << "Age: "<< p.age << endl;
    cout << "Diagnosis: "<< p.diagnosis<< endl;
    cout << endl;
}

int main() {
    // Create two patient records with hardcoded values
    Patient patient1 = {"willyce", 30, "malaria"};

    Patient patient2 = {"jermaine", 45, "tuberculosis"};

    // Display patient records
    cout<<"patient 1 records:"<<endl;
    displayPatients(patient1);

    cout << "Patient 2 records:" << endl;
    displayPatients(patient2);

    // Modify the program to allow user input
    Patient patient;
    cout << "Enter patient name: ";
    getline(cin, patient.name);

    cout << "Enter patient age: ";
    cin >> patient.age;
    cin.ignore(); // Clear input buffer

    cout << "Enter patient diagnosis: ";
    getline(cin, patient.diagnosis);

    // Display the patient record with user input
    cout << "Patient  Details (User Input):" << endl;
    displayPatients(patient);

    return 0;
}
