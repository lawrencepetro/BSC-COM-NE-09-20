#include <iostream>
#include <string>

using namespace std;

int main() {
    // Dynamically allocate an integer
    int* dynamicInt = new int;

    // Dynamically allocate a string
    string* dynamicString = new string;

    // Prompt user to enter an integer
    cout << "Enter an integer: ";
    cin >> *dynamicInt;

    // Prompt user to enter a string
    cout << "Enter a string: ";
    cin.ignore();
    getline(cin, *dynamicString);

    // Output the dynamically allocated integer
    cout << "Dynamically allocated integer: " << *dynamicInt << endl;

    // Output the dynamically allocated string
    cout << "Dynamically allocated string: " << *dynamicString << endl;

    // Free the dynamically allocated memory
    delete dynamicInt;
    delete dynamicString;

    return 0;
}