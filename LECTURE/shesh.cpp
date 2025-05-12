#include <iostream>
#include <string>
using namespace std;

struct boxesApple {
    int pcs;
    string color;
    double prices;

    // Member function to set data
    void setData(int a, string b, double c) {
        pcs = a;
        color = b;
        prices = c;
    }
};

int main() {
    boxesApple boxA;
    boxA.setData(25, "red", 5.25); // Set data for boxA
    cout << boxA.color << endl; 
       // Output the color of boxA
    return 0;
}