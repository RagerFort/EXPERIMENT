#include <iostream>
#include <iomanip>
using namespace std;

double calculatedRetail(double cost, double markup) { // Function to calculate the retail price
    return cost + (cost * markup / 100); //
}

int main() {
    double cost, markup;
    cout << "Enter the item's wholesale cost: ";
    cin >> cost;
    cout << "Enter the item's markup percentage: ";
    cin >> markup;

    double retailPrice = calculatedRetail(cost, markup);
    cout << "The item's retail price is: " << fixed << setprecision(2) << retailPrice << endl;

    return 0;
}