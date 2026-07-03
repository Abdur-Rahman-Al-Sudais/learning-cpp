 #include <iostream>

using namespace std;

int main(){
    int hour;


    cout << "Enter current hourr(0-23): ";
    cin >> hour;

    if (hour >= 8 && hour <= 18){
        cout << "Shop is open.";
    }else{
        cout << "Shop is closed.";
    }
     
    return 0;
}