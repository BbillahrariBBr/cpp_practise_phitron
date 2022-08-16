#include<bits/stdc++.h>
#include"MYSTACK.h"
using namespace std;
/*
* stack of flot, stack of char, double, string, array, structure
object of class
*/
int globalID = 100;
class Person{
    string name;
    int id;
    float salary;

public:
    //null Constractor
    Person(){
        name = "";
        id = -1;
        salary = -1.0;
    }
    void setName(string name)
    {
        this->name = name;
    }

    void setSalary(float salary)
    {
        this->salary = salary;
    }
    Person(string name, float salary){
        //this->name = name;
        setName(name);
        //this->salary = salary;
        setSalary(salary);
        id = globalID;
        globalID++;

    }

    int getId()
    {
        return id;
    }
    string getName()
    {
        return name;
    }
    float getSalary()
    {
        return salary;
    }

    void print()
    {
        cout<<name<<" | "<<id<<" | "<<salary <<endl;
    }

};
int main()
{
//    Stack <pair<int,char>> st;
//    st.push(make_pair(1,'a'));
//    st.push(make_pair(5,'d'));
//    st.push(make_pair(7,'z'));

//    while(!st.empty())
//    {
//        cout<<st.pop()<<endl;
//    }
//    pair <int,char> chk;
//    chk = st.pop();
//    cout<<chk.first<<endl;
//    cout<<chk.second<<endl;
//    cout<<st.size()<<endl;
//
//    pair <int,char> chk1;
//    chk1 = st.topf();
//    cout<<chk1.first<<endl;
//    cout<<chk1.second<<endl;


//
    Stack <Person> st;
    Person a ("Baki",654.36);
    Person b ("Billa",254.36);
    Person c ("Rari",64.36);
    st.push(a);
    st.push(b);
    st.push(c);
    while(!st.empty())
    {
        Person printObj;
        printObj = st.pop();
        printObj.print();
    }
  return 0;
}

