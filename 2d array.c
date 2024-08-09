#include<stdio.h>
    void main()
    {
        int mask[2][4]={{4,5,6,7},{5,23,69,45}};
        for(int i=0;i<2;i++)
        {
            for(int j=0;j<4;j++)
         {

             printf("\nthe array %d,%d is:%d",i,j,mask[i][j]);
         }
        }

    }
