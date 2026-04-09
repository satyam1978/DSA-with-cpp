// Program to create a banking management system using oops

#include <iostream>  //For Input Output
#include <fstream>   //For File Handling
#include <windows.h>
#include <sstream>
#include <string>

using namespace std;

//Object Blue Print
class Account{
  private:
  string Account_No, Password;
  int Balance;

  //Creating Constructor
  public:
Account(): Account_No(""), Password(""), Balance(0){}

//Setter Function for making value initialization (member functio)
void setAccount_No(string id){
  Account_No = id;
}

void setPassword(string pw){
  Password = pw;
}

void setBalance(int balance){
  Balance = balance;
}

//Getter Function for using variables

string getAccount_No(){
  return Account_No;
}

string getPassword(){
  return Password;
}

int getBalance(){
  return Balance;
}
};

// Function prototypes
void openAccount(Account &user){
  system("cls");
string id, pw;

cout<<"\tEnter Account No: ";
cin>>id;
user.setAccount_No(id);

cout<<"\tEnter A Strong Password: ";
cin>>pw;
user.setPassword(pw);

user.setBalance(0);

//creating File
ofstream fout;
fout.open("data/Account.txt", ios::app);
if(fout.is_open()){
fout<<user.getAccount_No()<<" : "<<user.getPassword()<<" : "<<user.getBalance()<<endl;
cout<<"\tAccount Opened Successfully!"<<endl;
}else{
  cout<<"\tFile Not Found!"<<endl;
}
fout.close();
  Sleep(5000);
}

void addCash(){
  system("cls");
  string id;
  cout<<"\tEnter Your Account No: ";
  cin>>id;

  //file
  ifstream infile("data/Account.txt");
  ofstream outfile("data/Account_temp.txt");
  if(!infile || !outfile){
    cout<<"\tError: File Can't Open";
  }

  string line;
  bool found = false;

  while(getline(infile, line)){
    stringstream ss(line);
    string user_id, user_pw;
    int user_balance;
    char delimiter;
    ss>>user_id>>delimiter>>user_pw>>delimiter>>user_balance;
    if(id == user_id){
      found=true;
      int cash;
      cout<<"\tEnter Amount: ";
      cin>>cash;
      int newBalance = user_balance + cash;
      user_balance = newBalance;
      outfile<<user_id<<" : "<<user_pw<<" : "<<user_balance<<endl;
      cout<<"\tNew Balance: "<<user_balance<<endl;
    }else{
      outfile<<line<<endl;
    }
  }
  if(!found){
    cout<<"\tInvalid Account No!"<<endl;
  }
  outfile.close();
  infile.close();
  remove("data/Account.txt");
  rename("data/Account_temp.txt","data/Account.txt");
  Sleep(5000);
}

//Withdrawl Function
void withdrawl(){
  string id, pw;
  cout<<"\tEnter Your Account No: ";
  cin>>id;
  cout<<"\tEnter Your Account Password: ";
  cin>>pw;

  ifstream infile("data/Account.txt");
  ofstream outfile("data/Account_temp.txt");
  if(!infile || !outfile){
    cout<<"\tError: File Can't Open";
  }

  string line;
  bool found = false;

  while(getline(infile, line)){
    stringstream ss(line);
    string user_id, user_pw;
    int user_balance;
    char delimiter;

    ss>>user_id>>delimiter>>user_pw>>delimiter>>user_balance;
     if(id == user_id && pw == user_pw){
      found=true;
      int cash;
      cout<<"\tEnter Amount To Withdrawl: ";
      cin>>cash;
      if(cash<=user_balance && user_balance >0){
        int newBalance = user_balance - cash;
        user_balance = newBalance;
              outfile<<"\t"<<user_id<<" : "<<user_pw<<" : "<<user_balance<<endl;
              cout<<"\tTransaction Was Successful."<<endl;
              cout<<"\tRemaining Balance: "<<user_balance<<endl;
      }else {
        cout<<"\tInsufficient Balance!"<<endl;
                      outfile<<user_id<<" : "<<user_pw<<" : "<<user_balance<<endl;

      }
     }else{
      outfile<<line<<endl;
     }
  }
  if(!found){
    cout<<"\tInvalid Account No or Password!"<<endl;
  }
outfile.close();
  infile.close();
  remove("data/Account.txt");
  rename("data/Account_temp.txt","data/Account.txt");
  Sleep(5000);

}

int main() {
system("cls");
    // Your main code here
    Account user;
bool exit = false;
    while(!exit){
      system("cls");
      int val;
      cout << "\t Welcome to Bank Account Management System"<<endl;
      cout<<"\t--------------------------------------------------"<<endl;
      cout<<"\t1.Open New Account."<<endl;
      cout<<"\t2.Add Cash."<<endl;
      cout<<"\t3.Withdrawl Cash."<<endl;
      cout<<"\t4.Exit."<<endl;
      cout<<"\tEnter Your Choice: "<<endl;
      cin>>val;

      if(val==1){
        openAccount(user);
      }else if(val==2){
        addCash();
      }else if(val==3){
        withdrawl();
      }else if(val==4){
        system("cls");
        exit = true;
        cout<<"\tThank You For Banking With Us!"<<endl;
        Sleep(2000);
      }
      Sleep(3000); //Due to <window.h> header file (cause display result till)
    }
    
    return 0;
}

// Function definitions