#include <iostream>
#include <string>

using namespace std;

class Diary
{
private:
    string secret;

public:
    void setSecret(string s) { secret = s; }
    friend class BestFriend;
};

class BestFriend
{
public:
    void readSecret(Diary d)
    {
        cout << "The secret message is: " << d.secret;
    }
};

int main()
{
    Diary d1;

    d1.setSecret("Hello world");

    BestFriend b1;

    b1.readSecret(d1);

    return 0;
}