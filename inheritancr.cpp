#include <iostream>
using namespace std;

void cube(int &n)
{
    n=n*n*n;

}
int main()
{

    int a=5;
    cout<<"Before a= "<<a<<endl;
    cube(a);
    cout<<"After a= "<<a;


}
