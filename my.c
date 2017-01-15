#include<stdio.h>
//#include<conio.h>
#include<dos.h>
#include<stdlib.h>

int main()
{
      FILE *fp;
      char path[50];
      int i;
      printf("Enter patn ");
      gets(path);
     fp=fopen(path,"w");
      if(fp=NULL)
      {
        printf("\nfile creation Error :");
        return 1;
      }

      for(i=-128; i<=127; i++)
      {
       fputc(i,fp);
      }
      fclose(fp);
      return 0;

    // getch();
}
