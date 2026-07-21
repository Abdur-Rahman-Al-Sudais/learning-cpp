#include <iostream>

using namespace std;

class Array
{
    int *data;
    int size;

public:
    Array(int s)
    {
        size = s;
        data = new int[size];

        cout << "Array of size " << size << " created.\n";
    }

    ~Array()
    {
        delete[] data;
        cout << "Array of size " << size << " destroyed.\n";
    }
};

int main()
{
    Array arr1(5);
    Array arr2(10);

    return 0;
}