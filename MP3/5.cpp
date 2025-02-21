#include <iostream>
#include <iomanip>
using namespace std;

const double LaborPerHour = 120.00;
const double SqftPerGallon = 115.0;
const double HrsPerGallon = 8.0;

double Gallons(double totalSqFt) {
    return totalSqFt / SqftPerGallon;
}

double LaborHours(double totalSqFt) {
    return (totalSqFt / SqftPerGallon) * HrsPerGallon;
}

double PaintCost(double gallons, double pricePerGallon) {
    return gallons * pricePerGallon;
}

double LaborCost(double laborHours) {
    return laborHours * LaborPerHour;
}

double TotalCost(double paintCost, double laborCost) {
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

    double gallons = Gallons(totalSqFt);
    double laborHours = LaborHours(totalSqFt);
    double paintCost = PaintCost(gallons, pricePerGallon);
    double laborCost = LaborCost(laborHours);
    double totalCost = TotalCost(paintCost, laborCost);

    cout << "Gallons of paint required: " << fixed << setprecision(2) << gallons << endl;
    cout << "Hours of labor required: " << laborHours << endl;
    cout << "Cost of the paint: P" << paintCost << endl;
    cout << "Labor charges: P" << laborCost << endl;
    cout << "Total cost of the paint job: P" << totalCost << endl;

    return 0;
}