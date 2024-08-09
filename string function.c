#include<stdio.h>
   void main()
   {
       char name[10];
       printf("Enter your name:");
       scanf("%[\^n]s",name);
       printf("%s",name);

   }
