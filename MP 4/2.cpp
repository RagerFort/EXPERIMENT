#include <iostream>
#include <queue>
using namespace std;

// Function to display the menu
void displayMenu() {
    cout << "[A] Push Data\n";
    cout << "[B] Pop Data\n";
    cout << "[C] Show Front\n";
    cout << "[D] Show Back\n";
    cout << "[E] Show Size\n";
    cout << "[F] Quit\n";
    cout << "Enter Choice: ";
}

// Function to push data onto the queue
void pushData(queue<int>& q) {
    int value;
    cout << "Enter value to push: ";
    cin >> value;
    q.push(value);
    cout << "Value pushed.\n";
}

// Function to pop data from the queue
void popData(queue<int>& q) {
    if (!q.empty()) {
        q.pop();
        cout << "Value popped.\n";
    } else {
        cout << "Queue is empty.\n";
    }
}

// Function to show the front value of the queue
void showFront(queue<int>& q) {
    if (!q.empty()) {
        cout << "Front value: " << q.front() << "\n";
    } else {
        cout << "Queue is empty.\n";
    }
}

// Function to show the back value of the queue
void showBack(queue<int>& q) {
    if (!q.empty()) {
        cout << "Back value: " << q.back() << "\n";
    } else {
        cout << "Queue is empty.\n";
    }
}

// Function to show the size of the queue
void showSize(queue<int>& q) {
    cout << "Queue size: " << q.size() << "\n";
}

int main() {
    queue<int> q; // Initialize a queue of integers
    char choice;  // Variable to store user choice

    do {
        displayMenu(); // Display the menu to the user
        cin >> choice; // Get the user's choice

        switch (choice) {
            case 'A':
            case 'a':
                pushData(q); // Push data onto the queue
                break;
            case 'B':
            case 'b':
                popData(q); // Pop data from the queue
                break;
            case 'C':
            case 'c':
                showFront(q); // Show the front value of the queue
                break;
            case 'D':
            case 'd':
                showBack(q); // Show the back value of the queue
                break;
            case 'E':
            case 'e':
                showSize(q); // Show the size of the queue
                break;
            case 'F':
            case 'f':
                cout << "Quitting...\n"; // Quit the program
                break;
            default:
                cout << "Invalid choice. Please try again.\n"; // Handle invalid choices
        }
    } while (choice != 'F' && choice != 'f'); // Continue until the user chooses to quit

    return 0; // End of the program
}