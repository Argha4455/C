#include<stdio.h>
   void main(){
   int flag=0,a,b,x;
   puts("Enter the range:");
   scanf("%d%d",&a,&x);
   for(b=a;b<=x;b++){
        int y=b;
   if(y==1||y==0)
   flag=0;
   for(int d=2;d<y;d++)
   {
       if(y%d==0){
        flag=1;
        break;
       }
       else
        flag=0;

   }
  if (flag==0)
    printf("\nThe number is not a prime number:%d",y);
  else
    printf("\nThe number is a prime number:%d",y);}
  fflush(stdin);
  getchar();
  }
