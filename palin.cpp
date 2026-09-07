// Program for checking a number is palindrome or not.
#include <iostream>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    cout << "Palindrome Program" << endl;
    cout << "Enter a number: ";
    int num, rev=0, rem;
    cin >> num;
    cout << "You have entered: " << num << endl;
    // Palindrome logic
    int old_num = num;
while(num != 0)
{
    rem = num % 10;
    rev = rev * 10 + rem;
    num = num / 10;
}
if(old_num == rev)
{
    cout << "The number is palindrome" << endl;
}
else
{
    cout << "The number is not palindrome" << endl;
}
    
    return 0;
}

// Function definitions