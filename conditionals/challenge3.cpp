 #include <iostream>

using namespace std;

int main(){
    int cups;
    double pricePerCup = 70, totalPrice, discount;

    cout << "Enter number of cups: ";
    cin >> cups;

    totalPrice = cups * pricePerCup;

    if (cups >= 10){
        if (cups >= 20){
            discount = totalPrice *  0.8;
            cout << "You have got 20% discount. " << "New Price: " << discount;
        }else{
            discount = totalPrice *  0.9;
            cout << "You have got 10% discount. " << "New Price: " << discount;
        }        
    }else{
        cout << "You have no discount. "  << "New Price: " << totalPrice;
    }
     
    return 0;
}