#include<stdio.h>
   void main(){
   int a,i,b,c;
   printf("Enter the number");
   scanf("%d",&a);
   c=(a+1)/2;
    for(i=1;i<=c;i++){
   for(b=1;b<=i;b++){
        printf("*");
   }printf("\n");}
   for(i=c;i>=1;i--){
   for(b=1;b<=i-1;b++){
        printf("*");
   }printf("\n");}

   }
