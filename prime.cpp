// Program to check a number is prime or not.
#include <iostream>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    cout << "Prime Number Program" << endl;
    cout << "Enter a number: ";
    int num, flag=0;
    cin >> num;
    cout << "You have entered: " << num << endl;
    // Prime logic
    for(int i=2; i<=num/2; i++)
    {
        if(num % i == 0)
        {
            flag = 1;
            break;
        }
    }
    if(flag == 0)
    {
        cout << "The number is prime" << endl;
    }
    else
    {
        cout << "The number is not prime" << endl;
    }
    
    return 0;
}

// Function definitions