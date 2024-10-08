#include<stdio.h>
#include<stdlib.h>
void append(int);
void display();
  typedef struct ptr
  {
      int value;
      struct ptr*next;
  }NODE;
   NODE *start=NULL;
  void main()
  {
      int n,data;
      do{
      printf("Enter <1> to add data enter <0> for end the linked list:");
      scanf("%d",&n);
       if(n==1)
       {
        printf("Enter the data");
         scanf("%d",&data);
         append(data);
       }
        }while(n!=0);
      display();
  }
  void append(int data)
  {
      NODE *temp,*curr;
      temp=(NODE*)malloc(sizeof(NODE));
      temp->value=data;
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
        NODE *curr=start;
        printf("The values are:");
        while(curr!=NULL)
        {
            printf("\n%d",curr->value);
            curr=curr->next;
        }
    }
