#include<stdio.h>
int sum(int x,int y);
   void main(){
   int a,b,c;
   c=sum(a,b);
   printf("The sum is:%d",c);
   }
   int sum(x,y){
   int m;
   puts("Enter the numbers:");
   scanf("%d%d",&x,&y);
   m=x+y;
   return m;
   }
