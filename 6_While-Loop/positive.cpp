#include<iostream>  // Including the standard input-output stream library
using namespace std;  // Using the standard namespace

int main() {
    int n;  // Declaring an integer variable n for user input

    cout << "Enter the value of n: ";  // Prompting the user to enter the value of n
    cin >> n;  // Reading the value of n from the user input

    // Loop to check if the number is positive and prompt for another number
    while(n >= 0) {
        cout << "The number " << n << " is positive" << endl;  // Output if the number is positive
        cout << "Enter the value of n again: ";  // Prompting the user to enter the value of n again
        cin >> n;  // Reading the new value of n from the user input
    }

    // Output if the number is negative
    cout << "The number " << n << " is negative" << endl;

    return 0;  // Returning 0 to indicate that the program ended successfully
}
