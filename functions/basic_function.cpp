#include <iostream>
#include <string>

using namespace std;

string login(string username){
    cout << username << " Logged in Successfully." << endl;
}

//declaration of function
int checkTemp(int temp);


string makeTea(string teaType = "Green Tea"){
    cout << "Making " << teaType << "..." << endl;
}



int main(){
    login("Jhon"); // Calling a function

    makeTea();

    int temp = checkTemp(50);
    cout << temp << endl;

    return 0;
}

// defination of function
int checkTemp(int temp){
    return temp;
}