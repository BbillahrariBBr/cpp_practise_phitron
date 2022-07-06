#include<bits/stdc++.h>
using namespace std;

int main()
{
    char s[100001];
    cin>>s;
    char t[100001];
    int j=0;
    int len = strlen(s);
    for(int i =0;i<len; i = i+2)
    {
        t[j] = s[i];
        j++;
    }
    cout<< t;

  return 0;
}

