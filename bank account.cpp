#include<iostream.h>
#include<string>

using namespace std;
    class BankAccount

    {
        int AccountNumber;
        int TotalAmount;
        string name;
        string TypeOfAccount;


        BankAccount()
        {
            values = 22;
            DepositedAmount = 34000;
            WithdrawAmount =12000;
            name ="piyu";
            balance= 67000;


        }
            BankAccount(int values,int DepositedAmount,int WithdrawAmount,string name, int balance)
            {
                values=values_;
                DepositedAmount=DepositedAmount_;
                WithdrawAmount=withdrawAmount_;
                name=name_;
                balance=balance_;
            }
       

        public:
        void getvalues()
        {
        cout<<"values %s";
        }

        void DepositedAmount()
        {
            cout<<"deposited amount is: %d";
        }

        void withdrawAmount()
        {
            cout<<"withdraw amount is: %d";
        }

        void name()
        {
            cout<<"name: %s";
        }

        void balance()
        {
            cout<<"your balance is: %d";
        }

    }
    
int main()
{
    BankAccount amount(22,34000,12000,'piyu',67000);


    cout <<" withdrawAmount: "<< amount.withdrawAmount<<endl;
    cout<<"name: "<< amount.name<<endl;
}