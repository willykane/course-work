#include <iostream>
#include <iomanip>
#include <ctime>
#include <string>
#include <sstream>
using namespace std;

int main() {

    string bookID;
    string dueDateStr, returnDateStr;
    tm dueDate = {}, returnDate = {};

    cout << "Enter the book ID "<<endl;
    cin >> bookID;
    cin.ignore();

    cout << "Enter the due date (YYYY-MM-DD): "<<endl;
    getline(cin, dueDateStr);
    stringstream(dueDateStr) >> get_time(&dueDate, "%Y-%m-%d");

    cout << "Enter the return date (YYYY-MM-DD): "<<endl;
    getline(cin, returnDateStr);
    stringstream(returnDateStr) >> get_time(&returnDate, "%Y-%m-%d");

    time_t dueDateT = mktime(&dueDate);
    time_t returnDateT = mktime(&returnDate);

    double secondsInADay = 60 * 60 * 24;
    int overdueDays = difftime(returnDateT, dueDateT) / secondsInADay;

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

    cout << "The number of overdue days is: " << overdueDays << endl;
    cout << "The fine rate is: Ksh " << fineRate << " per day" << endl;
    cout << "The fine amount is: Ksh " << fineAmount << endl;

    return 0;
}
