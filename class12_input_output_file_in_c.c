#include<stdio.h>
#include<stdlib.h>
  void main()
  {
      FILE *ptr;
      ptr=fopen("argha.c","r");
      char c;
        c=fgetc(ptr);
      printf("%c",c);
      char str[100];
      fgets(str,10,ptr);
      printf("The string is:%s",str);
  fclose(ptr);
  }

