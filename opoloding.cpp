#include<iostream>
using namespace std;
class test
{
    int a;
public:
    void get()
    {
        cout<<"Entr value of a ";
        cin>>a;

    }
    void put()
    {
        cout<<"a = "<<a<<endl;
    }


    int operator > (test t2)//int big(test t2);
    {
        return a>t2.a?a:t2.a;
    }


};
 main()
 {
     test t1, t2;
     t1.get();
     t2.get();
     t1.put();
     t2.put();
     cout<<"big no = "<<(t1>t2);//t1.big(t2);

 }
