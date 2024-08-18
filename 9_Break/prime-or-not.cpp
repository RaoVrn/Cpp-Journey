#include<iostream>  // Includes the standard input-output stream library
using namespace std; // Allows the use of standard names without the "std::" prefix

int main() {
    int num; // Variable to store the user's input
    cout << "Enter the number: "; // Prompt the user to enter a number
    cin >> num; // Read the number from the user

    bool isPrime = true; // Assume the number is prime initially

    // Loop from 2 to num-1 to check for divisibility
    for(int i = 2; i < num; i++) {
        // If num is divisible by any i (other than 1 and itself)
        if(num % i == 0) {
            isPrime = false; // Set isPrime to false, indicating the number is not prime
            break; // Exit the loop early since we found a divisor
        }
    }

    // After the loop, check if the number is still considered prime and greater than 1
    if(isPrime && num > 1) {
        cout << "Number " << num << " is prime" << endl; // If prime, output that it's a prime number
    } else {
        cout << "Number " << num << " is not prime" << endl; // If not prime, output that it's not a prime number
    }

    return 0; // Indicate that the program ended successfully
}
