#include <iostream>
#include <string>

using namespace std;

int main(){
    int numberOfCups;
    string badge;

    cout << "Enter Numbers of Cups You have Bought: ";
    cin >> numberOfCups;

  
    if (numberOfCups < 20 && numberOfCups > 10 )
    {
        badge = "SILVER";
    }else   if (numberOfCups > 20)
    {
        badge = "GOLD";
    }

    if (badge == "")
    {
    cout << "You didn't have any badge."; 
    }else{
    cout << "You had recieved \""<< badge << "\" badge.";
    }
}