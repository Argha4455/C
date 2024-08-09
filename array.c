#include<stdio.h>
    void main()
    {
        int basic[5],d=1,s;
        for(s=0;s<=4;s++,d++)
        {
            printf("Enter the Number of roll %d:",d);
            scanf("%d",&basic[s]);
        }
        while(s>=1)
        {
            s--;
            printf("%d\n",basic[s]);
        }
    }
