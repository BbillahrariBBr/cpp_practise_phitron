#include<bits/stdc++.h>
using namespace std;
class Restaurant{
public:

    int food_item_codes[12];
    string food_item_names[30];
    int food_item_prices[12];

protected:
    float total_tax =0;
public:
    void set_total_tax(int net_tot)
    {
        total_tax = (5*net_tot);
    }
    float get_total_tax()
    {
        return total_tax/100;
    }

};
int main()
{
    Restaurant *my_Res = new Restaurant;
    int n, total =0;
    int  net_toatl_price=0;
    cin>> n;
    for(int i=1; i<=n; i++)
    {
        cin>>my_Res->food_item_codes[i];
        cin.ignore();
        getline(cin,my_Res->food_item_names[i]);
        cin>>my_Res->food_item_prices[i];
    }
    //while(true)
    //{
    flag:
        // output
        cout<<"\t\t\t\tMake Bill"<<endl;
        cout<<"\t\t\t____________________"<<endl<<endl;
        cout<<"Item Code\t\t"<<"Item Name\t\t\t\t"<<"Item Price"<<endl;
            for(int i =0; i<n; i++)
            {
                cout<<my_Res->food_item_codes[i]<<"\t\t\t"<<my_Res->food_item_names[i]<<"\t\t\t"<<my_Res->food_item_prices[i]<<endl;
            }
            cout<<endl;
            //input from user
            int table_no;
            cout<<"Enter Table no : ";
            cin>>table_no;
            int nmbr;
            cout<<"Enter Number of Items : ";
            cin>> nmbr;
            int item_code[nmbr];
            int item_quan[nmbr];
            for(int i = 0; i<nmbr; i++)
            {
                cout<<"Enter Item "<<i+1<<" Code : ";
                cin>>item_code[i];
                cout<<"Enter Item "<<i+1<<" Quantity : ";
                cin>>item_quan[i];
            }

            // table summary

        cout<<"\t\t\t\tBill Summary"<<endl;
        cout<<"\t\t\t____________________"<<endl<<endl;
        cout<<"Table no. : "<<table_no<<endl;
        cout<<"Item Code\t\t"<<"Item Name\t\t\t"<<"Item Price\t"<<"Item Quantity\t"<<"Total price"<<endl;
        for(int i = 0; i<nmbr; i++)
        {
            for(int j = 1; j<=n; j++)
            {
                if(item_code[i]== my_Res->food_item_codes[j])
                {
                    total = item_quan[i]*my_Res->food_item_prices[j];
                    //cout<<total<<endl;
                    cout<<my_Res->food_item_codes[j]<<"\t\t\t"<<my_Res->food_item_names[j]<<"\t\t"<<my_Res->food_item_prices[j]<<"\t\t"<<item_quan[i]<<"\t\t"<<total<<endl;
                    net_toatl_price += total;
                }
            }
        }
        my_Res->set_total_tax(net_toatl_price);
        float net_total = net_toatl_price+my_Res->get_total_tax();

        cout<<endl;
        cout<<"_______________________________________________________________________________________________________________"<<endl;
        cout<<"Net Total : \t\t\t\t\t\t\t\t\t\t"<<fixed<<setprecision(2)<< net_total<<" Taka"<<endl;
        goto flag;

    //}




  return 0;
}

