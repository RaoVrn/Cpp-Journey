#include<iostream>  // Including the standard input-output stream library
using namespace std;  // Using the standard namespace

int main() {
    int n, sum;  // Declaring integer variables n (for user input) and sum (to store the sum)

    cout << "Enter the value of n: ";  // Prompting the user to enter the value of n
    cin >> n;  // Reading the value of n from the user input

    sum = 0;  // Initializing sum to 0

    // Loop to calculate the sum of first n natural numbers
    for (int i = 1; i <= n; i++) {
        sum += i;  // Adding the current value of i to sum
    }

    // Displaying the result
    cout << "The sum of " << n << " numbers is: " << sum << endl;

    return 0;  // Returning 0 to indicate that the program ended successfully
}
