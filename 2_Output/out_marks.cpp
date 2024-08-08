#include<iostream> // Including the iostream library for input/output operations
using namespace std; // Using the standard namespace to avoid prefixing std::

// Main function where the execution of the program begins
int main() {
    float marks; // Declaration of a float variable 'marks'

    // Declaration and initialization of float variables for each subject
    float physics = 97.5; // Physics marks
    float chemistry = 95.5; // Chemistry marks
    float maths = 98.5; // Maths marks

    // Calculating the total marks by summing up the individual subject marks
    marks = (physics + chemistry + maths);

    // Outputting the total marks to the console
    cout << "The total marks are: " << marks << endl;

    return 0; // Returning 0 to indicate that the program ended successfully
}
