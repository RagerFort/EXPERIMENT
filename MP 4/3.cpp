#include <iostream>
#include <queue>
using namespace std;
int main() {
    char choice;

    cout << "[A] Push Data\n";
    cout << "[B] Pop Data\n";
    cout << "[C] Show Front\n";
    cout << "[D] Show Back\n";
    cout << "[E] Show Size\n";
    cout << "[F] Quit\n";
    cout << "Enter Choice: ";

    cin >> choice;

    switch (choice) {
        case 'A':
        case 'a':
            cout << "You chose option A." << endl;
            // Add commands for option A here
            break;
        case 'B':
        case 'b':
            cout << "You chose option B." << endl;
            // Add commands for option B here
            break;
        case 'C':
        case 'c':
            cout << "You chose option C." << endl;
            // Add commands for option C here
            break;
        case 'D':
        case 'd':
            cout << "You chose option D." << endl;
            // Add commands for option D here
            break;
        case 'E':
        case 'e':
            cout << "You chose option E." << endl;
            // Add commands for option E here
            break;
        default:
            cout << "Invalid choice." << endl;
            break;
    }

    return 0;
}