#include<stdio.h>
#include<conio.h>
     void main(){
     int age;
     printf("Enter your age");
     scanf("%d",&age);
     switch (age){
     case 13:
        printf("hi kid");
        break;
     case 15:
        printf("hello teen");
        break;
     case 20:
        printf("hello");
        break;
     default:
        printf("sorry");

     }
     getch();
     }
