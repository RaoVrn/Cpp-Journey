#include<iostream>  // Include the iostream library for input and output
using namespace std;  // Use the standard namespace

int main() {
    char c;  // Declare a character variable to store the user's input
    int isLowercaseVowel, isUppercaseVowel;  // Declare two integer variables to store whether the character is a lowercase or uppercase vowel

    cout << "Enter the character: ";  // Prompt the user to enter a character
    cin >> c;  // Read the character from the user

    // Check if the character is a lowercase vowel
    isLowercaseVowel = (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u');
    // Check if the character is an uppercase vowel
    isUppercaseVowel = (c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U');

    // If the character is either a lowercase or uppercase vowel
    if(isLowercaseVowel || isUppercaseVowel) {
        cout << "The character is a vowel." << endl;  // Output that the character is a vowel
    }
    else {
        cout << "The character is a consonant." << endl;  // Output that the character is a consonant
    }

    return 0;  // Return 0 to indicate successful execution
}
