#include <iostream>
#include <queue>

using namespace std;

void displayMenu() {
    cout << "[A] Push Data\n";
    cout << "[B] Pop Data\n";
    cout << "[C] Show Front\n";
    cout << "[D] Show Back\n";
    cout << "[E] Show Size\n";
    cout << "[F] Quit\n";
    cout << "Enter Choice: ";
}

int main() {
    queue<int> q;
    char choice;
    int value;

    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 'A':
            case 'a':
                cout << "Enter value to push: ";
                cin >> value;
                q.push(value);
                cout << "Value pushed.\n";
                break;
            case 'B':
            case 'b':
                if (!q.empty()) {
                    q.pop();
                    cout << "Value popped.\n";
                } else {
                    cout << "Queue is empty.\n";
                }
                break;
            case 'C':
            case 'c':
                if (!q.empty()) {
                    cout << "Front value: " << q.front() << "\n";
                } else {
                    cout << "Queue is empty.\n";
                }
                break;
            case 'D':
            case 'd':
                if (!q.empty()) {
                    cout << "Back value: " << q.back() << "\n";
                } else {
                    cout << "Queue is empty.\n";
                }
                break;
            case 'E':
            case 'e':
                cout << "Queue size: " << q.size() << "\n";
                break;
            case 'F':
            case 'f':
                cout << "Quitting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 'F' && choice != 'f');

    return 0;
}