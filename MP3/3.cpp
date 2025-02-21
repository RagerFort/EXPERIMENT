#include <iostream>
#include <iomanip>
using namespace std;

double Square(double side) {
    return 4 * side;
}

double Rectangle(double length, double width) {
    return 2 * (length + width);
}

double Circle(double radius) {
    return 2 * 3.14159 * radius;
}

int main() {
    double side, length, width, radius;
    cout << "Enter the side of the square: ";
    cin >> side;
    cout << "Perimeter of the square: " << fixed << setprecision(2) << Square(side) << endl;

    cout << "Enter the length and width of the rectangle: ";
    cin >> length >> width;
    cout << "Perimeter of the rectangle: " << Rectangle(length, width) << endl;

    cout << "Enter the radius of the circle: ";
    cin >> radius;
    cout << "Perimeter of the circle: " << Circle(radius) << endl;

    return 0;
}