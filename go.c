#include<stdio.h>
   void main(){
   int a,b,c,d,e=1;
   printf("Enter the number");
   scanf("%d",&a);
   printf("Enter the difference");
   scanf("%d",&b);
   printf("Enter how many terms you want");
   scanf("%d",&c);
   for(d=0;d<=c-1;d++){
    a=a+b;
    printf("\t%d",a);
   }
   }
