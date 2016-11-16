

#include<iostream>
#include<fstream>
#include<string>
#include<stdio.h>
#include<conio.h>
using namespace std;

class account
{
private:
    int acno;
    float b;
    char n[20], a[20], t[5];
public:
    void showdata()
    {
    cout<<"account no = "<<acno<<endl;;
   // cin>>acno;cout<<endl;
    cout<<"Name = "<<n<<endl;
    //cin>>n;cout<<endl;
    cout<<"address = "<<a<<endl;
    //cin>>a;cout<<endl;
    cout<<"amount = "<<b<<endl;
    //cin>>b;cout<<endl;
    cout<<"A/C type = "<<t<<endl;
    //cin>>t;cout<<endl;
    }

    char *givename()
    {
        return n;
    }
};
    main()
    {
        account a; // class object

        fstream f;
        char w;
        int flag;
        char x[30];


do{
        f.open("bank.date",ios::in);
        f.read((char*)&a,sizeof(a));
        flag=0;

        cout<<"enter name = ";
        gets(x);
        while(!f.eof())//while(f)
        {

            char *p;
            char t[30];
            int n;
            strcpy(t,a.givename());
            strlwr(t);
            strlwr(x);
            p=strcmp(t,x);
            n=p-t-1;

            if(n>0 && x<=strlen(t))
            {
            flag=1;
            a.showdata();
            }
            f.read((char*)&a,sizeof(a));
        }
        if(flag==0)
            {
                cout<<"record not found "<<endl;
            }
         f.close();


       cout<<"Do u want to continue? y or n"<<endl;
       cin>>w;

}while(w=='y'||w=='Y');
    }

