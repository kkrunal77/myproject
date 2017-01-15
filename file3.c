#include<stdio.h>
#include<stdlib.h>
#include<dos.h>

int main()
{

    FILE*fp;
    char path[30];
    char ch;
    int count=0;
    printf("Enter a path ");
    gets(path);
    fp=fopen(path,"rt");
    if(fp==NULL)
    {
        printf("file cration Error ");
        return 1;
    }
    while(1)
    {
      ch=fgetc(fp);
      if(ch==EOF)
      break;
      printf("%c",ch);
      if(ch=='\n')
      ++count;

      /*if(count==3)
      {
          delay(1000);
          count=0;
      }*/
    }
      fclose(fp);
      return 0;
    }
