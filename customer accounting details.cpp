/*code to show structures in c++  (customers accounting details)

DATE:16 MARCH,2025
AUTHOR:WILLYCE OJWANG GWARA
 REG NO: BSE-05-0044/2024 */

#include <iostream>
#include <string>

using namespace std;

// Define a structure to store customer account details
struct Customer {
    string name;             // Customer's name
    double accountBalance;   // Customer's account balance
    string lastTransaction;  // Description of the last transaction
};

// Function to display customer details
// The 'const' keyword ensures that the function does not modify the passed customer data
void displayCustomer(const Customer& c) {
    cout << "Customer Name: " << c.name << endl;
    cout << "Account Balance: $" << c.accountBalance << endl;
    cout << "Last Transaction: " << c.lastTransaction << endl;
    cout << endl;
}

int main() {
    // Create two customer records with predefined (hardcoded) values
    Customer customer1 = {"Bobby Firmino", 8500.75, "Deposit of $600"};
    Customer customer2 = {"Christian bale", 1000.50, "Withdrawal of $500"};

    // Display the details of the predefined customers
    cout << "Customer 1 Details:" << endl;
    displayCustomer(customer1);

    cout << "Customer 2 Details:" << endl;
    displayCustomer(customer2);

    // Allow user to input their own customer details
    Customer customer;
    cout << "Enter customer name: ";
    getline(cin >> ws, customer.name);  // Using 'ws' to handle leading whitespace

    cout << "Enter account balance: ";
    cin >> customer.accountBalance;

    cin.ignore(); // Ignore newline character left in the buffer
    cout << "Enter last transaction: ";
    getline(cin, customer.lastTransaction);  // Taking full input with spaces

    // Display the customer details entered by the user
    cout << "Customer  Details (User Input):" << endl;
    displayCustomer(customer);

    return 0;
}
