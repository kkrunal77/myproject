
#include <iostream>
#include <cstring>
#include <ctype.h>
#include <stdio.h>

using namespace std;

int fib(int);
main()
{
    int n,g,l;
    cout<<"Enter two num =";
    cin>>n;

    cout<<"\n Fibonacci series = "<<fib(n);

}
int fib(int x)
{
    if(x==1||x==2)
      return 1;

    else
      return fib(x-1)+fib(x-2);

}
