#include <iostream>
#include <iomanip>
using namespace std;

double Average(double num1, double num2) { // Function to calculate the average of two numbers
    return (num1 + num2) / 2; // Formula for calculating the average
}

double SumOfSquares(double num1, double num2) { // Function to calculate the sum of squares of two numbers
    return (num1 * num1) + (num2 * num2); // Formula for calculating the sum of squares
}

double SquareOfSums(double num1, double num2) { // Function to calculate the square of the sum of two numbers
    double sum = num1 + num2; // Calculate the sum of the two numbers
    return sum * sum; // Formula for calculating the square of the sum
}

int main() { // Main function
    double num1, num2; // Variables for two numbers
    cout << "Enter two numbers: "; // Input for two numbers
    cin >> num1 >> num2; // Store the input in the variables num1 and num2
    // Output the results
    cout << "Average: " << fixed << setprecision(2) << Average(num1, num2) << endl; // Output the average
    cout << "Sum of Squares: " << SumOfSquares(num1, num2) << endl; // Output the sum of squares
    cout << "Square of Sums: " << SquareOfSums(num1, num2) << endl; // Output the square of sums

    return 0;
}