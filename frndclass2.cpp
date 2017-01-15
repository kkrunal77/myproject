#include<iostream>
using namespace std;
class marks;
class stu
{
    int id;
    char name[20];
public:
    void getdata()
    {
        cout<<"Enter name and id ";
        cin>>name>>id;

    }
    void putdata()
    {
        cout<<"name = "<<name<<endl;
        cout<<"id = "<<id<<endl;
    }
    friend void result(stu , marks);
};


class marks
{
    int m, p, c;

   public:

        void getmarks()
        {
            cout<<"Enter 3 marks "<<endl;
            cout<<"math = ";
            cin>>m;
            cout<<"physics = ";
            cin>>p;
            cout<<"chemistry = ";
            cin>>c;
        }


    friend void result(stu, marks);
};

void result(stu s, marks m)
    {
        cout<<"id = "<<s.id<<endl;
        cout<<"name = "<<s.name<<endl;
        cout<<"results"<<endl;
        if(m.m<=35 || m.p<=35 || m.c<=35)
        {
            cout<<" fail ";
        }
        else{cout<<" pass ";}
    }

   int main()
   {
       stu s;
       marks m;//obj of test class
       s.getdata();
       s.putdata();
       m.getmarks();
       result(s, m);
   }
