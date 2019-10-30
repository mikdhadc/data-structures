//push and pop in stack as linked list

#include<stdio.h>
#include<stdlib.h>

typedef struct n
{  int data;
   struct n *link;
} node;

void main()
{  node *temp,*header,*ptr,*top;
   int n,i,x,choice;
   char ch='y';
   top=NULL; 
   header=(node*)malloc(sizeof(node));
   header->data=0;
   header->link=top;
   printf("\n Enter no. of Elements : ");
   scanf("%d",&n);
   for(i=0;i<n;++i)
   {  temp=(node*)malloc(sizeof(node));
      if(temp==NULL)
      {  printf("\n STACK OVERFLOW ");
         break;
      }
      else
      {  printf("Enter element: ");
         scanf("%d",&x);
         temp->data=x;
         temp->link=top;
         top=temp;
         header->link=top;
      }
   }
   printf("\n Created Stack is : ");
   ptr=header->link;
   while(ptr!=NULL)
   {  printf("%d ",ptr->data);
      ptr=ptr->link;
   }
do
   {  printf("\n\nOPERATIONS \n\n 1. Push \n 2. Pop \n\n Enter your Choice : ");
      scanf("%d",&choice);
      switch(choice)
      {  case 1 : temp=(node*)malloc(sizeof(node));
                  if(temp==NULL)
                  {  printf("\n Stack Overflow ");
                  }
                  else
                  {  printf("\n Enter item : ");
                     scanf("%d",&x);
                     temp->data=x;
                     temp->link=top;
                     top=temp;
                     header->link=top;
                  }
                  printf("\n New Stack is : ");
                  ptr=header->link;
		  while(ptr!=NULL)
		{printf("%d  ",ptr->data);
		ptr=ptr->link;
		}

                  break;
         case 2 : if(header->link==NULL)
                    printf("\n Stack underflow ");
                  else
                  {  ptr=top;
                     top=top->link;
                     header->link=top;
                     printf("\n The Deleted Element is %d. ",ptr->data);
                     free(ptr);
                  }
		
                  printf("\n New Stack is : ");
                  ptr=header->link;
                  while(ptr!=NULL)
                  {  printf("%d ",ptr->data);
                     ptr=ptr->link;
                  }
                
		  break;
         default :printf("\n Invalid input ");
}      
      printf("\nDo you want to continue? (Y/N) : ");
      scanf(" %c",&ch);
}
while(ch=='y');

   printf("\n");
}

