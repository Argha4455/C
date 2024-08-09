#include<stdio.h>
   void main(){
   int a,i,b,s=1,x=1,w,c=1;
   printf("Enter the number");
   scanf("%d",&a);
   for(i=1;i<=a;i++,c=c+2){
        s=a-i;
          for(x=1;x<=s;x++){
                printf(" ");
            }
   for(w=i;c>=w;w++){
    printf("%d",w);
   }
    for(b=c-1;b>=i;b--){

        printf("%d",b);
    }
    printf("\n");
   }}
