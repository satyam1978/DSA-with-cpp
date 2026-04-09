// Program to check the frequency of a characters in a string
#include <iostream>
#include <string>
#include <cstring>

using namespace std;

// Function prototypes

int main() {
system("cls");
    // Your main code here
    cout << "Enter the string: " ;
    string str;
    getline(cin, str);
    int n = str.size();
    cout<< "Original string is: " << str << endl;
    int freq[255] ={0};
    for(int i=0;i<n;i++){
        freq[str[i]]++;
    }
    for(int i=0;i<255;i++){
      if(freq[i]>0){
        cout<< char(i) << " : " << freq[i] << endl;
      }
    }
    
    return 0;
}

// Function definitions