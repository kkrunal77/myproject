#include<stdio.h>
#include<dos.h>
#include<stdlib.h>

 int main()
 {
     FILE*fp;
     fp=fopen("E:\\1.txt","w");
     if(fp==NULL)
     {
         printf("Error... Creating..file ");
         return 1;
     }
     fprintf(fp,"welcome");
     fprintf(fp,"\nkrunal");
     return 0;

 }

