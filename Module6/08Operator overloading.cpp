#include<bits/stdc++.h>
using namespace std;

class Example
{
public:
    int x;
    Example(int a)
    {
        x =a;
    }
    int operator +(Example obj)
    {
        return x+obj.x;
    }
//    Example operator +(Example obj)
//    {
////        cout<< x+obj.x <<endl;
//        Example ans;
//        ans.x = x+obj.x;
//        return ans;
//    }
};
int main()
{
    Example a(10), b(20);
    int ans =a+b;
    cout<<ans<<endl;


  return 0;
}

