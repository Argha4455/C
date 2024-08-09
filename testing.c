#include<stdio.h>
    void main()
    {
        int a=1,c=1,n;
        float b=1;
        float v=0;
        printf("Enter the number :");
        scanf("%d",&n);
        for(int i=1;i<=n;i++)
        {
         v=v+(1/b);
         printf("1/%d!+",a);
             a=a+2;
         while(c<=a)
        {
            b*=c;
            c++;
        }
       // printf("%d",b);
        }
        printf("\b=%f",v);
    }
