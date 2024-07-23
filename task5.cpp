#include <iostream>
using namespace std;

int main() {
    int num;
    cout << "Enter an integer: ";
    cin >> num;

    if (num < 50) {
        cout << "Small" << endl;
    } else if (num <= 100) {
        cout << "Medium" << endl;
    } else {
        cout << "Large" << endl;
    }

    return 0;
}