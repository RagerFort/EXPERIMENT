#include <iostream>
#include <iomanip>
using namespace std;

void showKilometers(double meters) {
    cout << meters << " meters is " << meters * 0.001 << " kilometers." << endl;
}

void showInches(double meters) {
    cout << meters << " meters is " << meters * 39.37 << " inches." << endl;
}

void showFeet(double meters) {
    cout << meters << " meters is " << meters * 3.281 << " feet." << endl;
}

void showMenu() {
    cout << "1. Convert to kilometers" << endl;
    cout << "2. Convert to inches" << endl;
    cout << "3. Convert to feet" << endl;
    cout << "4. Quit the program" << endl;
}

int main() {
    double meters;
    int choice;

    cout << "Enter a distance in meters: ";
    cin >> meters;

    if (meters < 0) {
        cout << "Distance cannot be negative." << endl;
        return 1;
    }

    do {
        showMenu();
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                showKilometers(meters);
                break;
            case 2:
                showInches(meters);
                break;
            case 3:
                showFeet(meters);
                break;
            case 4:
                cout << "Bye!" << endl;
                break;
            default:
                cout << "Invalid choice. Please try again." << endl;
        }
    } while (choice != 4);

    return 0;
}