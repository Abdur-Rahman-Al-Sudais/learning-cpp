#include <iostream>
#include <string>

using namespace std;

int main()
{
    auto greet = [](string name)
    {
        cout << "Hello " << name;
    };

    greet("Ali");

    return 0;
}