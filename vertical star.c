#include<stdio.h>
   void main(){
   int a,i,b,c=1,s=1,x,w;
   printf("Enter the number");
   scanf("%d",&a);
   for(i=1;i<=a;i++,c=c+2){
        s=a-i;
         for(x=1;x<=s;x++){
                printf(" ");
            }
    for(b=1;b<=c;b++){

        printf("*");
    }
    printf("\n");
   }}
