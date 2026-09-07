// Program to check the number is armstrong or not
#include <iostream>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    cout << "Program to check the number is armstrong or not" << endl;
    cout << "Enter a number: ";
    int rem, new_num =0, num, old_num;
    cin >> num;
    cout << "You have entered: " << num << endl;
    old_num = num;
    // armstrong Logic
    while(num != 0)
    {
        rem = num % 10;
        new_num = new_num + (rem * rem * rem);
        num = num / 10;
    }
    // Checking
    if(new_num == old_num)
    {
        cout << "The number is armstrong" << endl;
    }
    else
    {
        cout << "The number is not armstrong" << endl;
    }
    
    return 0;
}

// Function definitions