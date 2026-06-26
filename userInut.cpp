#include <iostream>
#include <string>

using namespace std;

int main(){
    string productName;
    string productQuantity;

    cout << "Enter product name:";
    getline(cin, productName);

    cout << "Enter product quantity:";
    cin >> productQuantity;

    cout << "Product name:" <<productName << endl;
    cout << "Product quantity:" << productQuantity;
}