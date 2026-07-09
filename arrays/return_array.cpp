#include <iostream>

using namespace std;

int *returnCups(int cups)
{
    int *cupsArr = new int[cups];

    for (int i = 0; i < cups; i++)
    {
        cupsArr[i] = (i + 1) * 5;
    }

    return cupsArr;
}

int main()
{
    int *cups = returnCups(5);

    for (int i = 0; i < 5; i++)
    {
        cout << "Cup No: " << cups[i] << endl;
    }

    return 0;
}