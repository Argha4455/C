#include<stdio.h>
#include<conio.h>
    void main(){
        int a;
    printf("Enter your marks:");
    scanf("%d",&a);
    if (a==100||a>=91){
        printf("A+");
    }
    else if (a==90||a>=81)
        printf("A");
    else if (a==80||a>=71)
        printf("B+");
     else if (a==70||a>=61)
        printf("B");
         else if (a==60||a>=51)
        printf("C+");
    else if (a==50||a>=41)
        printf("C");
    else if (a==40||a>=31)
        printf("D+");
    else if (a==30||a>=0)
        printf("D");
        getch();
    }
