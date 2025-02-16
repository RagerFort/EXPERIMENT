#include<iostream>
using namespace std;

int main()
{
    int a[15]; // Declare an array of 15 integers
    int ctr; // Declare an integer variable for the loop counter

    // Loop to read 15 integers from the user
    for(ctr=0; ctr<=14; ctr++)
    {
        cout << "Enter any Number = "; // Prompt the user to enter a number
        cin >> a[ctr]; // Read the number and store it in the array
    }

    cout << "LIST OF EVEN NUMBERS" << endl; // Print a message indicating the output is a list of even numbers

    // Loop to print the even integers
    for(ctr=0; ctr<=14; ctr++)
        if(a[ctr] % 2 == 0)
            cout << a[ctr] << endl; // Print each even integer from the array

    return 0; // Return 0 to indicate successful execution
}
