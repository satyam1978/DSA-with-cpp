// Program to reverse an array using simple approach

#include <iostream>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    cout << "Array before reverse: ";
    int arr[] = {1, 2, 3, 4, 5, 6};
    int n = sizeof(arr) / sizeof(arr[0]);
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }

    //simple approach to reverse the array
    cout << "\nArray after reverse: ";
    for(int i=n-1;i>=0;i--){
      cout << arr[i] << " ";
    }
    
    return 0;
}

// Function definitions