#include <iostream>
using namespace std;

int main() {
    int num1, num2;
    cout << "Enter two integers: ";
    cin >> num1 >> num2;

    if (num1 > 0 && num2 > 0) {
        cout << "Both are positive" << endl;
    } else if (num1 > 0 || num2 > 0) {
        cout << "One is positive" << endl;
    } else {
        cout << "None are positive" << endl;
    }

    return 0;
}