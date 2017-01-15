
#include<iostream>
using namespace std;
int div(int, int);
 main()
{
    int p,q;
    cout<<"Enter two num ";
    cin>>p>>q;

    cout<< "div = "<<div(p,q);

}

 int div(int p,int q)
    {
        int temp=0;
        if(q==0 || p==0)

            {return 0;}

        else{
            for(int i=q; i>0; i--)
           {
               temp=p+temp;
           } //return p+div(p, q-1);

            return temp;
        }

    }
