//insertion to linked list

#include<stdio.h>
#include<stdlib.h>
typedef struct node1
{
int data;
struct node1 *link;
}node;
void main()
{
node *ptr,*header,*temp,*new;
header=(node*)malloc(sizeof(node));
header->data=0;
header->link=NULL;
int i,n,num,c,x,k;
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

printf("INSERTION :\n1.At beginning  \n2.At end  \n3.After any key ");

ptr=header;
char y;
do
{
printf("\nEnter the choice (1/2/3): ");
scanf("%d",&c);
switch(c)
{
case 1:printf("Insertion at the beginning : ");
       printf("\nEnter element : ");
       scanf("%d",&x);
       new=(node*)malloc(sizeof(node));
       new->data=x;
       new->link=ptr->link;
       header->link=new;
       break;
case 2:printf("Insertion at the end : ");
       printf("\nEnter element : ");
       scanf("%d",&x);
       ptr=header;
       new=(node*)malloc(sizeof(node));
       while(ptr->link!=NULL)
       {
       ptr=ptr->link;
       }
       new->data=x;
       new->link=NULL;
       ptr->link=new;
       break;
case 3:printf("Insertion after a key : " );
       printf("\nEnter key and element : ");
       scanf("%d%d",&k,&x);
       new=(node*)malloc(sizeof(node));
       ptr=header->link;
       if(header->link==NULL)
       {
       printf("Empty list.\n");
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
       printf("Key not found.\n");
       }
       else
       {
       new->data=x;
       new->link=temp->link;
       temp->link=new;
       }
       }
       break;
   }
   printf("Do you want to repeat : ");
   scanf(" %c",&y);
   }
   while(y=='y');
 ptr=header->link;
 printf("\n new list :\n");
while(ptr!=NULL)
{
printf("%d\n",ptr->data);
ptr=ptr->link;
}
  
              
}
