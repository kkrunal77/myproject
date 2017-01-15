
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
    void getdata()
    {
    cout<<"account no = ";
    cin>>acno;cout<<endl;
    cout<<"Name = ";
    cin>>n;cout<<endl;
    cout<<"address = ";
    cin>>a;cout<<endl;
    cout<<"amount = ";
    cin>>b;cout<<endl;
    cout<<"A/C type = ";
    cin>>t;cout<<endl;
    }
};
    main()
    {
        account a; // class object
        fstream f;
        char w;
        f.open("bank.date",ios::out);
        do
        {
            a.getdata();
            f.write((char*)&a,sizeof(a));
            cout<<"Any more =";
            cin>>w;cout<<endl;
        }while(w=='y' || w=='Y');
         f.close();
    }
