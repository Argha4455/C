#include<stdio.h>
int armstrong(int);
int power(int,int);
   void main()
   {
       int a,b,c;
       puts("Enter the number:\n");
       scanf("%d",&a);
       b=armstrong(a);
       if(b==a)
        printf("%d is armstrong");
       else
         printf("%d is not armstrong");
   }
   int power(int base,int index)
   {
       int c=1;
       while(index--)
        c=c*base;
       return c;
   }
   int armstrong(int argha)
   {

   }
