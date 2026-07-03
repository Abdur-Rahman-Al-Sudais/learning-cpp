 #include <iostream>
 #include <string>

using namespace std;

int main(){
    string teaType;


    cout << "Enter tea type: ";
    getline(cin, teaType);

    if (teaType == "Green Tea"){
        cout << "You have ordered green tea.";
    }
     
    return 0;
}