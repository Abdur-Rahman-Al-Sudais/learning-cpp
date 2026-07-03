 #include <iostream>
 #include <string>

using namespace std;

int main(){
    int choice;
    double price;
    string TeaType;
    cout << "Select your tea:\n";
    cout << "1. Green Tea\n";
    cout << "2. Black Tea\n";
    cout << "3. Oolong Tea\n";
    cin >> choice;

     switch (choice) {
        case 1:
            price = 2;
            TeaType = "Green";
            break;
        case 2:
            price = 3;
            TeaType = "Black";
            break;
        case 3:
            price = 4;
            TeaType = "Oolong";
            break;
        default:
            cout << "Invalid code.";
            return 0; 
    }

    cout << "Tea Type: " << TeaType << "\nTea Price: " << price << '$';

    return 0;
}