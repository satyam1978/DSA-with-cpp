// Program for reversing a number
#include <iostream>

using namespace std;

// Function prototypes

int main() {
system("cls");
    
cout << "Enter The Number: ";
    int num, rev=0, rem;
    cin >> num;
cout << "Number Before Reversing: " << num << endl;
// reverse logic
while(num != 0)
{
rem = num%10;
rev = rev*10 + rem;
num = num/10;
}
cout << "Number After Reversing: " << rev;
    
    return 0;
}

// Function definitions