#include<bits/stdc++.h>
using namespace std;
//void reverse(string str)
//{
//    int len = str.length();
//    int n = len;
//    while(n--)
//        cout << str[n];
//}

int main()
{
    int t;
    cin>>t;
       while(t--)
    {
        int n;
        cin>>n;
        char arr[n];
        for(int i=0; i<n; i++)
        {
            cin>>arr[i];
        }
        stack <char> st;
        for(int i=0; i<n; i++)
        {
            //cout<<"case: "<<i<<endl;
            if(st.empty())
            {
                st.push(arr[i]);
            }
            else
            {
                char temp = st.top();
                char var;
                //cout<<"Temp: " <<temp <<" char: "<<arr[i]<<endl;
                if((arr[i]=='R' && temp=='B') || ((arr[i]=='B' && temp=='R')) )
                {
                    var = 'P';
                    st.pop();

                }

                else if((arr[i]=='R' && temp=='G') || ((arr[i]=='G' && temp=='R')) )
                {
                    var = 'Y';
                    st.pop();
                }

                else if((arr[i]=='G' && temp=='B') || ((arr[i]=='B' && temp=='G')) )
                {
                    var = 'C';
                    st.pop();
                }

                else var = arr[i];


                if(temp==var)
                {
                    st.pop();
                }

                else
                {
                    st.push(var);
                }

            }

        }
        stack <char> st1;
        while(!st.empty())
        {
            if(st1.empty())
            {
                st1.push(st.top());
            }
            else
            {
                //cout<<"frst stack "<<st.top()<<" "<<"second stack"<< st1.top()<<endl;
                if(st.top()==st1.top())
                {
                    st1.pop();
                }
                else
                {
                    st1.push(st.top());
                }
            }
            st.pop();
        }

        string s = "";
        while(!st1.empty())
        {
            if(st1.empty())
            {
                cout<<"";
                return 0;
            }

            s +=st1.top();
            st1.pop();
        }
        cout<<s<<endl;

    }




    return 0;
}

/*
18
RBGRGBBRGBGRGRBGBR
*/

