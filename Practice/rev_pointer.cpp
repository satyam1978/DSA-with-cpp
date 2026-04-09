// Program to reverse the stirng using pointers

#include <iostream>

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
    int start = 0, end=n-1;
    while(start<end){
      swap(str[start], str[end]);
      start++;
      end--;
    }
    cout<< "Reversed string is: " << str << endl;
    return 0;
}

// Function definitions