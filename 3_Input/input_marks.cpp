#include<iostream>
using namespace std;

int main() {
    // Declare variables to store total marks and individual subject marks
    float total_marks, maths, physics, chemistry;

    // Prompt the user to enter the marks of Maths and store it in the 'maths' variable
    cout << "Enter the marks of Maths: ";
    cin >> maths;

    // Prompt the user to enter the marks of Physics and store it in the 'physics' variable
    cout << "Enter the marks of Physics: ";
    cin >> physics;

    // Prompt the user to enter the marks of Chemistry and store it in the 'chemistry' variable
    cout << "Enter the marks of Chemistry: ";
    cin >> chemistry;

    // Calculate the total marks by summing up the marks of Maths, Physics, and Chemistry
    total_marks = maths + physics + chemistry;

    // Display the total marks
    cout << "Total marks are: " << total_marks << endl;

    return 0; // Return 0 to indicate successful execution
}
