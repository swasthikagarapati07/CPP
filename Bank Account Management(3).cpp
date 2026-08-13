#include <iostream>
using namespace std;

class BankAccount
{
    int accountNumber;
    string customerName;
    float balance;

public:
    BankAccount()
    {
        accountNumber = 0;
        customerName = "Unknown";
        balance = 0;
    }

    BankAccount(int acc, string name, float bal)
    {
        accountNumber = acc;
        customerName = name;
        balance = bal;
    }

    void Deposit(float amount)
    {
        balance += amount;
        cout << "Deposited: " << amount << endl;
    }

    void Withdraw(float amount)
    {
        if (amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
        else
            cout << "Insufficient balance" << endl;
    }

    void display()
    {
        cout << "\nAccount Number: " << accountNumber;
        cout << "\nCustomer Name: " << customerName;
        cout << "\nBalance: " << balance << endl;
    }

    friend void transfer(BankAccount &a1, BankAccount &a2, float amount);

    ~BankAccount()
    {
        cout << "\nAccount object destroyed: " << accountNumber << endl;
    }
};

void transfer(BankAccount &a1, BankAccount &a2, float amount)
{
    if (amount <= a1.balance)
    {
        a1.balance -= amount;
        a2.balance += amount;
        cout << "\nTransfer successful";
    }
    else
        cout << "\nInsufficient balance for transfer";
}

int main()
{
    BankAccount a1;
    BankAccount a2(101, "Swasthika", 10000);

    a2.Deposit(2000);
    a2.Withdraw(1000);

    a1.display();
    a2.display();

    transfer(a2, a1, 3000);

    a1.display();
    a2.display();

    return 0;
}
