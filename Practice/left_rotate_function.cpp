// Program to perform left rotation using function
#include <iostream>
#include <algorithm>
using namespace std;

// Function to perform left rotation on an array
void leftRotation(int arr[], int n) {
  
  int temp = arr[0];
  for (int i = 1; i < n; i++) {
      arr[i-1] = arr[i];
  }
  arr[n-1] = temp;
}

//calling the function in main
int main(){
  system("cls");
    cout << "Original array's element: ";
    int arr[] = {1, 2, 0, 4, 3};
    int n = sizeof(arr)/ sizeof(arr[0]);
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    leftRotation(arr,n); 
    leftRotation(arr,n); 
    leftRotation(arr,n); 
    cout << "Array after left rotation: " ;
     for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}