#include<stdio.h>
#include<conio.h>
   void main(){
   int a,b;
   printf("Enter the first value");
   scanf("%d",&a);
   printf("Enter the second value");
   scanf("%d",&b);
   if(a>b)
   printf("%d is greater than %d",a,b);
   else
   printf("%d is greater than %d",b,a);
   getch();
   }
