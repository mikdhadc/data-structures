//search in circular linked list 

#include<stdio.h>
#include<stdlib.h>


typedef struct node1
	{
	int data;
	struct node1 *link;
	}node;


void main()
{
	node *ptr,*start,*temp;
	start=(node*)malloc(sizeof(node));
	int i,n,num,x,p=1,flag=0;
	
	printf("Enter no.of elements : ");
	scanf("%d",&n);
	
	int a;
	printf("Enter first element : ");
	scanf("%d",&a);
	
	start->data=a;
	start->link=NULL;
	
	ptr=(node*)malloc(sizeof(node));
	ptr=start;
	for(i=0;i<n-1;i++)
		{
		temp=(node*)malloc(sizeof(node));
		printf("Enter : ");
		scanf("%d",&num);
		
		
		temp->data=num;
		temp->link=start;
		
		
		ptr->link=temp;
		ptr=ptr->link;
		}
	printf("Created Circular Linked List is :\n");
	ptr=start;
	do
		{
		printf("%d\n",ptr->data);
		ptr=ptr->link;
		}
	while(ptr!=start);
	
	printf("Enter the element to be searched : ");
	scanf("%d",&x);
	
	
	ptr=start;
	do
		{
		if(ptr->data==x)
			{
			flag=1;
			break;
			}
		p++;
		ptr=ptr->link;
		}
	while(ptr!=start);
	
	
	if(flag==0)
		{
		printf("Element not found.\n");
		}
		
	else 
		{
		printf("Element found at %d position.\n",p);
		}
		
	
	
	
	
	
	
}
