#include<bits/stdc++.h>
using namespace std;
class BankAccount
{
public:
    string account_holder;
    string address;
    int age;
    int account_number;

protected:
    int balace;
private:
    string password;
public:
    BankAccount(string account_holder, string address, int age, string password)
    {
        this->account_holder = account_holder;
        this->address = address;
        this->age = age;
        this->password = password;
        this->account_number= rand()%1000000000;
        this->balace =0;
        cout<<"Your Account no is " <<this->account_number<<endl;
    }
    int show_balance(string password){
        if(this->password == password)
        {
            return this->balace;
        }
        else{
            return -1;
        }
    }
    void add_money(string password, int amount)
    {
        if(amount < 0)
        {
            cout<<"Invalid amount"<<endl;
            return;
        }
        if(this->balace < amount)
        {
            cout<<"Insufficient Balance"<<endl;
            return;
        }

        if(this->password == password)
        {
            this->balace += amount;
            cout<<"Add money successful"<<endl;
        }
        else{
            cout<<"Password didn't match"<<endl;
        }
    }
    void deposit_money(string password, int amount)
    {
        if(amount < 0)
        {
            cout<<"Invalid amount"<<endl;
            return;
        }
        if(this->password == password)
        {
            this->balace -= amount;
            cout<<"Diposit money successful"<<endl;
        }
        else{
            cout<<"Password didn't match"<<endl;
        }
    }
    friend class MyCash;
};

class MyCash
{
protected:
    int balace;
public:
    MyCash()
    {
        this->balace=0;
    }
    void add_money_from_bank(BankAccount *myAccount, string password, int amount)
    {
        if(amount < 0)
        {
            cout<<"Invalid amount"<<endl;
            return;
        }
        if(myAccount->balace < amount)
        {
            cout<<"Insufficient Balance"<<endl;
            return;
        }
        if(myAccount->password == password)
        {
            this->balace += amount;
            myAccount->balace -= amount;
            cout<<"Add money from Bank is Successful"<<endl;
        }
        else{
            cout<<"Password didn't match"<<endl;
        }
    }
    int show_balance()
    {
        return balace;
    }
};
BankAccount* create_account()
{
    string account_holder,password,address;
    int age;
    cout<<"Create Account" <<endl;
    cin>>account_holder>>address>>age>>password;
    BankAccount *myAccount = new BankAccount(account_holder,address,age,password);
    return myAccount;
}
void add_money(BankAccount *myAccount)
{
    string password;
    int amount;
    cout<< "Add Money"<<endl;
    cin>>password>>amount;
    myAccount->add_money(password,amount);
    cout<< "Your Bank balance is "<< myAccount->show_balance("abc")<<endl;


}
void deposit_money(BankAccount *myAccount)
{
    string password;
    int amount;
    cout<<"Deposit Money"<<endl;
    cin>>password>>amount;
    myAccount->deposit_money(password,amount);
    cout<< "Your Bank balance is "<< myAccount->show_balance("abc")<<endl;
}
void add_money_from_bank(MyCash *mycash, BankAccount *myAccount)
{
    string password;
    int amount;
    cout<<"Add Money From bank"<<endl;
    cin>>password>>amount;
    mycash->add_money_from_bank(myAccount,password,amount);
    cout<< "Your Bank balance is "<< myAccount->show_balance("abc")<<endl;
    cout<< "Mycash Balance is "<<mycash->show_balance()<<endl;

}
int main()
{

  BankAccount *myAccount = create_account();
  MyCash *mycash = new MyCash();
  while(true)
  {
      cout<<"Select option: "<<endl;
      cout<<"1. Add money to Bank"<<endl;
      cout<<"2. Deposit money from Bank"<<endl;
      cout<<"3. Add money to MyCash from Bank"<<endl;
      int option;
      cin>>option;
      if(option ==1)
      {
          add_money(myAccount);

      }
      else if(option == 2)
      {
          deposit_money(myAccount);
      }
      else if(option ==3)
      {
          add_money_from_bank(mycash, myAccount);
      }
  }







  return 0;
}

