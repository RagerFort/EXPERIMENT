#include <iostream>
#include <iomanip>
using namespace std;

const double LaborPerHour = 120.00; // variable for labor cost per hour
const double SqftPerGallon = 115.0; // variable for square feet per gallon
const double HrsPerGallon = 8.0;  // variable for hours per gallon

double Gallons(double totalSqFt) { // function to calculate the number of gallons of paint required
    return totalSqFt / SqftPerGallon;
}

double LaborHours(double totalSqFt) { // function to calculate the number of hours of labor required
    return (totalSqFt / SqftPerGallon) * HrsPerGallon;
}

double PaintCost(double gallons, double pricePerGallon) { // function to calculate the cost of the paint
    return gallons * pricePerGallon;
}

double LaborCost(double laborHours) { // function to calculate the labor charges
    return laborHours * LaborPerHour;
}

double TotalCost(double paintCost, double laborCost) { // function to calculate the total cost of the paint job
    return paintCost + laborCost;
}

int main() { // Main function
    int rooms; // variable for the number of rooms
    double pricePerGallon, totalSqFt = 0.0, sqFt; // variables for price per gallon, total square feet, and square feet

    cout << "Input the number of rooms to be painted: "; // Input for the number of rooms
    cin >> rooms; // Store the input in the variable rooms
    cout << "Input the price of the paint per gallon: "; // Input for the price per gallon
    cin >> pricePerGallon; // Store the input in the variable pricePerGallon

    for (int i = 1; i <= rooms; ++i) { // loop to get the square feet of wall space for each room
        cout << "Input the square feet of wall space in room " << i << ": "; // Input for the square feet of wall space
        cin >> sqFt; // Store the input in the variable sqFt
        totalSqFt += sqFt; // Add the square feet to the total square feet
    }
    // Calculate the required values
    double gallons = Gallons(totalSqFt);
    double laborHours = LaborHours(totalSqFt);
    double paintCost = PaintCost(gallons, pricePerGallon);
    double laborCost = LaborCost(laborHours);
    double totalCost = TotalCost(paintCost, laborCost);
    // Output the results with fixed precision
    cout << "\nGallons of paint required: " << fixed << setprecision(2) << gallons << endl;
    cout << "Hours of labor required: " << fixed << setprecision(2) << laborHours << endl;
    cout << "Cost of the paint: P" << fixed << setprecision(2) << paintCost << endl;
    cout << "Labor charges: P" << fixed << setprecision(2) << laborCost << endl;
    cout << "Total cost of the paint job: P" << fixed << setprecision(2) << totalCost << endl;

    return 0;
}