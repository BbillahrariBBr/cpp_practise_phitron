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
int main()
{

  BankAccount *myAccount = create_account();
  if(myAccount->show_balance("abc") == -1)
  {
      cout<< "Password didn't match "<<endl;
  }
  else{
    cout<< "Your Bank balance is "<< myAccount->show_balance("abc")<<endl;
  }

  return 0;
}

