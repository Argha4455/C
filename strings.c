#include<stdio.h>
#include<string.h>
  void upper(char);
  void main()
  {
      int a,k=0;
      char argha[1000],work[603];
      printf("Enter the name:");
      scanf("%[^\n]",argha);
      strcpy(work,argha);
      printf("%s",work);
       upper(argha);
      printf("%s",argha);
      for(a=0;a<strlen(argha)+1;a++)
      {
          if(argha[a]=='T'&&argha[a+1]=='H'&&argha[a+2]=='E'&&argha[a+3]=' ')
          k=1;
          else if(argha[a]==' '&&argha[a+1]=='T'&&argha[a+2]=='H'&&argha[a+3]=='E')
          k=1;
          else
            k=0;
      }
  }
  void upper(char argha)
  {
      int a;
      for(a=0;a<=strlen(argha);a++)
      {
      if(argha[a]>=97&&argha[a]<=122)
          argha[a]=argha[a]+32;
      }
  }
