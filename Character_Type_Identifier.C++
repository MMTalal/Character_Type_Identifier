#include <iostream>
using namespace std;

int main() {
    // Display a welcome message and prompt the user to input a character
    cout << "Test your letter if it is Number, Capital, Small or Spatial character" << endl;
    cout << "Input your character please: " << endl;
    
    // Declare a variable to store the user's input
    char letter;
    cin >> letter; // Read the character input from the user
    
    // Check if the character is a number (0-9)
    if (letter >= '0' && letter <= '9') 
    {
        // If the character is a number, display this message
        cout << "The character you chose \"" << letter << "\", is a Number." << endl;
    }
    
    // Check if the character is a lowercase letter (a-z)
    else if (letter >= 'a' && letter <= 'z') 
    {
        // If the character is a lowercase letter, display this message
        cout << "The character you chose \"" << letter << "\", is a small character." << endl;
    }
    
    // Check if the character is an uppercase letter (A-Z)
    else if (letter >= 'A' && letter <= 'Z') 
    {
        // If the character is an uppercase letter, display this message
        cout << "The character you chose \"" << letter << "\", is a capital character." << endl;
    }
    
    // If the character is not a number, lowercase letter, or uppercase letter, it must be a special character
    else 
    {
        // If the character is a special character, display this message
        cout << "The character you chose \"" << letter << "\", is a spatial character." << endl;
    }
    
    // Display a goodbye message before exiting the program
    cout << "Exiting the program. Goodbye!" << endl;
    
    // End of the program
    return 0;
}