#include<iostream>  // Includes the standard input-output stream library
using namespace std; // Allows the use of standard names without the "std::" prefix

int main() {
    // Loop through days of the month from 1 to 31
    for(int date = 1; date <= 31; date++) {
        // If the current date is even
        if(date % 2 == 0) {
            continue; // Skip the rest of the loop and move to the next iteration
        }
        // Output a message indicating to go out on this day
        cout << "Day " << date << " go out today! " << endl;
    }

    return 0; // Indicate that the program ended successfully
}
