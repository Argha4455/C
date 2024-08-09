#include<stdio.h>
    void main(){
    int num,i,j,end;
    for(i=0;i<8;i++){
        for(j=0;j<8;j++){
            printf("enter 0 for exit");
            scanf("%d",&num);
            if(num==0){
                goto label;
            }
        }
    }
  label:
        ;
    }
