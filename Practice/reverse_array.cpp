// Program to reverse an array using two-pointer approach.

#include <iostream>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    cout << "Array before a reverse operation: ";
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    // Two-pointer approach to reverse the array
    int start=0, end= n-1;
    while(start<end){
      swap(arr[start], arr[end]);
      start++;
      end--;
    }
    
    cout << "\nArray after a reverse operation: ";
    for (int i = 0; i < n; i++) {
      cout << arr[i] << " ";
    }
    
    return 0;
}

// Function definitions