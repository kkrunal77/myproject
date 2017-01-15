#include<iostream>
using namespace std;

class test
{
    static int a, b;

    public:
    static void get()
    {

        cout<<" enter value of a & b "<<endl;
        cin>>a>>b;

    }
    static void put()
    {
        cout<<"a = "<<a<<endl;

        cout<<"b = "<<b<<endl;

    }
};

    int test :: a;
    int test :: b;

int main()
{
    //method 1
    test::get();
    test::put();
    //method 2
   // test t;
    //t.get();
    //t.put();


}

