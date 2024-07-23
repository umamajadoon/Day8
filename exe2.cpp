#include <iostream>
#include <string>
#include <stdexcept>
using namespace std;

double getNumericInput(const string& prompt) {
    string input;
    double value;
    cout << prompt;
    cin >> input;

    try {
        value = stod(input);
    } catch (invalid_argument&) {
        throw runtime_error("Error: Please enter numeric input");
    }

    return value;
}

int main() {
    try {
        double hours = getNumericInput("Enter Hours: ");
        double rate = getNumericInput("Enter Rate: ");
        double pay = hours * rate;
        cout << "Pay: " << pay << endl;
    } catch (runtime_error& e) {
        cout << e.what() << endl;
    }

    return 0;
}