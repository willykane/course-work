
#include <iostream>
#include <string>
using namespace std;

int main() {

    string bookID;
    int dueDate;
    int returnDate;

    cout << "Enter the book ID "<<endl;
    cin >> bookID;
    cout << "Enter the due date "<<endl;
    cin >> dueDate;
    cout << "Enter the return date "<<endl;
    cin >> returnDate;

    int overdueDays = returnDate - dueDate;

  cout << "The number of overdue days is: " << overdueDays << endl;

    int fineRate = 0;
    int fineAmount = 0;

    if (overdueDays > 0) {
        if (overdueDays <= 7) {
            fineRate = 20;
        } else if (overdueDays <= 14) {
            fineRate = 50;
        } else {
            fineRate = 100;
        }
        fineAmount = fineRate * overdueDays;
    }

    // Display the fine rate, fine amount, and overdue days
    cout << "The fine rate is: Ksh " << fineRate << " per day" << endl;

    cout << "The fine amount is: Ksh " << fineAmount << endl;

    return 0;
}

