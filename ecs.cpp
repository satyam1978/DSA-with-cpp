// This program demostrate that how actualy escape seques used in c++ programming
#include <iostream>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    cout << "Enter the data according to table\n Id \t Name \t  Age \n";
    int id, age;
    string name;
    cin >> id >> name >> age;
    cout << "The data you entered is \n";
    cout << id << "\t" << name << "\t" << age << endl;
    return 0;
}

