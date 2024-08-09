#include<stdio.h>
   void main(){
   int a,i,b,c=1,x;
   char C;
      for(int s=1;s>0;s++){
   printf("Enter the number");
   scanf("%d",&a);
   for(i=a;i>=1;i--){
        c=(i*2)-1;

         for(x=a;x>=i+1;x--){
                printf("_");
            }
    for(b=c;b>=1;b--){

        printf("*");
    }
    printf("\n");
   }
   fflush(stdin);
   printf("Enter q for quite");
   scanf("%c",&C);
   if(C=='q')
    break;
    }

   }

