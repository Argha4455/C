#include<stdio.h>
void Display(int (*a)[4])
 {
     for(int i=0;i<4;i++){
        for(int j=0;j<3;j++)
          printf("%d",*(*(a+i)+j));
        printf("\n");
     }
 }
  void main(){
  int mat[4][3];
  for(int i=0;i<4;i++)
   for(int j=0;j<3;j++)
   {
       printf("Enter the array elements:");
       scanf("%d",&mat[i][j]);
   }
   Display(mat);
  }
