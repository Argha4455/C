#include<stdio.h>
    void main()
    {
     int a,b,c;
     printf("enter the three values");
     scanf("%d%d%d",&a,&b,&c);
     if (a>b&&c<a)
     printf("%d is maximum",a);
     else if (b>a&&b>c)
      printf("%d is maximum",b);
      else
       printf("%d is maximum",c);
       }
