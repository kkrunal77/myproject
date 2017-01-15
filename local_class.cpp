#include<iostream>
#include<string>

using namespace std;


   int x=10;
   void fun()
   {
       class local
       {
           int x;
       public:
            void read()
            {
                cout<<"entr a no = ";
                cin>>x;
                cout<<"global = "<<::x<<endl;
                cout<<"local = "<<x<<endl;

            }
       };
       local l;
       l.read();
   }

main(){
fun();

}

