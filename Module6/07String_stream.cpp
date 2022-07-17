#include<bits/stdc++.h>
using namespace std;

int main()
{
    string st = "ab  bc cd de";
    stringstream str(st);
    string w;
    while(str>>w)
    {
        cout<<w<<endl;
    }

  return 0;
}

