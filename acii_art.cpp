#include <iostream>
using namespace std;
double wholesaleCost, markupPercentage;
double calculateRetail( wholesaleCost, markupPercentage) {
    return wholesaleCost + (wholesaleCost * markupPercentage / 100);
}

int main() {
    
    cout << "Enter the item's wholesale cost: ";
    cin >> wholesaleCost;
    cout << "Enter the item's markup percentage: ";
    cin >> markupPercentage;
wholesaleCost = wholesaleCost+(wholesaleCost*markupPercentage/100);
    double retailPrice = calculateRetail(wholesaleCost, markupPercentage);
    cout << "The item's retail price is: " << retailPrice << endl;

    return 0;
}