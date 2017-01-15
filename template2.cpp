



//overloading using << & >> operator

#include<iostream>
#include<string.h>
//#include<stdio.h>
using namespace std;

template <class t1, class t2>

float sum(t1 a, t2 b)
{
    return a+b;

}

main(){

cout<<"int, float sum = "<<sum(10, 6.6)<<endl;
cout<<"float, int sum = "<<sum(10.5, 10)<<endl;


}
