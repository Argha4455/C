#include<stdio.h>
int sum(int a,int b);
  void main(){
  int a,b,c;
  printf("enter the two numbers");
  scanf("%d%d",&a,&b);
  c=sum(a,b);
  printf("%d",c);
  }
int sum(int a,int b){
return a+b;}
