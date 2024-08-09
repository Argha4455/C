#include<stdio.h>
#include<math.h>
    int pt(int);
   int arm(int);
   void main()
   {
       int a[100],num,i;
       printf("Enter the size of array:");
       scanf("%d",&num);
       printf("Enter the elements of array:");
       for(i=0;i<num;i++)
           scanf("%d",&a[i]);
           printf("The armstrong numbers are:");
        for(i=0;i<num;i++)
        {
            if(a[i]==arm(a[i]))
                printf("\n%d",a[i]);
        }
   }
   int pt(int y)
{
    int c=0;
    while(y>0)
    {
       c++;
       y/=10;
    }
 return c;
}
int arm(int x)
{
    int rem,sum=0,r;
    r=x;
    while(x>0)
    {
        rem=x%10;
        sum=sum+pow(rem,pt(r));
        x=x/10;
    }
    return sum;
}
