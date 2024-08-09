#include<stdio.h>
   void main(){
   int a,b,c,d=0;
   printf("Enter the number which table you want:");
   scanf("%d",&a);
   printf("How many times you want");
   scanf("%d",&b);
   do{
    d=d+1;
    c=d*a;
    printf("\n%d*%d=%d",a,d,c);
   }while(d<b);
   }
