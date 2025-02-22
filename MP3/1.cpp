#include <iostream>
#include <iomanip>
using namespace std;

double calculatedRetail(double cost, double markup) { // Function to calculate the retail price
    return cost + (cost * markup / 100); //
}

int main() { // Main function
    double cost, markup; // Variables for cost and markup
    cout << "Enter the item's wholesale cost: "; 
    cin >> cost; // Input for cost
    cout << "Enter the item's markup percentage: ";
    cin >> markup; // Input for markup

    double retailPrice = calculatedRetail(cost, markup); // Calculate the retail price
    cout << "The item's retail price is: " << fixed << setprecision(2) << retailPrice << endl; // Output the retail price

    return 0;
}