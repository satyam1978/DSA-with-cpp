// Program to defanged an IP address replaces every period "." with "[.]".

#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    string address = "255.63.10.139";
    cout << "Original Address: " << address << endl;
    int index = 0;
    int total_size = address.size();
    string defaged;
    while(index !=total_size){
      if(address[index]=='.'){
        defaged += "[.]";
      }else{
        defaged += address[index];
      }
      index++;
    }
    cout << "IP after defaged: "<<defaged << endl;
    return 0;
}

// Function definitions