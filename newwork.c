#include<stdio.h>
struct argha{
 int data;
 char name[12];};

  void main()
  {
      int *pt,a=9;
      struct argha n;
      pt=&a;
      printf("The address of a is %d",pt);
      printf("\nEnter the name of the employee:");
      scanf("%s",n.name);
      printf("Enter the data of the employee:");
      scanf("%d",&n.data);
      printf("%s data is %d",n.name,n.data);
  }
