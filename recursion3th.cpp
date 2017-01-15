
#include <iostream>
#include <cstring>
#include <ctype.h>
#include <stdio.h>

using namespace std;

//abc(char[], char[], char[], int[]);

void abc(char source[],char temp[], char dest[],int n)
{
    if(n>0)
    {
        abc(source, temp, dest, n-1);
        cout<<"\n move "<<n<<" from "<<source<<" to "<<dest;
         abc(dest, source, temp, n-1);
    }
}
main()
{
    int n,g,l;
    cout<<"Enter number of value =";
    cin>>n;
    abc("*A","*B","*C",n);
}

