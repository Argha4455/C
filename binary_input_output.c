#include<stdio.h>
#include<stdlib.h>
  void main()
  {
      int value,count;
      int *ptr=&value;
      FILE *fp;
      fp=fopen("argha.txt","ab");
      do{
        printf("\nEnter the value:");
        scanf("%d",&value);
        if (value==0)
            break;
        count=fwrite(ptr,sizeof(value),1,fp);
        if(count==1)
            printf("\nSuccessfully printed in file");
        else
            printf("Unsuccessfull attempt");
      }while(1);
      fclose(fp);
  }
