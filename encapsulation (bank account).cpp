/* A simple program to demonstrate encapsulation in C++

AUTHOR: WILLYCE OJWANG GWARA
REG NO: BSE-05-0044/2024
DATE: 16 FEBRUARY 2025 */


 #include <iostream>
using namespace std;

class BankAccount {
private:
    string accountHolder;
    double balance;

public:
    // Constructor //
    BankAccount(string holder, double initialBalance) {
        accountHolder = holder;
        balance = (initialBalance >= 0) ? initialBalance : 0.0; // Ensuring no negative balance //
    }

    // Getter for accountHolder//
    string getAccountHolder() {
        return accountHolder;
    }

    // Setter for accountHolder//
    void setAccountHolder(string holder) {
        accountHolder = holder;
    }

    // Getter for balance//
    double getBalance() {
        return balance;
    }

    // Setter for balance //
    void setBalance(double amount) {
        if (amount >= 0) {
            balance = amount;
        } else {
            cout << "Balance cannot be negative!" << endl;
        }
    }
};

int main() {
    BankAccount account("Craig Nginga", 1000.0);

    // Testing encapsulation//
    cout << "Account Holder: " << account.getAccountHolder() << endl;
    cout << "Balance: $" << account.getBalance() << endl;

    // Attempting to modify balance//
    account.setBalance(500.0);
    cout << "Updated Balance: $" << account.getBalance() << endl;

    // Attempting to set a negative balance//
    account.setBalance(-200.0);

    return 0;
}
