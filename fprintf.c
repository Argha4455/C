#include<stdio.h>
#include<stdlib.h>
    void main()
    {
        FILE *fp;
        int acc;
        float balance;
        fp=fopen("account.txt","a");
        if (fp==NULL)
        {
            printf("Can't open the file");
            exit(1);
        }
        do{
            printf("Enter the account number:(for exit enter 0)");
            scanf("%d",&acc);
            if(acc==0)
                break;
            printf("Enter the balance:");
            scanf("%f",&balance);
            fprintf(fp,"%-5d%-10.2f",acc,balance);
        }while(1);
    }
