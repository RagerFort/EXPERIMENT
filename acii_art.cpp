#include <iostream>
using namespace std;
int main() {
    const int n = 5; 

    // Upper part of the star
    for (int i = 0; i < n; i++) {
        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            cout << " ";
        }
        // Print stars
        for (int j = 0; j < 2 * i + 1; j++) {
            cout << "*";
        }
        cout << endl; // move to next line
    }

    // Lower part of the diamond
    for (int i = n - 2; i >= 0; i--) { // start from second last row
        // Print spaces
        for (int j = 0; j < n - i - 1; j++) {
            std::cout << " ";
        }
        // Print stars
        for (int j = 0; j < 2 * i + 1; j++) {
            std::cout << "*";
        }
        std::cout << std::endl; // move to next line
    }

    return 0;
}