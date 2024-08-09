#include<stdio.h>
#include<string.h>
   void main()
   {
       char str[100],temp[100];
       int i;
       printf("Enter your name:");
       scanf("%s",str);
       for(i=0;str[i]!='\0';i++);
        printf("Your name have %d words",i);
        strcpy(temp,str);
        printf("\n%s",temp);

   }
