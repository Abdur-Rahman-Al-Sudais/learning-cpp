#include <iostream>
#include <string>

using namespace std;

int main(){
    float teaPriceStr;

    cout << "Enter Tea Price:";
    cin >> teaPriceStr;

    float newTeaPrice = teaPriceStr * 1.10f;

    cout << "New Tea Price: " << (int) newTeaPrice;
}