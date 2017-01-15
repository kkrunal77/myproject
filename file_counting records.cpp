
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
   fstream f;
   account a;
  int rs, fs, n;
  f.open("bank.date",ios::in);
  rs=sizeof(a);
  f.seekg(0,ios::end);
  fs=f.tellg();
  n=fs/rs;
  f.close();
  cout<<"\n record size = "<<rs;

  cout<<"\n file size = "<<fs;

  cout<<"\n no of records ="<<n;



}
