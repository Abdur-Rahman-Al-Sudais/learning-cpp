#include <iostream>

using namespace std;

int main(){
    int cups;
    cout << "Enter number of cups: ";
    cin >> cups;

    while (cups > 0){
        cups--;
        cout << "Serving a cup of tea\n" << cups << " remaining" << endl;
    }

    cout << "All cups are served.";

    return 0;
}