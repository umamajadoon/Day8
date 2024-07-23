#include <iostream>
using namespace std;

int main() {
    double hours, rate, grossPay;
    cout << "Enter hours worked: ";
    cin >> hours;
    cout << "Enter hourly rate: ";
    cin >> rate;

    if (hours > 40) {
        grossPay = 40 * rate + (hours - 40) * rate * 1.5;
    } else {
        grossPay = hours * rate;
    }

    cout << "Gross pay: " << grossPay << endl;
    return 0;
}