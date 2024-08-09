#include<stdio.h>
struct argha{
int a;
int b;};
  void main(){
  struct argha c;
  c.a=10;
  c.b=9;
  struct argha *ptr;
  ptr=&c;
  printf("%d",(*ptr).a);
  printf("%d",ptr->a);
  }
