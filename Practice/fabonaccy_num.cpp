// Program to find the Fibonacci number at a given position

#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    cout << "Enther the number: ";
    int num;
    cin >> num;
    if(num < 0){
      cout << "Please enter a positive integer." << endl;
      return 0;
    } else if(num == 0){
      cout << "Fibonacci Series: 0" << endl;
      return 0;
    }
    int t1=0,t2=1,nextTerm;
    cout << "Fibonacci Series: " << endl;
    for(int i=1; i<=num; i++){
      cout<< t1<<" ";
      nextTerm =t1+t2;
      t2=t1;
      t1=nextTerm;
    }
    
    return 0;
}

// Function definitions