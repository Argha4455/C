#include<stdio.h>
  void main(){
  int a,r,g,h,n,w,x,y;
    printf("Enter the range:");
    scanf("%d",&a);
    printf("To");
    scanf("%d",&r);
    for(h=a;h<=r;h++){
            n=0;
            w=h;
            y=h;
        while(y>=1){
            x=y%10;
            n=n+x*x*x;
            y=y/10;
        }
         if(n==w)
    printf("\n%d=Armstrong number",w);
  // else
    //printf("\n%d=Not a Armstrong number:",w);

    }
  }
