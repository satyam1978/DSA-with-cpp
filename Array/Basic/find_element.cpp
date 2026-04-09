// Performing linear search to check element is present or not
#include <iostream>
#include <vector>

using namespace std;

// Function prototypes

int main() {
    system("cls");
    // Your main code here
    int size;
    cout << "Enter the size of the array: ";
    cin >> size;
    if (size <= 0) {
        cout << "Invalid array size." << endl;
        return 1;
    }
    vector<int> arr(size);
    cout << "Enter the elements of the array:" << endl;
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }
    int find;
    cout << "Enter the element to find: ";
    cin >> find;

    bool found = false;
    int found_index = -1;
    for (int i = 0; i < size; i++) {
        if (arr[i] == find) {
            found = true;
            found_index = i;
            break; 
        }
    }

    if (found) {
        cout << "The element is found at index: " << found_index << endl;
    } else {
        cout << "The element is not found" << endl;
    }

    return 0;
}

// Function definitions
