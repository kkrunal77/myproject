
#include <iostream>
#include <cstring>
#include <ctype.h>
#include <stdio.h>

using namespace std;

int gcd(int, int);
main()
{
    int n1,n2,g,l;
    cout<<"Enter two num =";
    cin>>n1>>n2;
    g=gcd(n1,n2);
    l=n1*n2/g;
    cout<<"\n GCD is "<<g;
    cout<<"\n LCM is "<<l;

}
int gcd(int x, int y)
{
    if(y==0)
      return x;

    else
      return gcd(y, x%y);

}
