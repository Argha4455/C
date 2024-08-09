#include<stdio.h>
  void main()
  {
      int num,counter=0,a[100],flag=0;
      printf("Enter the number you want to check for plaindrome:");
      scanf("%d",&num);
      while(num!=0)
      {

          a[counter]=num%10;
          num=num/10;
          counter++;
      }
        for(int i=0;i<(counter/2);i++)
         {
          if(a[i]==a[(counter-1)-i])
            flag=1;
          else
            flag=0;
           }
      if(flag==1)
        printf("The number is plaindrom");
      else
        printf("The number is not plaindrom");
  }
