#include <iostream>

using namespace std;

int main(){
    int teaBags;

    cout << "Enter number of tea bags: ";
    cin >> teaBags;

    if (teaBags < 20){
        teaBags += 10;
    }

    cout << "Total Tea Bags: " << teaBags;
}