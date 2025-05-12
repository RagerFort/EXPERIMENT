#include <iostream>
using namespace std;

enum Day { sunday, monday, tuesday, wednesday, thursday, friday, saturday };
enum Error { ok = 200, notFound = 404, serverError = 500 };

int main() {
    Day today;
    string inputDay;
    cout << "Enter day today: ";
    cin >> inputDay;

    if (inputDay == "sunday") {
        today = sunday;
    } else if (inputDay == "monday") {
        today = monday;
    } else if (inputDay == "tuesday") {
        today = tuesday;
    } else if (inputDay == "wednesday") {
        today = wednesday;
    } else if (inputDay == "thursday") {
        today = thursday;
    } else if (inputDay == "friday") {
        today = friday;
    } else if (inputDay == "saturday") {
        today = saturday;
    } else {
        cout << "Invalid day entered. Enum error: " << notFound << endl;
        return 1;
    }

    cout << "The value of today: " << today << endl;

    return 0;
}