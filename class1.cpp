
#include<iostream>
using namespace std;

  class stu
  {
  private:

      int a, b;

  public:
       void getdata()
       {
        cout<<"Enter value of a & b ";
        cin>>a>>b;


       }
        void putdata()
        {
          cout<<"a = "<<a<<endl;
          cout<<"b = "<<b<<endl;
        }
  };

  int main()
  {
      stu *p, s;
      (*p).getdata();//p->getdata();
      p->putdata();
  }
