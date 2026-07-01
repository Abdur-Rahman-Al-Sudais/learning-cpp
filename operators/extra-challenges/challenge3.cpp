#include <iostream>

using namespace std;

int main(){
    int cups;
    char isMember;
    bool hasDiscount = false;

    cout << "How much cups you have bought?";
    cin >> cups;

    cout << "Are you member for more than a year?";
    cin >> isMember;

      if (cups > 12){
        hasDiscount = true;
    }

    if (isMember == 'y'){
        hasDiscount = true;
    }

    if (hasDiscount){
        cout << "Congratulations! You have got a discount.";
    }else{
        cout << "Sorry! You did not have any discount.";

    }
}