#include<iostream>  // Include the iostream library for input and output
using namespace std;  // Use the standard namespace

int main() {
    int num1, num2, num3;  // Declare three integer variables to store the numbers
    cout << "Enter the first number: ";  // Prompt the user to enter the first number
    cin >> num1;  // Read the first number from the user

    cout << "Enter the second number: ";  // Prompt the user to enter the second number
    cin >> num2;  // Read the second number from the user

    cout << "Enter the third number: ";  // Prompt the user to enter the third number
    cin >> num3;  // Read the third number from the user

    // Check if the first number is greater than both the second and third numbers
    if(num1 > num2 && num1 > num3) { 
        cout << "The largest number is: " << num1 << endl;  // Output the first number as the largest
    }
    // Check if the second number is greater than both the first and third numbers
    else if(num2 > num1 && num2 > num3) {
        cout << "The largest number is: " << num2 << endl;  // Output the second number as the largest
    }
    // If the above conditions are not met, the third number is the largest
    else {
        cout << "The largest number is: " << num3 << endl;  // Output the third number as the largest
    }

    return 0;  // Return 0 to indicate successful execution
}
