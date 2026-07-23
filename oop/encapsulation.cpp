#include <iostream>
#include <string>

using namespace std;

class BankAccount
{
private:
    string account;
    int balance;

public:
    BankAccount(string accountNumber, double initialBalance) : account(accountNumber), balance(initialBalance) {}

    int getBalance()
    {
        return balance;
    }

    void deposite(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
        }
        else
        {
            cout << "Invalid amount";
        }
    }

    void withDraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
        }
        else
        {
            cout << "Invalid amount";
        }
    }
};

int main()
{
    BankAccount b1("9298340503", 999);
    b1.deposite(1);
    b1.withDraw(500);
    int balance = b1.getBalance();

    cout << "Total Balance: " << balance;

    return 0;
}