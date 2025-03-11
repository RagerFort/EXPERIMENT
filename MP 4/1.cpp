//PATRICK ALDE
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
    stack<int> A;
    int n;
    char choice;

   
    do {
        displayMenu();
        cin >> choice;

        switch (choice) {
            case 'A':
            case 'a':
                cout << "Input the number to push: ";
                cin >> n;
                A.push(n);
                cout << "Value pushed.\n";
                break;
            case 'B':
            case 'b':
                if (!A.empty()) {
                    A.pop();
                    cout << "Value popped.\n";
                } else {
                    cout << "Stack is empty.\n";
                }
                break;
            case 'C':
            case 'c':
                if (!A.empty()) {
                    cout << "Top value: " << A.top() << "\n";
                } else {
                    cout << "Stack is empty.\n";
                }
                break;
            case 'D':
            case 'd':
                cout << "Stack size: " << A.size() << "\n";
                break;
            case 'E':
            case 'e':
                cout << "Quitting...\n";
                break;
            default:
                cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 'E' && choice != 'e');

    cout << "Contents of stack: " << endl;
    while (!A.empty()) {
        cout << A.top() << "\t";
        A.pop();
    }
    cout << endl;

    cout << system("pause");
    return 0;
}