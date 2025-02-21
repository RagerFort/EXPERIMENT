#include <iostream>
#include <iomanip>
using namespace std;

const double LABOR_COST_PER_HOUR = 120.00;
const double SQUARE_FEET_PER_GALLON = 115.0;
const double HOURS_PER_GALLON = 8.0;

double calculateGallons(double totalSqFt) {
    return totalSqFt / SQUARE_FEET_PER_GALLON;
}

double calculateLaborHours(double totalSqFt) {
    return (totalSqFt / SQUARE_FEET_PER_GALLON) * HOURS_PER_GALLON;
}

double calculatePaintCost(double gallons, double pricePerGallon) {
    return gallons * pricePerGallon;
}

double calculateLaborCost(double laborHours) {
    return laborHours * LABOR_COST_PER_HOUR;
}

double calculateTotalCost(double paintCost, double laborCost) {
    return paintCost + laborCost;
}

int main() {
    int rooms;
    double pricePerGallon, totalSqFt = 0.0, sqFt;

    cout << "Enter the number of rooms to be painted: ";
    cin >> rooms;
    cout << "Enter the price of the paint per gallon: ";
    cin >> pricePerGallon;

    for (int i = 1; i <= rooms; ++i) {
        cout << "Enter the square feet of wall space in room " << i << ": ";
        cin >> sqFt;
        totalSqFt += sqFt;
    }

    double gallons = calculateGallons(totalSqFt);
    double laborHours = calculateLaborHours(totalSqFt);
    double paintCost = calculatePaintCost(gallons, pricePerGallon);
    double laborCost = calculateLaborCost(laborHours);
    double totalCost = calculateTotalCost(paintCost, laborCost);

    cout << "Gallons of paint required: " << fixed << setprecision(2) << gallons << endl;
    cout << "Hours of labor required: " << laborHours << endl;
    cout << "Cost of the paint: P" << paintCost << endl;
    cout << "Labor charges: P" << laborCost << endl;
    cout << "Total cost of the paint job: P" << totalCost << endl;

    return 0;
}