#include <iostream>
#include <iomanip>
using namespace std;

bool Prime(int num) { // Function to check if a number is prime
    if (num <= 1) return false; // check if the number is less than or equal to 1
    for (int i = 2; i <= num / 2; ++i) { // loop from 2 to half of the number
        if (num % i == 0) return false; // check if the number is divisible by i
    }
    return true;
}

int main() { // Main function
    int num;
    cout << "Enter an integer: "; // Input for the number
    cin >> num;

    if (Prime(num)) { // Check if the number is prime
        cout << num << " is a prime number." << endl; // Output if the number is prime
    } else {
        cout << num << " is not a prime number." << endl; // Output if the number is not prime
    }

    return 0;
}