#include<stdio.h>
#include<string.h>
  char smart(long int );
  int pow(long int );
   void main()
   {
     int a,b,point=0;
     char d;
     printf("How many times you want to play:");
     scanf("%d",&a);
     for(int m=0;m<=a;m++){
            fflush(stdin);
     printf("rock=r,paper=p,scissor=s\n Enter your choice:");
     scanf("%c",&d);
     int *ar=&d;
    long int loop=ar;
    smart(loop);
     if(smart(loop)=='rock'&&d=='r'){
     point++;
        printf("\nyour point is %d",point);
        }
        else if (smart(loop)=='paper'&&d=='p'){
            point++;
        printf("\nyour point is %d",point);
        }
        else if (smart (loop)=='scissor'&&d=='s'){
            point++;
        printf("\nYour point is: %d",point);}
        else
            printf("\nYour point is:%d",point);
        }

   }
   char smart(long int ptr)
   {
       char b[3][12]={'rock','paper','scissor'};
        int argha;
     argha=pow(ptr);
     for(int s=1;s<=argha;s++)
     {
         int h=s;
         if(h>=3)
        {
            for(h=1;h<=3;h++){
                printf("%s",b[h]);
                return b[h];}
        }
     else
        return b[h];
     }
   }
   int pow(long int star)
   {int a=0;
       while(star>=0)
       {
           star=star/10;
           a++;
       }
       return a;
   }
