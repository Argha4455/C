#include<stdio.h>
   void main()
   {
       char temp[3][100];
       int k,i,num;
       printf("Enter the number of names you want to store:");
       scanf("%d",&num);
       for(i=0;i<num;i++)
       {
           printf("the name%d:",i+1);
        scanf("%s",temp[i]);
   }
   for(i=0;num>i;i++){
    for(k=0;temp[i][k]!=0;k++);
        printf("\nname%d have %d letters",i+1,k);
   }
   }
