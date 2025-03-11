#include <iostream>
#include <stack>

using namespace std;

void displayMenu() {
    cout << "[A] Push Data\n";
    cout << "[B] Pop Data\n";
    cout << "[C] Show Top\n";
    cout << "[D] Show Size\n";
    cout << "[E] Quit\n";
    cout << "Enter Choice: ";
}

int main() {
    stack<int> s;
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
                s.push(value);
                cout << "Value pushed.\n";
                break;
            case 'B':
            case 'b':
                if (!s.empty()) {
                    s.pop();
                    cout << "Value popped.\n";
                } else {
                    cout << "Stack is empty.\n";
                }
                break;
            case 'C':
            case 'c':
                if (!s.empty()) {
                    cout << "Top value: " << s.top() << "\n";
                } else {
                    cout << "Stack is empty.\n";
                }
                break;
            case 'D':
            case 'd':
                cout << "Stack size: " << s.size() << "\n";
                break;
            case 'E':
            case 'e':
                cout << "Quitting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 'E' && choice != 'e');

    return 0;
}