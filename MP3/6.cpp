#include <iostream>
#include <iomanip>
using namespace std;

void showKilometers(double meters) { // Function to convert meters to kilometers
    cout << meters << " meters is " << meters * 0.001 << " kilometers.\n" << endl; // Output the conversion
}

void showInches(double meters) { // Function to convert meters to inches
    cout << meters << " meters is " << meters * 39.37 << " inches.\n" << endl; // Output the conversion
}

void showFeet(double meters) { // Function to convert meters to feet
    cout << meters << " meters is " << meters * 3.281 << " feet.\n" << endl; // Output the conversion
}

void showMenu() { // Function to display the menu
    cout << "1. Convert to kilometers" << endl; 
    cout << "2. Convert to inches" << endl; 
    cout << "3. Convert to feet" << endl;
    cout << "4. Quit the program\n" << endl;
}

int main() { // Main function
    double meters; // Variable for distance in meters
    int choice; // Variable for the user's choice

    cout << "Enter a distance in meters: "; // Input for the distance in meters
    cin >> meters; //assign the input to the variable meters

    if (meters < 0) { // Check if the distance is negative
        cout << "Distance cannot be negative." << endl; // Output an error message
        return 1; // Exit the program with an error code
    }

    do { // Loop to display the menu and get the user's choice
        showMenu(); // Display the menu
        cout << "Enter your choice: "; // Input for the user's choice
        cin >> choice; // Store the input in the variable choice

        switch (choice) { // Switch statement based on the user's choice
            case 1: // Case for converting to kilometers
                showKilometers(meters); 
                break;
            case 2: // Case for converting to inches
                showInches(meters);
                break;
            case 3: // Case for converting to feet
                showFeet(meters);
                break;
            case 4: // Case for quitting the program
                cout << "Bye!" << endl;
                break;
            default: // Default case for invalid choice
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4); // Repeat the loop until the user chooses to quit

    return 0;
}