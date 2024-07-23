#include <iostream>
using namespace std;

int main() {
    double hours = 160;
    double factor = 0.5;
    double pay = 40 * hours * factor;

    cout << "Enter hours: " << hours << endl;
    cout << "Factor: " << factor << endl;
    cout << "Pay: " << pay << endl;

    return 0;
}