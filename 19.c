//queue as linkedlist

#include<stdio.h>
#include<stdlib.h>

typedef struct n
{ 
   int data;
   struct n *link;
}node;

void main()
{  

   node *header,*temp,*front,*rear,*ptr;
   int n,x,i,c;
   char y;
   header=(node*)malloc(sizeof(node));
   header->data=0;
   header->link=NULL;
   printf("\n Enter no.of elements : ");
   scanf("%d",&n);

   printf("Enter elements : ");

   for(i=0;i<n;++i)
   { 
   
      temp=(node*)malloc(sizeof(node));
      if(temp==NULL)
          printf("\n Memory not allocated ");
      else
      { 
         scanf("%d",&x);
         temp->data=x;
         temp->link=NULL;
         if(header->link==NULL)
         {  
            header->link=temp;
            front=temp;
            rear=temp;
         }
         else
         {  
            rear->link=temp;
            rear=temp;
         }
      }
  }  
  
  
   ptr=front;
   printf("\n Queue is : ");
   
   
   while(ptr!=NULL)
   { 
      printf("%d ",ptr->data);
      ptr=ptr->link;
   }
   
   
   printf("\n\n OPERATIONS\n\n1.INSERTION \n2.DELETE \n");
   
   do
   {   printf("\n Enter Your Choice : ");
      scanf("%d",&c);
      switch(c)
      {  case 1 : printf("\nINSERTION\n");

		  temp=(node*)malloc(sizeof(node));

                  if(temp==NULL)
                    printf("\n Memory not allocated\n " );
                  else
                  {  
                     printf("\n Enter item  : ");
                     scanf("%d",&x);

                     temp->data=x;
                     temp->link=NULL;

                     if(header->link==NULL)
		     {
		        header->link=temp;
                        front=temp;
                        rear=temp;
                     }
                     else
                     {   
                        rear->link=temp;
                        rear=temp;
                     }
                  }
                  break;
         case 2 : printf("\nDELETION\n");

		  if(header->link==NULL)
                       printf("\n Empty queue\n ");
                  else
                  {
		     x=front->data;
                     header->link=front->link;
                     free(front);
                     front=header->link;
                     printf("\n Deleted Element is : %d ",x);
                  }
                  break;
         default :printf("\n Invalid  ");
      }

      ptr=front;
      printf("\n  Queue is : ");
      
      
      while(ptr!=NULL)
      {
         printf("%d ",ptr->data);
         ptr=ptr->link;
      }

      printf("\n Do You Want to Continue  : ");
      scanf(" %c",&y);
  }
   
   while(y=='y' || y=='Y');
   
   printf("\n");
}
