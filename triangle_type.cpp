#include<iostream>  // Include the iostream library for input and output
using namespace std;  // Use the standard namespace

int main() {
    int side1, side2, side3;  // Declare three integer variables to store the sides of the triangle

    cout << "Enter the 3 sides of the triangle: ";  // Prompt the user to enter the sides of the triangle
    cin >> side1 >> side2 >> side3;  // Read the three sides from the user

    // Check if all three sides are equal
    if(side1 == side2 && side2 == side3) {
        cout << "The triangle is equilateral.";  // Output that the triangle is equilateral
    }
    // Check if any two sides are equal
    else if(side1 == side2 || side2 == side3 || side1 == side3) {
        cout << "The triangle is isosceles.";  // Output that the triangle is isosceles
    }
    // If no sides are equal, the triangle is scalene
    else {
        cout << "The triangle is scalene.";  // Output that the triangle is scalene
    }

    return 0;  // Return 0 to indicate successful execution
}
