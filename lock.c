#include<stdio.h>
   void main()
   {
       int a,b,c=0;
       printf("Enter the series:");
       scanf("%d",&a);
       printf("to");
       scanf("%d",&b);
       for(;a+1<=b-1;a++)
       {
           if(a%2==0)
            c=c+1;
       }
       printf("%d\n",c);
   }
