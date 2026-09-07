// Program for printing fabonacci series
#include <iostream>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    cout << "Enter anumber to print fabonacci series: ";
    int num, a=0, b=1, c;
    cin >> num;
    // fabonacci logic
    for(int i=1; i<=num; i++)
    {
        cout << a << " ";
        c = a + b;
        a = b;
        b = c;
    }
    
    return 0;
}