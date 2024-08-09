#include<stdio.h>
#include<conio.h>
   void main(){
   float a,b,d;
   char c;
   printf("\nEnter the first value:");
   scanf("%f",&a);
   fflush(stdin);
   printf("\nEnter the operator:");
   scanf("%c",&c);
   printf("\nEnter the last digit:");
   scanf("%f",&b);
   switch(c){
   case '*':
       d=a*b;
       printf("\n%f*%f=%f",a,b,d);
       break;
   case '+':
       d=a+b;
       printf("\n%f+%f=%f",a,b,d);
       break;
   case '-':
       d=a-b;
       printf("\n%f-%f=%f",a,b,d);
       break;
   case '/':
       d=a/b;
       printf("\n%f/%f=%f",a,b,d);
       break;
   default :
    printf("MATH ERROR");
    break;}
    getch();
   }
