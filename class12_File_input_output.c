#include<stdio.h>
  void main()
  {
      char str[10];
      FILE *ptr=NULL;
      ptr=fopen("argha2.cpp","r");
      fscanf(ptr,"%s",str);
      printf("%s",str);

  }
