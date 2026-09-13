#include <iostream>
using namespace std;

class Account
{
public:
    double balance;
};

int main()
{
    Account acc;
    acc.balance = -500; // Bug: direct illegal balance
    cout << acc.balance;
}