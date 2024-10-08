#include<stdio.h>
#include<stdlib.h>
   void append(int);
   void display();
   void add(int);
   typedef struct pointer
   {
       int data;
       struct pointer *next;
   }NODE;
   NODE *start=NULL;
   void main()
   {
       while(1){
       int data,data2,count,count2;
       do{
        printf("\nEnter 1 for create a NODE or 0 for ending a NODE or enter 3 for adding a NODE:");
        scanf("%d",&count);
        count2=0;
        if(count==1){
            printf("Enter the data:");
            scanf("%d",&data);
            append(data);
        }
        if(count==3&&start!=NULL)
        {
            int i=0;
             printf("Enter how many NODEs you want to add:");
            scanf("%d",&count2);
            while(i!=count2){
            printf("Enter the NODE:");
            scanf("%d",&data2);
           add(data2);
           i++;
           }
        }
       }while(count!=0);
       display();
       }
   }
   void append(int data)
   {
       NODE *temp,*curr;
       temp=(NODE*)malloc(sizeof(NODE));
       temp->data=data;
       temp->next=NULL;
       if(start==NULL)
        start=temp;
       else
       {
           curr=start;
        while(curr->next!=NULL)
        {
            curr=curr->next;
        }
        curr->next=temp;
       }
   }
   void display()
   {
       NODE *dsp=start;
       printf("\nThe data are:");
     while(dsp!=NULL)
     {
         printf("\n%d",dsp->data);
         dsp=dsp->next;
     }
   }
   void add(int data)
   {
       NODE *edit=start,*temp;
       temp=(NODE*)malloc(sizeof(NODE));
       temp->data=data;
       temp->next=NULL;
       while(edit->next!=NULL)
       {
         edit=edit->next;
       }
        edit->next=temp;
   }
