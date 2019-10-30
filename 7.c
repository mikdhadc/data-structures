//Deletion from linked list

#include<stdio.h>
#include<stdlib.h>
typedef struct node1
{
int data;
struct node1 *link;
}node;
void main()
{
node *ptr,*header,*temp;
header=(node*)malloc(sizeof(node));
header->data=0;
header->link=NULL;
int i,n,num,c,k;
printf("Enter no.of elements : ");
scanf("%d",&n);
ptr=(node*)malloc(sizeof(node));
ptr=header;
for(i=0;i<n;i++)
{
temp=(node*)malloc(sizeof(node));
printf("Enter : ");
scanf("%d",&num);
temp->data=num;
temp->link=NULL;
ptr->link=temp;
ptr=ptr->link;
}
ptr=header->link;
while(ptr!=NULL)
{
printf("%d\n",ptr->data);
ptr=ptr->link;
}
printf("\nDELETION :");
printf("\n1.From beginning \n2.From end \n3.After any key");
char y;
do
{
printf("\nEnter your choice(1/2/3) : ");
scanf("%d",&c);
switch(c)
{
case 1:
        ptr=header->link;
        header->link=ptr->link;
        free(ptr);
        printf("Deleted.");
        break;
case 2:
       ptr=header;
       while(ptr->link!=NULL)
       {
       temp=ptr;
       ptr=ptr->link;
       }
       temp->link=NULL;
       free(ptr);
       printf("Deleted.");
       break;
case 3:
       printf("\nEnter key : ");
       scanf("%d",&k);
       ptr=header->link;
       if(header->link==NULL)
       {
       printf("\nEmpty list.");
       }
       else
       {
       while(ptr->data!=k && ptr!=NULL)
       {
       
       ptr=ptr->link;
       temp=ptr;
       }
       if(ptr==NULL)
       {
       printf("\nkey not found"); 
       }
       else
       {
       ptr=ptr->link;
       temp->link=ptr->link;
       free(ptr);
       printf("Deleted.");
       }
       }
       
       break;
  }
  printf("Do you want to continue : ");
  scanf(" %c",&y);
  }
  while(y=='y');
  ptr=header->link;
  printf("\n New list :\n");
while(ptr!=NULL)
{
printf("%d\n",ptr->data);
ptr=ptr->link;
}
}

