// Program to perform left rotation using function
#include <iostream>
#include <algorithm>
using namespace std;

// Function to perform right rotation on an array
void rightRotation(int arr[], int n) {
  
  int temp = arr[n-1];
  for (int i = n-1; i >0; i--) {
      arr[i] = arr[i-1];
  }
  arr[0] = temp;
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

    rightRotation(arr,n); 
    rightRotation(arr,n);
     
    cout << "Array after right rotation: " ;
     for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}