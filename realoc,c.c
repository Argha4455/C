#include<stdio.h>
#include<stdlib.h>
  void main()
  {
      int *ptr,*ptr_new,n,i,j;
      printf("Enter the number of array:");
      scanf("%d",&n);
      ptr=(int*)malloc(sizeof(int)*n);
      if(ptr==NULL)
        printf("failed to initialize......");
      else
      {
          for(i=0;i<n;i++)
          {
              printf("\nEnter the element %d:",i);
              scanf("%d",(ptr+i));
          }
      }
      printf("Enter the new number of element that you wanted to add:");
      scanf("%d",&j);
      ptr_new=(int*)realloc(ptr,j*sizeof(int));
       if(ptr_new==NULL)
        printf("failed to initialize......");
      else
      {
          for(;i<j+n;i++)
          {
              printf("\nEnter the element %d:",i);
              scanf("%d",(ptr_new+i));
          }
      }
       for(i=0;i<n+j;i++)
        printf("\nThe element [%d] is:%d",i,*(ptr_new+i));
  }
