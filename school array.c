#include<stdio.h>
   void main()
   {
       int a[100],b[100],c;
       printf("Enter the array limit");
       scanf("%d",&c);
       printf("Enter the elements of the array");
       for(int v=0;v<c;v++)
       {
           scanf("%d",&a[v]);
           b[v]=a[v];
       }
       printf("The array elements of b[v] is ");
       for(int v=0;v<c;v++)
       {
           printf("\n%d",b[v]);
       }
   }
