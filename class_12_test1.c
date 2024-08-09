#include<stdio.h>
   void main()
   {
    int (*pa)[3];
   int a[3][3]={1,3,4,
                7,8,9,
                3,2,23};
pa=a;
for(int i=0;i<3;i++)
{
    printf("The value of a[%d][0]=%u\n",i,&a[i][2]);
    printf("The value of pa[%d]=%u\n",i,pa[i]);
}

   }
