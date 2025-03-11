#include <iostream>
#include <queue>

void displayMenu() {
    std::cout << "[A] Push Data\n";
    std::cout << "[B] Pop Data\n";
    std::cout << "[C] Show Front\n";
    std::cout << "[D] Show Back\n";
    std::cout << "[E] Show Size\n";
    std::cout << "[F] Quit\n";
    std::cout << "Enter Choice: ";
}

int main() {
    std::queue<int> q;
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
                q.push(value);
                std::cout << "Value pushed.\n";
                break;
            case 'B':
            case 'b':
                if (!q.empty()) {
                    q.pop();
                    std::cout << "Value popped.\n";
                } else {
                    std::cout << "Queue is empty.\n";
                }
                break;
            case 'C':
            case 'c':
                if (!q.empty()) {
                    std::cout << "Front value: " << q.front() << "\n";
                } else {
                    std::cout << "Queue is empty.\n";
                }
                break;
            case 'D':
            case 'd':
                if (!q.empty()) {
                    std::cout << "Back value: " << q.back() << "\n";
                } else {
                    std::cout << "Queue is empty.\n";
                }
                break;
            case 'E':
            case 'e':
                std::cout << "Queue size: " << q.size() << "\n";
                break;
            case 'F':
            case 'f':
                std::cout << "Quitting...\n";
                break;
            default:
                std::cout << "Invalid choice. Please try again.\n";
        }
    } while (choice != 'F' && choice != 'f');

    return 0;
}