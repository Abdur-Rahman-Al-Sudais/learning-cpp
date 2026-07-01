#include <iostream>
using namespace std;

int main() {
    int stock = 5;
    int teaType;

    cout << "Enter tea type to check (1 = Green, 2 = Black, 4 = Oolong): ";
    cin >> teaType;

    if (stock & teaType) {
        cout << "That tea is in stock." << endl;
    } else {
        cout << "That tea is NOT in stock." << endl;
    }

    return 0;
}