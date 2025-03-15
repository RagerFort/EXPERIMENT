// PATRICK ALDE
#include <iostream>
#include <stack>
#include <string> // Include string header
using namespace std;

// Function to display the menu
void Menu() {
    cout << "[A] Push Data\n";
    cout << "[B] Pop Data\n";
    cout << "[C] Show Top\n";
    cout << "[D] Show Size\n";
    cout << "[E] Quit\n";
    cout << "Enter Choice: ";
}

// Function to push data onto the stack
void pushData(stack<string>& A) {
    string n;
    cout << "Input the string to push: ";
    cin >> n;
    A.push(n);
    cout << "Value pushed.\n";
}

// Function to pop data from the stack
void popData(stack<string>& A) {
    if (!A.empty()) {
        A.pop();
        cout << "Value popped.\n";
    } else {
        cout << "Stack is empty.\n";
    }
}

// Function to show the top value of the stack
void showTop(stack<string>& A) {
    if (!A.empty()) {
        cout << "Top value: " << A.top() << "\n";
    } else {
        cout << "Stack is empty.\n";
    }
}

// Function to show the size of the stack
void showSize(stack<string>& A) {
    cout << "Stack size: " << A.size() << "\n";
}

// Function to display the contents of the stack
void displayStackContents(stack<string>& A) {
    cout << "Contents of stack: " << endl;
    while (!A.empty()) {
        cout << A.top() << "\t";
        A.pop();
    }
    cout << endl;
}

int main() {
    stack<string> A; 
    char choice;

    do {
        Menu();
        cin >> choice;

        switch (choice) {
            case 'A':
            case 'a':
                pushData(A);
                break;
            case 'B':
            case 'b':
                popData(A);
                break;
            case 'C':
            case 'c':
                showTop(A);
                break;
            case 'D':
            case 'd':
                showSize(A);
                break;
            case 'E':
            case 'e':
                cout << "Loading...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 'E' && choice != 'e');

    displayStackContents(A);

    cout << system("pause");
    return 0;
}