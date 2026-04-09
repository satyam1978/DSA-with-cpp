// Program to reverse a string using a function

#include <iostream>
#include <algorithm>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    cout << "Enter the string: " ;
    string str;
    getline(cin, str);
    int n = str.size();
    cout<< "Original string is: " << str << endl;
    reverse(str.begin(),str.end());
    cout<< "Reversed string is: " << str << endl;
    return 0;
}

// Function definitions