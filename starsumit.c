#include<stdio.h>
    void main()
      {
          int a,b;
          for(a=1;a<=5;a++)
          {

              for(b=1;b<=5;b++)
              {
                  if(a==2||a==4){
                    if(b==3)
                    {
                        printf(" ");
                    }
                    else
                        printf("*");
                  }

                 else if(a==3)
                    {
                        if(b==3||b==2||b==4)
                        {
                            printf(" ");
                        }
                        else
                            printf("*");
                    }
                else
                    printf("*");

              }
              printf("\n");
          }
      }

