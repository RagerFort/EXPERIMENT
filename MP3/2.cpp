#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double calculateAverage(double num1, double num2) {
    return (num1 + num2) / 2;
}

double calculateSumOfSquares(double num1, double num2) {
    return pow(num1, 2) + pow(num2, 2);
}

double calculateSquareOfSums(double num1, double num2) {
    return pow((num1 + num2), 2);
}

int main() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Average: " << fixed << setprecision(2) << calculateAverage(num1, num2) << endl;
    cout << "Sum of Squares: " << calculateSumOfSquares(num1, num2) << endl;
    cout << "Square of Sums: " << calculateSquareOfSums(num1, num2) << endl;

    return 0;
}