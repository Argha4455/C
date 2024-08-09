#include<stdio.h>
#include<stdlib.h>
  void main(){
  int row,col,i,j;
  int** r;
  printf("Enter the row number:");
  scanf("%d",&row);
  printf("Enter the column number:");
  scanf("%d",&col);
  r=malloc(row*sizeof(int*));
  for(i=0;i<row;i++)
    *(r+i)=malloc(col*sizeof(int));
  for(i=0;i<row;i++)
    for(j=0;j<col;j++)
  {
      printf("Enter the element a[%d][%d]:",i+1,j+1);
      scanf("%d",(*(r+i)+j));
  }
  for(i=0;i<row;i++)
    for(j=0;j<col;j++)
  {
      printf("\nThe element a[%d][%d] is:%d",i+1,j+1,*(*(r+i)+j));
  }
  free(r);
  }
