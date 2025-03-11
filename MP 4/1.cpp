#include <iostream>
#include <stack>

void displayMenu() {
    std::cout << "[A] Push Data\n";
    std::cout << "[B] Pop Data\n";
    std::cout << "[C] Show Top\n";
    std::cout << "[D] Show Size\n";
    std::cout << "[E] Quit\n";
    std::cout << "Enter Choice: ";
}

int main() {
    std::stack<int> s;
    char choice;
    int value;

    do {
        displayMenu();
        std::cin >> choice;

        switch (choice) {
            case 'A':
            case 'a':
                std::cout << "Enter value to push: ";
                std::cin >> value;
                s.push(value);
                std::cout << "Value pushed.\n";
                break;
            case 'B':
            case 'b':
                if (!s.empty()) {
                    s.pop();
                    std::cout << "Value popped.\n";
                } else {
                    std::cout << "Stack is empty.\n";
                }
                break;
            case 'C':
            case 'c':
                if (!s.empty()) {
                    std::cout << "Top value: " << s.top() << "\n";
                } else {
                    std::cout << "Stack is empty.\n";
                }
                break;
            case 'D':
            case 'd':
                std::cout << "Stack size: " << s.size() << "\n";
                break;
            case 'E':
            case 'e':
                std::cout << "Quitting...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 'E' && choice != 'e');

    return 0;
}