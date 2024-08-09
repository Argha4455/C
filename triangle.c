#include<stdio.h>
#include<conio.h>
     void main(){
     int a,b,c;
     printf("enter three sides of triangles");
     scanf("%d %d %d",&a,&b,&c);
     if (a==b&&c==a&&b==c)
     printf("equilateral triangle");
     else if (a==b&&b!=c&&c!=a)
     printf("isosceles triangle");
     else if (a==b&&b!=c&&c!=a)
        printf("isosceles triangle");
     else if (a!=b&&b==c&&c!=a)
        printf("isosceles triangle");
     else
     printf("no match");
     }
