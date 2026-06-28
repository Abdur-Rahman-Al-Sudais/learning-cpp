#include <iostream>
#include <string>

using namespace std;

int main(){
    string teaName;
    int teaPrice = 55;
    char teaRating;
    float teaQuantity;
    float pricePerKilogram;



    cout << "Enter Tea Name:";

    cout << "Enter Tea Name:";
    getline(cin, teaName);

    cout << "Enter Tea Quantity (Kilogram):";
    cin >> teaQuantity;

    cout << "Enter Tea Rating:";
    cin >> teaRating;

    pricePerKilogram = teaPrice * teaQuantity;

    cout << "Tea Name: " <<'"' << teaName << '"' << endl << "Tea Quantity (Kilogram): "<< teaQuantity << endl << "Single Unit Tea Price: "<< teaPrice << endl << "Total Cost: " << pricePerKilogram;
}