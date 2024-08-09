#include<stdio.h>
  void term(int arr[] );
  void team(int *ptr);
  void main()
  {
     int array[4]={3,56,7,8};
     term(array);
     printf("\n%d",array[2]);
     int gum[4]={4,5,6,9};
     team(&gum);
  }
   void term(int arr[])
   {
       int i=0;
       for(i=0;i<4;i++)
        printf("\n%d",arr[i]);
        arr[2]=80;
        printf("\narr[2]=%d",arr[2]);

   }
   void team(int *ptr)
   {
       int i;
       for(i=0;i<4;i++)
       {
            *ptr=*(ptr+i);
        printf("\n%d",*ptr);

       }
   }
