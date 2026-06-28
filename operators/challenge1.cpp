#include <iostream>

using namespace std;

int main(){
    int cupsNumber;
    double cupPrice, totalPrice, discountedPrice;

    cout << "Enter Numbers of Cups: ";
    cin >> cupsNumber;

    cout << "Enter Cup Price: ";
    cin >> cupPrice;

    totalPrice = cupPrice * cupsNumber;

    if (totalPrice > 100)
    {
        discountedPrice = totalPrice - (totalPrice * 0.05);
        cout << "Price is: " << discountedPrice;
    }
    else
    {
        cout << "Price is: " << totalPrice;

    }
}