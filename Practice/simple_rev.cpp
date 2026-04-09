// Program to reverse the stirng without using pointers

#include <iostream>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    cout << "Enter the string: " ;
    string str,rev;
    getline(cin, str);
    int n = str.size();
    cout<< "Original string is: " << str << endl;
    for(int i=n-1;i>=0;i--){
        rev += str[i];
    }
    cout<< "Reversed string is: " << rev << endl;
    return 0;
}

// Function definitions