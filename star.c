#include<stdio.h>
   void main(){
   int a,i,b;
   printf("Enter the number");
   scanf("%d",&a);

   for(i=1;i<=a;i++){
   for(b=1;b<=i;b++){
        printf("*");
   }printf("\n");}
   }
