#include <iostream>

using namespace std;

void changeValue(int value)
{
    value += 2;
    cout << "Value under fn: " << value << endl;
}

int main()
{
    int value = 2;

    changeValue(value);
    cout << "Original Value: " << value << endl;

    return 0;
}