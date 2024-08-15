#include<iostream>  // Including the standard input-output stream library
using namespace std;  // Using the standard namespace

int main() {
    int n;  // Declaring an integer variable n for user input

    // Do-while loop to check if the number is positive and prompt for another number
    do {
        cout << "Enter a number: ";  // Prompting the user to enter a number
        cin >> n;  // Reading the value of n from the user input
        if (n >= 0) {
            cout << "The number " << n << " is positive." << endl;  // Output if the number is positive
        }
    } while(n >= 0);  // The loop continues as long as n is non-negative
    
    // Output if the number is negative
    cout << "The number " << n << " is negative." << endl;

    return 0;  // Returning 0 to indicate that the program ended successfully
}
