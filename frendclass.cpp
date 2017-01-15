#include<iostream>
using namespace std;

class test
{
    int a;
public:
    void getdata()
    {
        cout<<"Enter value of a = ";
        cin>>a;

    }
    void putdata()
    {
        cout<<"a = "<<a<<endl;
    }
    friend int big(test , test );
};
    int big(test t1, test t2)
    {
        return t1.a>t2.a?t1.a:t2.a;
    }
   int main()
   {
       test t10, t20;
       t10.getdata();
       t10.putdata();
       t20.getdata();
       t20.putdata();
       cout<<"Big = "<<big(t10,t20);
   }
