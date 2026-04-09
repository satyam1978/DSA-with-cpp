// Check the array is sorted or not
#include <iostream>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    int arr[size];
    cout << "Enter the elements of the array: ";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    bool isSorted = true;
    for(int i = 0; i < size; i++)
      if(arr[i] < arr[i+1])
      {
        isSorted = false;
        cout << "The array is not sorted" << endl;
        break;
      } else{
        cout << "The array is sorted" << endl;
        break;
      }
      
    
    return 0;
}

// Function definitions