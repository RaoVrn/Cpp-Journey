#include<iostream> // Including the iostream library for input/output operations
using namespace std; // Using the standard namespace to avoid prefixing std::

// Main function where the execution of the program begins
int main() {
    int a; // Declaration of an integer variable 'a'
    a = 12; // Initialization of 'a' with the value 12

    // Printing the size of the integer variable 'a'
    cout << "Size of int is: " << sizeof(a) << endl;

    float b; // Declaration of a float variable 'b'
    // Printing the size of the float variable 'b'
    cout << "Size of float is: " << sizeof(b) << endl;

    char c; // Declaration of a char variable 'c'
    // Printing the size of the char variable 'c'
    cout << "Size of char is: " << sizeof(c) << endl;

    return 0; // Returning 0 to indicate that the program ended successfully
}
