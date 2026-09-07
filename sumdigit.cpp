// Program for sum of digits of a number
#include <iostream>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Logic for sum of digit
    cout << "Enter ay digit number: ";
    int num, sum=0, rem;
    cin >> num;
    if(num < 0)
    {
        cout << "Invalid input" << endl;
        return 0;
    }
    while(num != 0)
    {
        rem = num % 10;
        sum = sum + rem;
        num = num / 10;
    }
    cout << "The sum of digits is: " << sum << endl;


    
    return 0;
}

