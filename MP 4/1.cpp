// PATRICK ALDE
#include <iostream>
#include <stack> // Include the stack library
#include <string> // Include the string library
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
    A.push(n); // Push the value to the stack
    cout << "Value pushed.\n"; // Notify the user that the value has been pushed
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
    while (!A.empty()) { // Loop through the stack until it is empty
        cout << A.top() << "\t"; // Display the top value of the stack
        A.pop(); // Pop the top value of the stack
    }
    cout << endl;
}

int main() { // Main function
    stack<string> A; 
    char choice;

    do {
        Menu(); // Display the menu
        cin >> choice;

        switch (choice) { // Switch statement to determine the choice of the user
            case 'A':
            case 'a':
                pushData(A); // Use the pushData function
                break;
            case 'B':
            case 'b':
                popData(A); // Use the popData function
                break;
            case 'C':
            case 'c':
                showTop(A); // Use the showTop function
                break;
            case 'D':
            case 'd':
                showSize(A); // Use the showSize function
                break;
            case 'E':
            case 'e':
                cout << "Exeting the program and showing the content of the stack\n"; 
                break;
            default:
                cout << "Invalid choice. Please try again.\n"; // Prompt the user to try again
        }
    } while (choice != 'E' && choice != 'e');

    displayStackContents(A);

    cout << system("pause");
    return 0;
}