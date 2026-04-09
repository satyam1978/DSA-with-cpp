// Program to check the the two strings are anagrams or not

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    string s1 = "listen";
    string s2 = "silent";
    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());
    if (s1 == s2) {
        cout << "The strings are anagrams." << endl;
    } else {
        cout << "The strings are not anagrams." << endl;
    }
    return 0;
}

// Function definitions