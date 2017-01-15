//overloading using << & >> operator

#include<iostream>
//#include<string.h>
//#include<stdio.h>
using namespace std;

class stu
{
    int id;
    char name[50];
public:
    friend void operator >> (istream &in, stu &s)
    {
        cout<<"Enter id & name ";
        in>>s.id>>s.name;

    }
    friend void operator << (ostream &out, stu &s)
    {
        cout<<"id = "<<s.id<<endl;
         cout<<"name = "<<s.name<<endl;
    }

};



 main()
 {
     stu s;
     cin>>s;
     cout<<s;



 }
