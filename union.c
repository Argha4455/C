#include<stdio.h>
typedef union info
{
    int data ;
    char name[14];
} argha;
   void main()
   {
   argha a,b;
   printf("Enter the name:");
   scanf("%s",a.name);
   printf("Enter the data:");
   scanf("%d",&a.data);
   printf("\nThe name is:%s",a.name);
   printf("\nThe data is:%d",a.data);
   }
