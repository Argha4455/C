#include<stdio.h>
#include<conio.h>
   void main(){
   int a;
   printf("Enter the password");
   scanf("%d",&a);
   if(a==1234)
    printf("hello");
   else if(a==1243||a==1111)
   printf("you are too close");
   else
    printf("get out");
   }
