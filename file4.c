#include<stdio.h>
#include<stdlib.h>
#include<dos.h>

int main()
{
    FILE*fp;
    char ch;
    printf("krunal");

    //fp=open("E:\\1.txt","rt");

    if(fp==NULL)
    {
        printf("file cration Error ");
        return 1;
    }
    while(1)
    {
      fscanf(fp,"%c",ch);//ch=fgetc(fp);
      if(feof(fp));        //if(ch==EOF);
      break;
      printf("%c",ch);

    }
      fclose(fp);
      return 0;
}
