#include<stdio.h>
int factorial(int number){
    if (number==1||number==0)
    {
            return 1;
    }
    else
    {
         return (number*factorial(number-1));
    }
}
    void main(){
        int num;
    printf("enter the number which factorial you want");
    scanf("%d",&num);
    printf("%d",factorial(num));
    }
