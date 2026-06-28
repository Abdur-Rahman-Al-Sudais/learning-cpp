#include <iostream>

using namespace std;

int main(){
    int numberOfTeaBags;

    cout << "Enter Numbers of Tea Bags You have: ";
    cin >> numberOfTeaBags;

    if (numberOfTeaBags < 10)
    {
       numberOfTeaBags += 5;
    }

    cout << "Number of Tea Bags: " << numberOfTeaBags;
}