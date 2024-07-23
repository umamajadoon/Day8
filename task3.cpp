#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num >= 10 && num <= 20) {
        cout << "Within range" << endl;
    } else if (num < 10) {
        cout << "Less than 10" << endl;
    } else {
        cout << "Greater than 20" << endl;
    }

    return 0;
}