// Program to reverse a string

#include <iostream>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    cout << "Original String" << endl;
    string st="ram";
    string rev ;
    int n = st.length();
    cout<< st.size() << endl;
    cout << "Reversed String" << endl;
    for(int i = n-1;i>=0;i--)
    {
      rev +=st[i];
    }
    
cout<< rev;

    
    return 0;
}

// Function definitions