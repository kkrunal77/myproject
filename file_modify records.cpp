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

    void update()
    {
        cout<<"Enter a new data ";
        cin>>a;
    }
};

main()
{
   fstream f;
   account a;
   char w;
  int rs, fs, n, x;
  f.open("bank.date",ios::in);
  rs=sizeof(a);
  f.seekg(0,ios::end);
  fs=f.tellg();
  n=fs/rs;
  f.close();
  //cout<<"\n record size = "<<rs;

  //  cout<<"\n file size = "<<fs;

  // cout<<"\n no of records ="<<n;
  do{
    f.open("bank.date",ios::in|ios::out);
    f.read((char*)&a, sizeof(a));
    cout<<"enter a A/C no ";
    cin>>x;
    if(x>0 && x<=n)
    {
      f.seekg((x-1)*rs, ios::beg);
      f.read((char*)&a, sizeof(a));
      a.showdata();
      f.seekp((x-1)*rs, ios::beg);
      a.update();
      f.write((char*)&a, sizeof(a));


    }
   else{
     cout<<"record not found "<<endl;
   }
   cout<<"any more y or n ";
   cin>>w;
  }while(w=='y' || w=='Y');


}

