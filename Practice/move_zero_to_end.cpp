// Program to move all zeros in an array to the end while maintaining the order of non-zero elements.

#include <iostream>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    cout << "Original array's: ";
    int arr[] = {0, 1, 0, 3, 12,0,0,5,6,0,18};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
   int index = 0; // Index of the next non-zero element
    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[index] = arr[i];
            index++;
        }
    }
    while (index < n) {
        arr[index++] = 0;
    }
    cout << "\nArray after moving zeros to the end: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    
    
    
    return 0;
}

// Function definitions