#include<stdio.h>
int open(int);
   void main()
   {
       char a,b;
       printf("Enter the number:");
       scanf("%c",&a);
       b=open(a);
       printf("The upper case character of %c is %c",a,b);
       getchar();

   }
   int open(int x)
   {
     int d;
     d=x-32;
     return d;
   }
