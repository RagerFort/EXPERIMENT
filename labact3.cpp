#include<iostream>                  
using namespace std;

int main() {
    int num[10];
    int search;
    bool flag = false;

    //INPUT FOR ARRAY
    for(int i = 0; i < 10; i++) {
        cout << "Enter a number: ";
        cin >> num[i];
    }

    //SEQUENTIAL SEARCH
    cout << "Enter value to search: ";
    cin >> search;
    int index = -1;
    for(int i = 0; i < 10; i++) {
        if (search == num[i]) {
            index = i;
            flag = true;
            break;
        }
    }

    //OUTPUT
    if (flag)
        cout << "Value " << search << " is at index " << index << endl;
    else
        cout << "Value not found!" << endl;

    cin.get(); // Wait for user input before closing
    return 0;
}

