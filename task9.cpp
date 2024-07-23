#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num > 0 && num % 2 == 0) {
        cout << "Positive and even" << endl;
    } else if (num > 0) {
        cout << "Positive but odd" << endl;
    } else {
        cout << "Negative" << endl;
    }

    return 0;
}