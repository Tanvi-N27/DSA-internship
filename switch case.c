#include <iostream>
using namespace std;

string compareSwitch(int a, int b) {
    int result = (a > b) ? 1 : (a < b) ? -1 : 0;

    switch (result) {
        case 1:
            return "greater";
        case -1:
            return "smaller";
        case 0:
            return "equal";
        default:
            return "";
    }
}

int main() {
    int a = 5, b = 10;
    cout << compareSwitch(a, b) << endl; // Output: smaller

    a = 15, b = 10;
    cout << compareSwitch(a, b) << endl; // Output: greater

    a = 10, b = 10;
    cout << compareSwitch(a, b) << endl; // Output: equal

    return 0;
}
