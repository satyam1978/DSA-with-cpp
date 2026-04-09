// Program to rotate an string by 2 place

#include <iostream>
#include <algorithm>
#include <string>
using namespace std;



void rightRotation(string &s1) {
  
  int n=s1.size();
  int temp = s1[n-1];
  for (int i = n-1; i >0; i--) {
      s1[i] = s1[i-1];
  }
  s1[0] = temp;
  
}


// Function to perform left rotation on an array
void leftRotation(string &s1) {
  
  int n=s1.size();
  int temp = s1[0];
  for (int i = 1; i < n; i++) {
      s1[i-1] = s1[i];
  }
  s1[n-1] = temp;
  
}

    bool isRotated(string& s1, string& s2) {
        // code here
     if(s1.size()!=s2.size()){
         return 0;
     }
     
     string clockwise = s1;
     rightRotation(clockwise);
     rightRotation(clockwise);
     
     if(clockwise == s2){
         return 1;
     }
     
     string anticlockwise = s1;
     leftRotation(anticlockwise);
     leftRotation(anticlockwise);
     
     if(anticlockwise == s2){
         return 1;
     }
     
    return 0;
    }

    int main(){
      system("cls");
      string s1 = "amazon";
      string s2 = "azonam";
      if(isRotated(s1, s2)){
          cout<<"Strings are rotated by 2 places"<<endl;
      } else {
          cout<<"Strings are not rotated by 2 places"<<endl;
      }
      return 0;
    }
          

