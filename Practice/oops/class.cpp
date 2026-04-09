#include <iostream>

using namespace std;

// Object Blueprint
class sample{
  //access modifiers
  public:
  // attributes
  string name;
  int age;
};

int main() {
system("cls");
    // Calling the class
    sample person1;
    person1.name = "Alice";
    person1.age = 30;
    cout << "Name: " << person1.name << endl;
    cout << "Age: " << person1.age << endl;
    return 0;
}

