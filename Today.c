#include<stdio.h>
#include<conio.h>
     void main(){
     int a;
     printf("enter the value");
     scanf("%d",&a);
     do{
        a=a-1;
        printf("\n%d",a);
        if(a==1){
            break;
        }
        if(a==4){
            continue;
        }
     }while(a<10+2);
     }
