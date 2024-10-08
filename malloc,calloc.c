#include<stdio.h>
#include<stdlib.h>
    void main()
    {
        int **m,row,col,i,j;
        printf("Enter the columns:");
        scanf("%d",&col);
        printf("Enter the row:");
        scanf("%d",&row);
        m=(int**)malloc(sizeof(int*)*row);
        for(i=0;i<row;i++)
            *(m+i)=(int*)malloc(sizeof(int)*col);
        for(i=0;i<row;i++)
            for(j=0;j<col;j++)
        {
            printf("Enter the element[%d][%d]:",i,j);
            scanf("%d",(*(m+i)+j));
        }
        for(i=0;i<row;i++)
            for(j=0;j<col;j++)
                printf("\nThe element[%d][%d] is:%d",i,j,*(*(m+i)+j));
    }
