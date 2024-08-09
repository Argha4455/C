//here we use call by reference
#include<stdio.h>
typedef int* ptr;
   int fun(ptr);
   void main()
   {
       int a,b,c;
       ptr g;
       a=7;
       g=&a;
       b=fun(g);
       printf("%d",b);
       printf("The value of a is %d",a);
   }
    int fun(ptr argha)
    {
        int n;
        *argha=(*argha+1);
      n=*argha;
        return n;
    }
