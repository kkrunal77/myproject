#include<iostream>
#include<string.h>
//#include<stdio.h>
using namespace std;
main()
{


int  k, m, total=0,p,i,j,t;
cout<<"Enter no of person = "<<endl;
cin>>p;
for(i=1; i<=p; i++)
{
           cout<<"person = "<<i<<endl;

           cout<<"Enter no of travel ="<<endl;
           cin>>k;
           total=0;
           for(j=1; j<=k; j++)
           {

              cout<<"travel "<<j<<" in Km"<<endl;
              cin>>t;

            if(t>=5)
            {
               total=total+t;
            }

           }
           cout<<"total travel amount= "<<total<<endl;
}


}
