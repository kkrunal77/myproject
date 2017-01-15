
#include<iostream>
using namespace std;

  class stu
  {
  private:
    int id;
    char name[20];

  public:
    void getstu()
    {
    cout<<"Enter name and id : ";
    cin>>name>>id;
    }
    void putstu();

  };

 void stu::putstu()
 {
     cout<<"name = "<<name<<endl;
     cout<<"id = "<<id<<endl;
 }
     main()
 {
     stu s;
     s.getstu();
     s.putstu();

 }
