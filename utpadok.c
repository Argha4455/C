#include<stdio.h>
    void main()
    {
        int a,b,c=2,d,e=0,f;
        printf("Enter the Numbers");
        scanf("%d%d",&a,&f);
        while(e<=0)
        {
            b=a%c;
            d=f%c;
            if(b==d)
                e=1;
            else
                c++;
        }
        printf("\n%d",c);
    }
