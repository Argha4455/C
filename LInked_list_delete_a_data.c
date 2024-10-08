#include<stdio.h>
#include<stdlib.h>
   void del(int);
   void disp();
   void append(int);
   typedef struct ptr
   {
       int data;
       struct ptr *next;
   }NODE;
   NODE *start=NULL;
   void main()
   {
       while(1)
       {
           int data1,data2,choice,count1,count2;
           printf("\nEnter your choice\nFor making a list enter <1>\tFor deleting a data press <2>:");
           scanf("%d",&choice);
           if(choice==1)
           {
               printf("\nPlease enter how many data you want to store:");
               scanf("%d",&count1);
               int i=0;
               while(i!=count1)
               {
                   printf("\nEnter the data:");
                   scanf("%d",&data1);
                   append(data1);
                   i++;
               }
               disp();
           }
           if(choice==2)
           {
               printf("\nEnter how many data you want to delete:");
               scanf("%d",&count2);
               int n=0;
               while(n!=count2)
               {
                   printf("Enter the data:");
                   scanf("%d",&data2);
                   del(data2);
                   n++;
               }
               disp();
           }
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
    void del(int data)
    {
        NODE *search1,*prev;//this node is for searching the data from the linked list and the prev node is for storing the previous node
        search1=start;
        if(start->data==data)
            {
                prev=start;
              start=start->next;
              free(prev);
            }
        else
       {
        while(search1->data!=data)
        {
            prev=search1;
            search1=search1->next;
        }
        if(search1->next==NULL)
           {
               prev->next=NULL;
               free(search1);
           }
        else
        {
          prev->next=search1->next;
          free(search1);
        }
       }
    }
    void disp()
    {
        NODE *curr=start;
        while(curr!=NULL)
        {
            printf("\nThe data is:%d",curr->data);
            curr=curr->next;
        }
    }
