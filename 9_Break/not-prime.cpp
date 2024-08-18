#include<iostream>  // Includes the standard input-output stream library
using namespace std; // Allows the use of standard names without the "std::" prefix

int main() {
    int num; // Variable to store the number entered by the user
    cout << "Enter the number: "; // Prompt the user to enter a number
    cin >> num; // Read the number from the user

    // Loop to check if the number is divisible by any number from 2 to num-1
    for(int i = 2; i < num; i++) {
        // If num is divisible by i, then num is not a prime number
        if(num % i == 0) {
            cout << "Number " << num << " is not prime" << endl;
            break; // Exit the loop since we found that the number is not prime
        }
    }
    // Note: If the loop completes without finding a divisor, the number is prime,
    // but there's no output for that case in this version of the code.

    return 0; // Indicate that the program ended successfully
}
