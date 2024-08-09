#include<stdio.h>
   int del(int arrl[],int i,int n)
   {
       int m;
      for(m=i;m<n-1;m++){
        arrl[m]=arrl[m+1];}
        n=n-1;
       return n;
   }
  void main()
  {
      int arr[100],n,i,k;
      printf("Enter the elements of No of the array:");
      scanf("%d",&n);
      int h=n;
      for(i=0;i<n;i++)
      {
          printf("The %d element of array is:",i+1);
          scanf("%d",&arr[i]);
      }
      printf("Enter the element you want to delete from the array:");
      scanf("%d",&k);
     // i=0;
      for(i=0;i<n;i++)
      {
        if(k==arr[i]){
            n=del(arr,i,n);
            i=0;
        }
      }
      for(i=0;i<n;i++)
        printf("%d",arr[i]);
  }
