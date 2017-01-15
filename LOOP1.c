#include<stdio.h>
#include<stdlib.h>
#include<dos.h>
void main()
{
   int a,b;
   for (a=b=8; a; printf("\n%d %d",a,b))
    a=b-->=5;

   printf("\na=%d b=%d" ,a+10,b+10);

}
