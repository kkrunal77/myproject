



//overloading using << & >> operator

#include<iostream>
#include<string.h>
//#include<stdio.h>
using namespace std;

template <class t>

t sum(t a, t b)
{
    return a+b;

}

main(){

cout<<"int sum = "<<sum(10,10)<<endl;
cout<<"float sum = "<<sum(10.5,10.5)<<endl;


}
