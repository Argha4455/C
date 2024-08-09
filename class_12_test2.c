#include<stdio.h>
  void main()
  {
      int arr[2][4]={{45,67,87,65},
                   {6,8,9,1}};
        int arr2[3]={5,6,7};
      printf("The arr=%u\n",arr);
      printf("The &arr=%u\n",&arr);
      printf("The arr+1=%u\n",arr+1);
      printf("The &arr+1=%u\n",&arr+1);

       printf("The arr[2][0]=%d,address=%u\n",arr[1][0],&arr[1][0]);
       printf("The arr2=%u",arr2);
  }
