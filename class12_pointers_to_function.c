#include<stdio.h>
int add(int a,int b)
{
    return a+b;
}
int div(int a,int b)
{
    return a/b;
}
int multi(int a,int b){
    return a*b;
}
int sub(int a,int b){
    return a-b;
}
  void main(){
  int a,b,entry,result;
  int (*calc[3])(int,int)={add,multi,div,sub};
  printf("Enter the numbers you want to calculate:");
  scanf("%d",&a);
  scanf("%d",&b);
  printf("0 for addition 1 for multiplication 2 for divition a 3 for subtraction:");
  scanf("%d",&entry);
  printf("the result is %d",(calc[entry])(a,b));
  }
