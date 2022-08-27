#include<bits/stdc++.h>
using namespace std;

char Stack[4] = {'\0'};
int top=-1;

void Push(char x){
  	Stack[++top]=x;
  	return;
}

char Pop(){
   return Stack[top--];}
int main()
{
    char str1[4] = {'\0'};
    char str2[4] = {'\0'};
    int i;
    strcpy(str1, "CSE");
    for(i =0; i<3; i++)
    {
        Push(str1[i]);
         cout<<str1[i]<<endl;

    }
    cout<<endl;
    for(i=0; i<3; ++i){
    str2[i]=Pop();
    cout<<str2[i]<<endl;
    }
    cout<<str2;

  return 0;
}

