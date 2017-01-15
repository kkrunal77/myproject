#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class test
{
    char st[50];
public:
    void get()
    {
        cout<<"Enter a string ";
        gets(st);

    }
    void put()
    {
        cout<<"string = "<<st<<endl;
    }


    int operator == (test t2)//int big(test t2);
    {
        if( strcmp(st, t2.st) == 0)
        {
            cout<<"String are same"<<endl;

        }
        else
            {
            cout<<"String are  not same"<<endl;
            }
    }

};
 main()
 {
     test t1, t2;
     t1.get();
     t2.get();
     t1.put();
     t2.put();
     t1==t2;//t1.big(t2);

 }
