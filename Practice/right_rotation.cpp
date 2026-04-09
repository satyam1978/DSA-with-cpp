// Program to demostrate the left rotation operation in an array

#include <iostream>
#include <algorithm>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    cout << "Original array's element: ";
    int arr[] = {1, 2, 0, 4, 3};
    int n = sizeof(arr)/ sizeof(arr[0]);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
   
    int temp = arr[n-1];
    for (int i = n-1; i > 0; i--) {
        arr[i] = arr[i-1];
    }
    arr[0] = temp;
    cout << "Array after right rotation: ";
     for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

// Function definitions