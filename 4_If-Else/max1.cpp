#include<iostream>  // Include the iostream library for input and output
using namespace std;  // Use the standard namespace

int main() {
    int num1, num2, num3;  // Declare three integer variables to store the numbers

    num1 = 1;  // Assign a value of 1 to num1
    num2 = 2;  // Assign a value of 2 to num2
    num3 = 1;  // Assign a value of 1 to num3

    // Check if num1 is greater than num2
    if (num1 > num2) {
        // If num1 is greater than num2, check if num1 is also greater than num3
        if (num1 > num3) {
            cout << "num1 " << num1 << " is the largest number." << endl;  // Output num1 as the largest
        }
        else {
            cout << "num3 " << num3 << " is the largest number." << endl;  // Output num3 as the largest
        }
    }
    else {
        // If num2 is greater than or equal to num1, output num2 as the largest
        cout << "num2 " << num2 << " is the largest number." << endl;
    }

    return 0;  // Return 0 to indicate successful execution
}
