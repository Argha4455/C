#include<stdio.h>
#include<stdlib.h>
#include<string.h>
   void main()
   {
     char name[80];
     FILE *fp=NULL;
     fp=fopen("argha.txt","a");
    if (fp==NULL)
    {
        printf("can't open file");
        exit(1);
    }
    printf("\nEnter list of names to store (quite by pressing ENTER only):");
    do{gets(name);
    if (strlen(name)==0)
        break;
     fputs(name,fp);
     fputs("\n",fp);
      }while(1);
      fclose(fp);
   }
