//opol using ++ and -- operator
#include<iostream>
#include<string.h>
#include<stdio.h>
using namespace std;
class test
{
    int a;
    public:

    test()
    {
        a=0;
    }

    void operator ++()
    {
        a++;
        cout<<"a = "<<a<<endl;


    }
    void operator --()
    {
        a--;
        cout<<"a = "<<a<<endl;
    }
};
 main()
 {
     test t1 ;
     ++t1;
     --t1;


 }
