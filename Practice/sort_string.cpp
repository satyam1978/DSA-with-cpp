// Program to sort a string in ascending order

#include <iostream>
#include <algorithm>
#include <string>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    cout << "Enter a String: ";
    string str;
    getline(cin, str);
    
    cout << "\nOriginal String: ";
    cout << str << endl;
    int n = str.size();

    // Sorting the string in ascending order
    int start = 0, end = n - 1;
    while(start<n){ //time complexity: O(n^2) and space complexity: O(1)
      for(int i=start; i<end; i++){
        if(str[start]>str[i+1]){
          swap(str[start], str[i+1]);
        }
      }
      start++;
    }
    cout << "Sorted String: " << str << endl;
    
    return 0;
}

// Function definitions