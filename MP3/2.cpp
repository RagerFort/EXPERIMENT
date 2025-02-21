#include <iostream>
#include <iomanip>
#include <cmath>
using namespace std;

double Average(double num1, double num2) {
    return (num1 + num2) / 2;
}

double SumOfSquares(double num1, double num2) {
    return pow(num1, 2) + pow(num2, 2);
}

double SquareOfSums(double num1, double num2) {
    return pow((num1 + num2), 2);
}

int main() {
    double num1, num2;
    cout << "Enter two numbers: ";
    cin >> num1 >> num2;

    cout << "Average: " << fixed << setprecision(2) <<             Average(num1, num2) << endl;
    cout << "Sum of Squares: " << SumOfSquares(num1, num2) << endl;
    cout << "Square of Sums: " << SquareOfSums(num1, num2) << endl;

    return 0;
}