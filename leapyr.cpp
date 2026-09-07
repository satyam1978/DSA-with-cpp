#include <iostream>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    cout << "Enter the year that you want check it is leap year or not" << endl;
    int year;
    cin >> year;
    // Logic for leap year
    if((year%4==0 && year%100 != 0) || (year%400 == 0))
    {
        cout << "It is a leap year " << year << endl;
    }
    else
    {
        cout << "It is not a leap year " << year << endl;

    }
    return 0;
}

