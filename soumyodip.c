#include<stdio.h>
struct profile
      {int argha;
       char k[16];};
void main()
{
    struct profile a[100];
    int n,i;
    printf("Enter the number of array elements is:");
    scanf("%d",&n);
    printf("Enter the array elements and array name:");
    for(i=0;i<n;i++){
            fflush(stdin);
            printf("\nname:");
    scanf("%s",a[i].k);
    printf("size:");
        scanf("%d",&a[i].argha);}
    printf("The armstrong numbers are:");
    for(i=0;i<n;i++){
        int sum=0,rem=0,temp=a[i].argha;
        while(temp>0){
            rem=temp%10;
            sum=sum+(rem*rem*rem);
            temp=temp/10;
        }
        if(sum==a[i].argha){
            printf("\nname:%s",a[i].k);
            printf("\nthe array:%d",a[i].argha);
    }}
}
