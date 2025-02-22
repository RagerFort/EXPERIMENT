#include <iostream>
#include <iomanip>
using namespace std;

double Square(double side) { // function to calculate the perimeter of a square
    return 4 * side; 
}

double Rectangle(double length, double width) { // function to calculate the perimeter of a rectangle
    return 2 * (length + width);
}

double Circle(double radius) { // function to calculate the perimeter of a circle
    return 2 * 3.14159 * radius;
}

int main() { // Main function
    double side, length, width, radius; // variables for side, length, width, and radius
    cout << "Enter the side of the square: "; // Input for the side of the square
    cin >> side; // Store the input in the variable side
    cout << "Perimeter of the square: " << fixed << setprecision(2) << Square(side) << endl;

    cout << "Enter the length and width of the rectangle: "; // Input for the length and width of the rectangle
    cin >> length >> width; // Store the input in the variables length and width
    cout << "Perimeter of the rectangle: " << Rectangle(length, width) << endl; // Output the perimeter of the rectangle

    cout << "Enter the radius of the circle: "; // Input for the radius of the circle
    cin >> radius; // Store the input in the variable radius
    cout << "Perimeter of the circle: " << Circle(radius) << endl; // Output the perimeter of the circle

    return 0;
}