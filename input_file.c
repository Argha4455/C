#include<stdio.h>
   void main()
   {
      FILE *fp;
      char letter;
      int letter_len=0;
      int space=0;
      int newline=0;
      fp=fopen("argha.txt","r");
      do{
        letter=fgetc(fp);
        if(letter==EOF)
            break;
        letter_len++;
        if(letter==' ')
            space++;
        if(letter=='\n')
            newline++;
      }while(1);
      printf("the newline-%d,the spaces-%d,the total charecters-%d",newline,space,letter_len);
      fclose(fp);
   }
