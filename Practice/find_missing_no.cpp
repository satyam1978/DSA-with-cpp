// Program to find out the missing positive no

#include <iostream>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    int arr[] = {1,2,3,5};
    int n=sizeof(arr)/sizeof(arr[0]);
    int sum=0;
    for(int i=0;i<n-1;i++){
      sum += arr[i];
    }
    int total = n*(n+1)/2;

    cout<< total-sum;
    return 0;
}

// Function definitions