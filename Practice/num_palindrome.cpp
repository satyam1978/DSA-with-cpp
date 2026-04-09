// Program to check the number is palindrome or not
#include <iostream>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    cout << "Enter the number: ";
    int num;
    cin >> num;
    int originalNum = num;
    int rev=0;
    while(num!=0){
      int digit =num%10;
      rev = rev*10 + digit;
      num /=10;
    }
    if(rev == originalNum){
      cout << originalNum << " is a palindrome number." << endl;
    } else {
      cout << originalNum << " is not a palindrome number." << endl;
    }
    return 0;
}

// Function definitions