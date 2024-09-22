#include <iostream>
using namespace std;
// Checking if its a leap year
bool being_leap_year(int Y) {
    // Checking if its a century year
    if (Y % 100 == 0) {
        // Being a leap year only if it is divisible by 400
        return (Y % 400 == 0);
    } else {
        // It is a leap year if it is divisible by 4
        return (Y % 4 == 0);
    }
}
int main() {
    int year;
// Input from user
    cout << "Enter a year: ";
    cin >> year;
// Check if the entered year is a leap year
    if (being_leap_year(year)) {
        cout << year << " is a leap year." << endl;
    } else {
        cout << year << " is not a leap year." << endl;
    }

    return 0;
}
