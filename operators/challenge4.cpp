#include <iostream>
#include <string>

using namespace std;

int main(){
    string input;
    int numberOfCups;

    cout << "Are you a student?\nType 'YES' if you are otherwise Type 'NO': ";
    cin >> input;

  
    if (input == "YES" || input == "yes")
    {
        cout << "Congratulations! You have recieved a tea supscription discount."; 
    }else
    {
    cout << "How much cups do you have bought?";
    cin >> numberOfCups;
    if (numberOfCups > 15)
    {
        cout << "Congratulations! You have recieved a tea supscription discount."; 
    }else{
        cout << "Sorry! You didn't have any supscription discount."; 
    }
    }
}