#include<iostream>  // Include the iostream library for input and output
using namespace std;  // Use the standard namespace

int main() {
    int num;  // Declare an integer variable to store the user's input
    cout << "Enter a number: ";  // Prompt the user to enter a number
    cin >> num;  // Read the number from the user

    // Check if the number is even by using the modulus operator
    if(num % 2 == 0) {
        cout << num << " is even.";  // Output that the number is even if the condition is true
    }
    else {
        cout << num << " is odd.";  // Output that the number is odd if the condition is false
    }

    return 0;  // Return 0 to indicate successful execution
}
