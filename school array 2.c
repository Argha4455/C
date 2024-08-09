#include<stdio.h>

   void main()
   {
       int a[100],b,i;
       printf("Enter the value of the array");
       scanf("%d",&b);
       printf("Enter the elements of the array:");
       for(int v=0;v<b;v++)
       {
           scanf("%d",&a[v]);
       }
       i=a[0];
       for(int v=0;v<b;v++)
       {
           if(a[v]>i)
            i=a[v];
       }
       printf("The largest element of the array is %d",i);
          }
