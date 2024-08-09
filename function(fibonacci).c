#include<stdio.h>
  int fibo(int);
  void main()
  {
      int a,b;
      printf("Enter the number");
      scanf("%d",&a);
      b=fibo(a);
      printf("%d",b);
  }
int fibo(int x)
{
    if(x==2||x==3)
        return 1;
    else
        return (fibo(x-1)+fibo(x-2));
}
