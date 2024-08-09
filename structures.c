#include<stdio.h>
   struct argha
   {
       int data;
       char name[12];
   };
  void main()
  {
      struct argha a[100];
      int n,b;
      printf("\nEnter the number of employee you want to store data:");
      scanf("%d",&n);
      for(b=0;b<n;b++)
      {
          printf("\nEnter the name of employee:");
          scanf("%s",a[b].name);
          printf("\nEnter the data of:");
          scanf("%d",&a[b].data);

      }
      for(b=0;b<n;b++)
      {
          printf("\nName of employee is %s",a[b].name);
          printf("\nThe data of:%d",a[b].data);
          }

  }
