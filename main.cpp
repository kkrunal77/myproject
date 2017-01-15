
#include <iostream>
using namespace std;

int main()
{
int N, n, r=0, d;
 cout<<"Enter int No : ";
 cin>>N;
 n=N;

 do{
    d=n%10;
    r=r*10+d;
    n=n/10;


 }while(n!=0);

 if(N==r)
    {cout<<"Palindrome NO";}

  else{
        cout<<"Not a palindrome NO";}
}
