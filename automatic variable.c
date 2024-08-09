#include<stdio.h>
   void main()
   {
       int auto count1, count2=20;
       printf("\nthe outer value of count1(unintialize) is %d",count1);
       count1=10;
       printf("\nthe outer value of count1 is %d",count1);
       printf("\nthe outer value of count2 is %d",count2);
       {
           int auto count1=50;
           printf("\nthe inner value of count1 is %d",count1);
           count1=count1+30;
           count2=count2+20;
       }
       printf("\nthe outer value of count1 %d",count1);
       printf("\nthe outer value of count2 is %d",count2);
   }
