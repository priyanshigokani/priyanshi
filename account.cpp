//Data Member: -Name of the depositor -Account Number -Type of Account -Balance amount in the account 
 
// Member Functions -To assign values -To deposited an amount -To withdraw an amount after checking balance -To display name and balance 

 
Member Functions -To assign values -To deposited an amount -To withdraw an amount after checking balance -To display name and balance 



#include<iostream>
#include<string>

using namespace std;
class BankAccount
    {
        public:
        string name;
        string AccountType;
        int Balance=0;
        int AccountNumber;

        BankAccount(string name_, string AccountType_,int Balance_,int AccountNumber_)
        {
            name =name_;
            AccountType = AccountType_;
            Balance =Balance_;
            AccountNumber = AccountNumber_;
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
            return Balance;
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