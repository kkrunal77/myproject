
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
};
    main()
    {
        account a; // class object
        int b=1;
        fstream f;
        char w;
        f.open("bank.date",ios::in);

            //


        while(!f.eof())//while(f)
        {
            cout<<"Record "<<b<<endl;


            f.read((char*)&a,sizeof(a));

            a.putdata();
            cout<<endl<<endl;
            b++;
        }
         f.close();
    }
