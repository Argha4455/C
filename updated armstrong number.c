#include<stdio.h>
#include<math.h>
   void main(){
   int a,b,r;
   printf("Enter the range:");
   scanf("%d%d",&a,&b);
   for(r=a;r<=b;r++){
        int s,m=r,n=r;
        for(s=0;m>=1;s++){
            m=m/10;
        }
   int g,c=0;
 //  printf("%d",s);
   while(n>=1){
    g=n%10;
    c=c+pow(g,s);
    n=n/10;
   }
   if(c==r)
   printf("\n%d is armstrong number",c);
   }
   }


