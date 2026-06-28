#include <iostream>
#include <string>

using namespace std;

int main(){
    string teaName;
    int teaCups;

    cout << "Name Your Favorite Tea:";
    getline(cin, teaName);

    cout << "Enter number of Cups:";
    cin >> teaCups ;

    cout << "Tea Name: " <<teaName << endl << "Number of Cups: " << teaCups;
}