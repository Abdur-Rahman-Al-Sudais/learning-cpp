#include <iostream>

using namespace std;

int sum(int numsArr[], int size)
{
    int total = 0;
    for (int i = 0; i < size; i++)
    {
        total += numsArr[i];
    }

    return total;
}

int main()
{
    int numbers[3] = {3, 2, 4};

    int totalSum = sum(numbers, 3);

    cout << totalSum << endl;

    return 0;
}