

#include<iostream>
#include<fstream>
using namespace std;

class account
{
private:
    int acno;
    float b;
    char n[20], a[20], t[5];
public:
    void putdata()
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

    int giveacno()
    {
        return acno;
    }
};
    main()
    {
        account a; // class object

        fstream f;
        char w;
        int x,flag;


do{
        f.open("bank.date",ios::in);
        f.read((char*)&a,sizeof(a));
        flag=0;

        cout<<"enter a/c no = ";
        cin>>x;
        while(!f.eof())//while(f)
        {


            if(x==a.giveacno())
            {
            flag=1;
            a.putdata();
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
