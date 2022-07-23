#include<bits/stdc++.h>
using namespace std;

//Question 1
class Student{
    //q-2
public:

    string name;
    char section;
    int roll;
    //q3
protected:

    int english_marks;
    //q4

private:

    string password;

public:
    void set_marks(int marks)
    {
        english_marks = marks;
    }
    void set_password(string pass)
    {
        password = pass;
    }
    int get_marks()
    {
        return english_marks;
    }
    void update_marks(string pass, int marks)
    {
        if(pass == password)
        {
            english_marks = marks;
        }
        else{
            cout<<"Password didn't match!"<<endl;
        }
    }
};

int main()
{
    //question 1
    int n;
    cin>>n;
    Student st[n];
    for(int i=0; i<n; i++)
    {
        string name, password;
        char section;
        int roll, marks;
        cin>>name>>section>>roll>>marks>>password;
        st[i].name = name;
        st[i].section = section;
        st[i].roll = roll;
        st[i].set_marks(marks);
        st[i].set_password(password);
    }
    //input from user

    int roll, marks;
    string password;
    cin>> roll >> marks >> password;

    bool found = false;
    for(int i =0; i< n; i++)
    {
        if(st[i].roll == roll)
        {
            found = true;
            st[i].update_marks(password,marks);
        }
    }
    if(!found){
        cout<<"Student not foudn!"<<endl;
    }
    cout<<"Name"<<"\t"<<"Sec"<<"\t"<<"Roll"<<"\t"<<"Eng Marks"<<endl;
    cout<<"------------------------------------------------------"<<endl;
    for(int i =0; i<n; i++)
    {
        cout<<st[i].name<< "\t"<<st[i].section<<"\t"<<st[i].roll<<"\t"<<st[i].get_marks()<<endl;
    }

  return 0;
}

