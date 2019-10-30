//Doubly linked list

#include<stdio.h>
#include<stdlib.h>
typedef struct node1
{
int data;
struct node1 *rlink,*llink;
}node;
void main()
{
node *ptr,*header,*temp;
header=(node*)malloc(sizeof(node));
header->data=0;
header->rlink=NULL;
int i,n,num;
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
ptr=header->rlink;
if(ptr==NULL)
{
printf("Empty List.\n");
}
else
{
while(ptr!=NULL)
{
printf("%d\n",ptr->data);
ptr=ptr->rlink;
}
}
}
