#include<stdio.h>
   void main(){
   int a=0,b=1,c,i,n;
   printf("Enter the value:");
   scanf("%d",&n);
   printf("The Fibonacci series is:");
   printf("%d,%d",a,b);
   for(i=3;i<=n;i++){
    c=a+b;
    printf(",%d",c);
    a=b;
    b=c;
   }}
