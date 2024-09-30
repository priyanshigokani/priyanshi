#include <iostream>
using namespace std;

class BankAccount
{
private:
    int accountNumber;
    double balance;

public:
    BankAccount(int accNum, double initialBalance)
    {
        accountNumber = accNum;
        balance = initialBalance;
    }

    void deposit(double amount)
    {
        if (amount > 0)
        {
            balance += amount;
            cout << "Deposited: " << amount << endl;
        }
    }

    void withdraw(double amount)
    {
        if (amount > 0 && amount <= balance)
        {
            balance -= amount;
            cout << "Withdrawn: " << amount << endl;
        }
        else
        {
            cout << "Insufficient balance!" << endl;
        }
    }

    void display() const
    {
        cout << "Account Number: " << accountNumber << endl;
        cout << "Balance: " << balance << endl;
    }
};

int main()
{
    int accountNumber;
    double initialBalance, depositAmount, withdrawAmount;

    cout << "Enter Account Number: ";
    cin >> accountNumber;
    cout << "Enter Initial Balance: ";
    cin >> initialBalance;

    BankAccount account(accountNumber, initialBalance);
    account.display();

    cout << "Enter amount to deposit: ";
    cin >> depositAmount;
    account.deposit(depositAmount);
    account.display();

    cout << "Enter amount to withdraw: ";
    cin >> withdrawAmount;
    account.withdraw(withdrawAmount);
    account.display();

    return 0;
}
