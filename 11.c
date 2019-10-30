//deletion from doubly linked list

#include<stdio.h>
#include<stdlib.h>
typedef struct node1
{
int data;
struct node1 *rlink,*llink;
}node;
void main()
{
node *ptr,*header,*temp,*new,*ptr1,*ptr2;
header=(node*)malloc(sizeof(node));
header->data=0;
header->rlink=NULL;
int i,k,n,num,c;
char y;
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
temp->rlink=NULL;
ptr->rlink=temp;
temp->llink=ptr;
ptr=ptr->rlink;
}
printf("Created List : ");
ptr=header->rlink;
while(ptr!=NULL)
{
printf("%d\n",ptr->data);
ptr=ptr->rlink;
}
printf("DELETION \n\n1.From Beginning \n2.Anywhere \n3.From end \n");
do
{
printf("Enter choice(1/2/3): ");
scanf("%d",&c);
switch(c)
{
case 1:ptr=header->rlink;
       ptr1=ptr->rlink;
       header->rlink=ptr1;
       if(ptr1!=NULL)
       {
       ptr1->llink=header;
       }
       free(ptr);
       break;
case 2:printf("Enter element to delete : ");
       scanf("%d",&k);
       ptr=header->rlink;
       while(ptr->data!=k && ptr!=NULL)
       {
      
       ptr=ptr->rlink;
       }
       if(ptr==NULL)
       {
       printf("Key not found. ");
       }
       else
       {
       ptr1=ptr->llink;
       ptr2=ptr->rlink;
       ptr1->rlink=ptr2;
       if(ptr2!=NULL)
       {
       ptr2->llink=ptr1;
       }
       free(ptr);
       }
       break;
case 3:ptr=header->rlink;
       while(ptr!=NULL)
       {
       temp=ptr;
       ptr=ptr->rlink;
       }
       ptr1=temp->llink;
       ptr1->rlink=NULL;
       free(temp);
       break;
       
 }
 printf("\nDo you want to continue(y/n): ");
scanf(" %c",&y);
}
while(y=='y');
printf("New list : \n");
ptr=header->rlink;
while(ptr!=NULL)
{
printf("%d\n",ptr->data);
ptr=ptr->rlink;
}
}
