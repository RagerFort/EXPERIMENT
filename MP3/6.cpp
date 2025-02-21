#include <iostream>
#include <iomanip>
using namespace std;

void Kilometers(double meters) {
    cout << meters << " meters is " << meters * 0.001 << " kilometers." << endl;
}

void Inches(double meters) {
    cout << meters << " meters is " << meters * 39.37 << " inches." << endl;
}

void Feet(double meters) {
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
                Kilometers(meters);
                break;
            case 2:
                Inches(meters);
                break;
            case 3:
                Feet(meters);
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