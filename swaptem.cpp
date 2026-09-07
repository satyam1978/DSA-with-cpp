// Program of swapping two numbers with using a temporary variable
#include <iostream>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    cout << "Here use see the swapping program using temporary variable" << endl;
    int num1, num2, temp;
    cout << "Enter the first number: ";
    cin >> num1;
    cout << "Enter the second numbers: ";
    cin >> num2;
    cout << "Before swapping: " << endl;
    cout << "First number: " << num1 << endl; 
    cout << "Second number: " << num2 << endl;
    // Swapping logic
    temp = num1;
    num1 = num2;
    num2 = temp;
    cout << "After swapping: " << endl;
    cout << "First number: " << num1 << endl; 
    cout << "Second number: " << num2 << endl;
    
    return 0;
}
