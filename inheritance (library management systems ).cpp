/*
   AUTHOR:WILLYCE OJWANG
   REG NO:BSE-05-0044/2024
   DATE:2nd March 2025
   a simple c++ program  demonstrating a library management system

*/

#include<iostream>
#include<string>
using namespace std;

class Person{
protected :
    string name;

public :
     void setName(string n) { name = n; }
    string getName() { return name; }

};

class LibraryMember : public Person {
private:
    int memberID;
    int booksBorrowed;
public:
    LibraryMember(string n, int id, int books) {
        name = n;
        memberID = id;
        booksBorrowed = books;
    }
    int getMemberID() { return memberID; }
    int getBooksBorrowed() { return booksBorrowed; }
};

class PremiumMember : public LibraryMember {
private:
    double membershipFee;
public:
    PremiumMember(string n, int id, int books, double fee)
        : LibraryMember(n, id, books), membershipFee(fee) {}

    double getMembershipFee() { return membershipFee; }
};

int main() {
    PremiumMember pm("willyce", 1564213, 3, 100.0);

    cout << "Name: " << pm.getName() << endl;
    cout << "Member ID: " << pm.getMemberID() << endl;
    cout << "Books Borrowed: " << pm.getBooksBorrowed() << endl;
    cout << "Membership Fee: $" << pm.getMembershipFee() << endl;

    return 0;
}
