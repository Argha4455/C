#include<stdio.h>
   void main(){
   int a,r,g=0,h;
   printf("Enter the number:");
   scanf("%d",&a);
   r=a;
   while(a>=1){
    h=a%10;
    g=g+h*h*h;
    a=a/10;
   }
   if(r==g)
    printf("Armstrong number");
   else
    printf("Not a Armstrong number:");

   }
