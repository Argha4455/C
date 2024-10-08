#include<stdio.h>
#include<stdlib.h>
 struct student{
   char name[30];
   int roll;
   float marks;
   };
   void main()
   {
       FILE *fp;
       fp=fopen("Student4.txt","w");
       struct student *sptr;
       int n,i;
       printf("Enter the number of the students:");
       scanf("%d",&n);
       sptr=(struct student *)malloc(sizeof(struct student)*n);
       for(i=0;i<n;i++){
        printf("\nEnter the student %d name:",i+1);
        scanf("%s",&(sptr+i)->name);
        printf("\nEnter the roll:");
        scanf("%d",&(sptr+i)->roll);
        printf("\n Enter the marks:");
        scanf("%f",&(sptr+i)->marks);
        fwrite(sptr+i,sizeof(sptr+i),1,fp);
       }
       fclose(fp);

          }
