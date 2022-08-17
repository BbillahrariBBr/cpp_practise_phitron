#include<bits/stdc++.h>
using namespace std;
template <typename T>
T sum(T a, T b)
{

    T s = a+b;
    return s;
}
int main()
{
    int a =10, b=20;
    int s = sum<int>(a,b);
    cout<<s<<endl;
    double c =10.5, d=20.2;
    double e = sum<double>(c,d);
    cout<<e<<endl;

  return 0;
}

