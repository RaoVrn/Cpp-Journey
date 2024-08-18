#include<iostream>  // Includes the standard input-output stream library
using namespace std; // Allows the use of standard names without the "std::" prefix

int main() {
    // Loop from 0 to 100 inclusive
    for(int i=0; i<=100; i++) {
        // If the current number is divisible by 3
        if(i%3 == 0){
            continue; // Skip the rest of the loop and move to the next iteration
        }
        // Output the current number to the console
        cout<< i << endl;
    }
    return 0; // Indicate that the program ended successfully
}
