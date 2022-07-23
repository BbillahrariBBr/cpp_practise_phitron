#include<bits/stdc++.h>
using namespace std;
class Shop
{
public:
    string product_name[10];
    int product_price[10];
    int product_quantity[10];

protected:

    int total_income=0;

public:
    void set_total(int total)
    {
        total_income +=total;
    }

    int get_total()
    {
        return total_income;
    }
};

int main()
{
    Shop *myShop = new Shop;
    cout<<"Number of Product: ";
    int n;
    cin>>n;
    for(int i=1; i<=n; i++)
    {
        cout<<"Product "<<i<<" Name: ";
        cin>>myShop->product_name[i];
        cout<<"Product "<<i<<" Price: ";
        cin>>myShop->product_price[i];
        cout<<"Product "<<i<<" Quantity: ";
        cin>>myShop->product_quantity[i];
    }
    while(true)
    {


        // output
        cout<<endl;
        cout<<"\t\t Buy Product"<<endl;
        cout<<"\t\t_____________"<<endl;
        cout<<"Product Index\t\t";
        for(int i =1; i<=n; i++)
        {
            cout<<i<<"\t";
        }
        cout<<endl;
        cout<<"Product Name\t\t";
        for(int i =1; i<=n; i++)
        {
            cout<<myShop->product_name[i]<<"\t";
        }
        cout<<endl;
        cout<<"Product Price\t\t";
        for(int i =1; i<=n; i++)
        {
            cout<<myShop->product_price[i]<<"\t";
        }
        cout<<endl;

        cout<<"Product quantity\t";
        for(int i =1; i<=n; i++)
        {
            cout<<myShop->product_quantity[i]<<"\t";
        }
        cout<<endl<<endl;

        cout<<"Which Product do you want? From 1 to "<<n<<": ";
        int indx, quantity;
        cin>>indx;
        cout<<"What is the quantity that you want of "<<myShop->product_name[indx]<<" : ";
        cin>>quantity;
        if(myShop->product_quantity[indx] <quantity)
        {
            cout<<"This quantity is not available"<<endl;
        }
        else{
            myShop->set_total(quantity*myShop->product_price[indx]);
            myShop->product_quantity[indx] -=quantity;
            cout<<endl;
            cout<<myShop->product_name[indx]<<" bought "<<quantity<<" px Successfully"<<endl;
            cout<<"your total income : "<< myShop->get_total()<<endl;
        }
    }

  return 0;
}

