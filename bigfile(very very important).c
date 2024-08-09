#include<stdio.h>
#include<conio.h>
   void main(){
       int a,b,c;
   printf("enter three values");
   scanf("%d\t%d\t%d",&a,&b,&c);
   if (a>b)
   {
       if (a>c)
        {printf("\t%d is greater than %d",a,b);
        if (b>c)
            printf("\t%d is greater than %d",b,c);
        else
            printf("\t%d is smaller than %d",b,c);
        }
   else
   {printf("\t%d is smaller than %d",a,c);
   if (c>b)
    printf("\t%d is greater than %d",c,b);

   }
   }
   else
    {printf ("\t%d is smaller than %d",a,b);
    if (b>c)
        {printf("\t%d is greater than %d",b,c);
         if (a>c)
            printf("\t%d is greater than %d",a,c);
            else
                printf("\t%d is smaller than %d",a,c);
          }
        else
           {printf("\t%d is smaller than %d",b,c);
        if (a>c)
            printf("\t%d is greater than %d",a,c);
            else
                printf("\t%d is smaller than %d",a,c);
           }
     }

   }
