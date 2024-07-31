#include<iostream> // Including the iostream library for input/output operations
using namespace std; // Using the standard namespace to avoid prefixing std::

// Main function where the execution of the program begins
int main() {
    int i; // Declaration of an integer variable 'i'
    // Printing the size of the integer variable 'i'
    cout << "Size of int is: " << sizeof(i) << endl;

    short int si; // Declaration of a short integer variable 'si'
    // Printing the size of the short integer variable 'si'
    cout << "Size of short int is: " << sizeof(si) << endl;

    long int li; // Declaration of a long integer variable 'li'
    // Printing the size of the long integer variable 'li'
    cout << "Size of long int is: " << sizeof(li) << endl;

    return 0; // Returning 0 to indicate that the program ended successfully
}
