#include<stdio.h>
  void main()
  {
      int a[100],num[100],size,i;
      printf("Enter the size of the array :");
      scanf("%d",&size);
      printf("Enter the Elements of the array:");
      for(i=0;i<size;i++)
        scanf("%d",&a[i]);
     for(i=0;i<size;i++)
     {
         num[i]=1;
         for (int b=i+1;b<size;b++)
         {
             if(a[i]==a[b])
             {
                 num[i]++;
                 a[b]=0;
             }
         }
     }
     for(i=0;i<size;i++)
     {
         if(a[i]!=0)
            printf("\n%d:%d",a[i],num[i]);
     }
        }
