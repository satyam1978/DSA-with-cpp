// Program for swapping two numbers
#include <iostream>
 
 using namespace std;
 
 // Function prototypes
 
 int main() {
 system("cls");
     // Your main code here
     cout << "This program is for swapping two numbers!" << endl;
     int  num1,num2;
     cout << "Enter the first number: ";
     cin >> num1;
      cout << "Enter the second number: ";
      cin >> num2;
      cout << "Before swapping: " << endl;
      cout << "First number: " << num1 << endl;
      cout << "Second number: " << num2 << endl;
      // Swapping logic
      num1= num1 + num2;
      num2 = num1 - num2;
      num1 = num1 - num2;
      cout << "After swapping: " << endl;
      cout << "First number: " << num1 << endl; 
      cout << "Second number: " << num2 << endl;
     
     return 0;
 }
 
