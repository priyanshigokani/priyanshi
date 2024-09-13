// Q.4  Write a C++ program to implement a class called Bank Account that has private member variables for account number and balance. 
// Include member functions to deposit and withdraw money from the account. 

#include<iostream>

using namespace std;


class BankAccount
{
    int AccountNumber;
    double Balance;

    public: 

    BankAccount(int accNum, double balance)
    {
        AccountNumber=accNum;
        Balance=balance;
    }

    void Deposit(double amount)
    {
        if(amount > 0)
        {
            Balance += amount;
            cout <<"Withdraw money: "<<amount<<endl;
        }
        else 
        {
            cout <<"Wrong input!";
        }
    }

     void WithdrawMoney(double amount)
    {
        if(amount > 0 && amount <= Balance)
        {
            Balance -= amount;
            cout <<"Withdraw money: "<<amount<<endl;
        }
        else if(amount > Balance)
        {
            cout <<"Insufficient balance";
        }
        else 
        {
            cout <<"Wrong input!";
        }
    }

    void displayAccountInfo()
   const {
        cout<<"Account number: "<<AccountNumber<<endl;
        cout<<"Balance: "<<Balance<<endl;
    }

};

    int main()
    {
        BankAccount account(12345, 1000.0);

        account.displayAccountInfo();


        account.Deposit(500);
        account.displayAccountInfo();

        account.WithdrawMoney(300);
        account.displayAccountInfo();

        account.WithdrawMoney(1000);


        return 0;
    }



