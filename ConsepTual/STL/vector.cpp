#include<bits/stdc++.h>
using namespace std;

void print_vector(vector<int> v)
{
    for(int i =0; i<v.size();i++)
    {
        cout<<v[i]<<endl;
    }
}
int main()
{
    vector<int> v;
    //cout<<v.empty()<<endl;
    vector<int>::iterator it;
    vector<int> :: reverse_iterator rit;
    v.push_back(100);
    v.push_back(200);
    v.push_back(300);
    v.push_back(400);
    v.push_back(500);
    //for vector size;
    //cout<<v.size()<<endl;
    //vector capacity
    //cout<<v.capacity()<<endl;
    //maxsize
    //cout<<v.max_size()<<endl;
    //first 3
   // v.resize(3);
   // v.shrink_to_fit();

    // cout<<v.size()<<endl;
    //vector capacity
   // cout<<v.capacity()<<endl;
    //maxsize
    //cout<<v.max_size()<<endl;
    rit = v.rend()-1;
    cout<<*rit;

    //print_vector(v);

    //iteraotr

  return 0;
}

