#include<iostream>
using namespace std;
class BankAccount
{
    private:
    string accountHolderName;
    int accountNumber;
    double balance;
    public:
    BankAccount(string name,int number,double bal)
    {
        accountHolderName=name;
        accountNumber=number;
        balance=bal;

    }
    void deposit(double amount)
    {
        if(amount>0)
        {
            balance+=amount;
        }
        else
        {
            cout<<"Invalid"<<endl;
        }

    }
    void withdraw(double amount)
    {
        if(balance>=amount)
        {
            balance-=amount;
        }
        else
        {
            cout<<"Insufficient balance"<<endl;
        }

    }
    void display()
    {
        cout<<"Account Holder: "<<accountHolderName<<"\n";
        cout<<"Account Number: "<<accountNumber<<"\n";
        cout<<"Balance: "<<balance<<"\n";
    }
    double getBalance()
    {
        return balance;
    }
    string getName()
    {
        return accountHolderName;
    }
};
int main()
{
    BankAccount acc("Alice",101,5000);
    acc.deposit(2000);
    acc.withdraw(1500);
    acc.display();
    cout<<"current balance is: "<<acc.getBalance()<<endl;
    cout<<"Account Holder Name: "<<acc.getName()<<endl;
    return 0;
}