#include<iostream>  // Including the standard input-output stream library
using namespace std;  // Using the standard namespace

int main() {
    int pocket_money = 3000;  // Initializing pocket money to 3000

    // Loop through each day of the month (1 to 31)
    for(int date = 1; date <= 31; date++) {
        if(date % 2 == 0) {
            continue;  // Skip the iteration if the day is even
        }
        
        // Output a message for going out on odd days
        cout << "Day " << date << " go out today! " << endl;

        // Deduct 300 from pocket money for going out
        pocket_money -= 300;
        
        // Check if pocket money is depleted
        if(pocket_money <= 0) {
            cout << "Day " << date << " no money!" << endl;
            break;  // Exit the loop if no money is left
        }
    }

    return 0;  // Returning 0 to indicate that the program ended successfully
}
