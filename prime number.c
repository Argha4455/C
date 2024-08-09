#include<stdio.h>
    void main(){
    int n,flag=0,a;
    printf("Enter the number:");
    scanf("%d",&n);
    if(n==1||n==0){
        flag=0;
    }
    for(a=2;a<n;a++){
        if(n%a==0){
            flag=1;
            break;
        }
        else
            flag=0;
    }
    if(flag==0)
        printf("Not a prime number");
    else
        printf("Prime number");
    }

