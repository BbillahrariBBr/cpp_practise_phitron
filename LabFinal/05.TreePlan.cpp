#include<bits/stdc++.h>
using namespace std;

int main()
{
    int y;
    cin>>y;
//    int val = pow(2,(y-2));
//    cout<<val;
    if(y==1)
    {
        cout<<1<<endl;

    }
    else if(y == 2)
    {
        cout<<2<<endl;
    }
    else{
        double val = pow(2,(y-2));
        double total_node = pow(2,(y-1));
        double total = val*total_node;
        cout.precision(0);
        cout<<fixed<<total<<endl;
    }


  return 0;
}

