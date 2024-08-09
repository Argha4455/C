#include<stdio.h>
    void main()
    {
        int a,b=1,c;
        printf("Enter the number:");
        scanf("%d",&a);
        while(b<=a)
        {
            c=1;
            while(c<=b)
            {
                printf("*");
                c++;
            }
            printf("\n");
            b++;
        }
    }
