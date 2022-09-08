#include<bits/stdc++.h>
using namespace std;

int main()
{
    int test_case;
    cin>>test_case;
    int missing_number;
    while(test_case--)
    {
        int sum,a,b,c;
        cin>>sum>>a>>b>>c;
        missing_number = sum-(a+b+c);
        cout<<missing_number<<endl;

    }


  return 0;
}

