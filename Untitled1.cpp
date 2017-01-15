#include <iostream>
#include <cstring>
#include <ctype.h>
#include <stdio.h>

using namespace std;

int main ()
{
   int a[10],n;
   int i,j,t;


    cout<<"Enter array size =";
    cin>>n;
    for(i=0; i<n; i++)
    {
        cout<<"\nstring no "<<i<<" is =";
        cin>>a[i];
    }
    //====================================================
    //insertion short
    for(i=0;  i<n; i++)
    {
       t=a[i];
      for(j=i-1; j>=0&&a[j]>t; j--)

            a[j+1]=a[j];
            a[j+1]=t;
    }
    //======================================================
    i=0;
    for(i=0; i<n; i++)
    cout<<"\t"<<a[i];
}
