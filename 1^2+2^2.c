#include<stdio.h>
  void main(){
  int a,i,f=0;
  printf("Enter the number");
  scanf("%d",&a);
  for(i=1;i<=a;i++){
    f=i*i+f;
  }
  printf("The answer is:%d",f);}

