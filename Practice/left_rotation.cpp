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
   
    int temp = arr[0];
    for (int i = 1; i < n; i++) {
        arr[i-1] = arr[i];
    }
    arr[n-1] = temp;
    cout << "Array after left rotation: ";
     for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}

// Function definitions