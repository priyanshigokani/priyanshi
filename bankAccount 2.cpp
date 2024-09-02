#include<iostream>
#include<string>

using namespace std;
class BankAccount
    {
        public:
        string name;
        string AccountType;
        int balance;
        int AccountNumber;

        BankAccount(string name_, string AccountType_,int Balance_,int AccountNumber_)
        {
            name =name_;
            AccountType = AccountType_;
            int Balance =balance;
            int AccountNumber = AccountNumber_;
        }

        string getname()
        {
            return name;
        }

        string getAccountType()
        {
            return AccountType;
        }

        int getBalance()
        {
            return balance;
        }

        int getAccountNumber()
        {
            return AccountNumber;
        }
    };
    int main()
    {

        BankAccount amount("piyu","saving",34000,45676545);
        
        cout<<"name: "<<amount.name<<endl;
        cout<<"AccountType: "<<amount.AccountType<<endl;
        cout<<"Balance: "<<amount.Balance<<endl;
        cout<<"AccountNumber: "<<amount.AccountNumber<<endl;
    }