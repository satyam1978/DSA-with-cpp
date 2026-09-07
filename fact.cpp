// Program for printing factorial of a number
#include <iostream>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    cout << "Program for printing factorial of a number" << endl;
    cout << "Enter a number: ";
    int num, fact=1;
    cin >> num;
    if(num == 0)
    {
        cout << "Factorial of 0 is 1" << endl;
    }
    else if(num < 0)
    {
        cout << "Invalid input" << endl;
    }
    else
    {
        // Factorial logic
        for(int i=1; i<=num; i++)
        {
          fact =fact*i;
        }
        cout << "Factorial of " << num << " is " << fact << endl;

    }
    
    return 0;
}

// Function definitions