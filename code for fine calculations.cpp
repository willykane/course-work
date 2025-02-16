/*code for fine calculations for books in a library
AUTHOR: WILLYCE OJWANG GWARA 
REG NO: BSE-05-0044/2024

*/

#include <iostream>
#include <string>
using namespace std;

int main() {

    string bookID;
    int dueDate;
    int returnDate;
    
//prompt the user to enter the book ID//
    
    cout << "Enter the book ID "<<endl;
    cin >> bookID;
    
    //prompt the user to enter due date//
    
    cout << "Enter the due date "<<endl;
     cin >> dueDate;
    //prompt the user to enter return date //
    
    cout << "Enter the return date "<<endl;
    cin >> returnDate;
//calculate number of overdue days //
    
    int overdueDays = returnDate - dueDate;

    //display the number of overdue days //
    
  cout << "The number of overdue days is: " << overdueDays << endl;

    int fineRate = 0;
    int fineAmount = 0;

    // determine the fine rate based on overdue days//
    
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

    //display fine rates and total fine due//
    cout << "The fine rate is: Ksh " << fineRate << " per day" << endl;

    cout << "The fine amount is: Ksh " << fineAmount << endl;
    return 0;
}

