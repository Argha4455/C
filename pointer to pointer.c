#include<stdio.h>
  void main()
  {
      int a=9;
      int *ptr,**pptr;
      ptr=&a;
      pptr=&ptr;
      printf("The value of a is %d\n",*ptr);
      printf("The value of pointer is or the address of a is %d\n",*pptr);
      printf("The value of a by pointer to pointer is:%d\n",**pptr);
      printf("The value of pointer to pointer or the address of pointer is :%d\n",pptr);
  }
