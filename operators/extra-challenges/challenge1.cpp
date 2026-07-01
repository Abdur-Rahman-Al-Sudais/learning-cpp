#include <iostream>

using namespace std;

int main(){
    double price;
    int quantity;


    cout << "Enter each pack price: ";
    cin >> price;
    
    cout << "Enter number of packs: ";
    cin >> quantity;


    double totalPrice = price * quantity * 1.1;

    cout << "The total price (with tax) is: " << totalPrice;
}