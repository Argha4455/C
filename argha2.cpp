#include<stdio.h>
#include<math.h>

   int main(){
       fflush(stdin);
   int a,b,c=0;
   printf("Enter the number:");
   scanf("%d",&a);
   while(a>=1){
    b=a%10;
    c=c+pow(b,3);
    a=a/10;
   }
   printf("%d",c);


   return 0;
   }



