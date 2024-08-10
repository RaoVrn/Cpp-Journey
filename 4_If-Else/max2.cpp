#include<iostream>  // Include the iostream library for input and output
using namespace std;  // Use the standard namespace

int main() {
    int num1, num2, num3;  // Declare three integer variables to store the numbers

    num1 = 10;  // Assign a value of 10 to num1
    num2 = 20;  // Assign a value of 20 to num2
    num3 = 30;  // Assign a value of 30 to num3

    // Check if num1 is greater than both num2 and num3
    if(num1 > num2 && num1 > num3) { 
        cout << "The largest number is: " << num1 << endl;  // Output num1 as the largest
    }
    // Check if num2 is greater than both num1 and num3
    else if(num2 > num1 && num2 > num3) {
        cout << "The largest number is: " << num2 << endl;  // Output num2 as the largest
    }
    // If the above conditions are not met, num3 is the largest
    else {
        cout << "The largest number is: " << num3 << endl;  // Output num3 as the largest
    }

    return 0;  // Return 0 to indicate successful execution
}
