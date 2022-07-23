#include<bits/stdc++.h>
using namespace std;
class Shop
{
public:


    string producut_name[10];
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
    for(in)

  return 0;
}

