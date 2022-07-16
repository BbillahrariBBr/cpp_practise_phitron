#include<bits/stdc++.h>
using namespace std;

class Example{
private:
int x;
int y;
int z;

public:
Example(int a, int b, int c)
{
    x =a;
    y =b;
    z =c;
}

};
int main()
{
  Example a(10,20,30);
  cout<< a.x;

  return 0;
}

