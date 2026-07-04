#include <iostream>
#include <string>

using namespace std;

int main(){
    string response;
    
    while (true){
        cout << "Do you want more tea (type 'stop' to exit): " << endl;
        getline(cin, response);

        if (response == "stop"){
            cout << "Exiting the loop..." << endl;
            break;
        }

        cout << "Here is your another cup of tea." << endl;
    }

    return 0;
}