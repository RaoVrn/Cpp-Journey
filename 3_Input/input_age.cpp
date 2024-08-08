#include <iostream> // Including the iostream library for input/output operations
using namespace std; // Using the standard namespace to avoid prefixing std::

// Main function where the execution of the program begins
int main() {
    int age; // Declaration of an integer variable 'age'
    
    // Prompting the user for input
    cout << "Please enter your age: ";
    
    // Reading the integer input from the user and storing it in 'age'
    cin >> age;
    
    // Outputting the value of 'age' to the console
    cout << "Your age is: " << age << endl;

    return 0; // Returning 0 to indicate that the program ended successfully
}
