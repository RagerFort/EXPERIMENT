#include <iostream>
#include <iomanip>
using namespace std;

double perimeterSquare(double side) {
    return 4 * side;
}

double perimeterRectangle(double length, double width) {
    return 2 * (length + width);
}

double perimeterCircle(double radius) {
    return 2 * 3.14159 * radius;
}

int main() {
    double side, length, width, radius;
    cout << "Enter the side of the square: ";
    cin >> side;
    cout << "Perimeter of the square: " << fixed << setprecision(2) << perimeterSquare(side) << endl;

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Perimeter of the rectangle: " << perimeterRectangle(length, width) << endl;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Perimeter of the circle: " << perimeterCircle(radius) << endl;

    return 0;
}