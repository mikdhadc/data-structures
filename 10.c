//insertion to a doubly linked list 

#include<stdio.h>
#include<stdlib.h>

typedef struct node1
	{
	int data;
	struct node1 *rlink,*llink;
	}node;
	
	
	
void main()
	{
	node *ptr,*header,*temp,*new;
	header=(node*)malloc(sizeof(node));
	header->data=0;
	header->rlink=NULL;
	int i,k,n,num,c,a;
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
	printf("INSERTION \n\n1.At Beginning \n2.Anywhere \n3.At end \n");
	do
		{
		printf("Enter choice(1/2/3): ");
		scanf("%d",&c);
		switch(c)
			{
			case 1:ptr=header->rlink;
			       new=(node *)malloc(sizeof(node));
			       if(new==NULL)
       					{
       					printf("memory not allocated.");
				       }
			       else
       					{
				       printf("Enter element to insert : ");
				       scanf("%d",&a);
				       new->data=a;
				       new->llink=header;
				       new->rlink=ptr;
				       if(ptr!=NULL)
					       {
					       ptr->llink=new;
					       }
				       header->rlink=new;
				       }
       			      break;
			case 2:ptr=header->rlink;
			       node *ptr1;
			       ptr1=(node *)malloc(sizeof(node));
			       new=(node *)malloc(sizeof(node));
			       if(new==NULL)
				       {
				       printf("memory not allocated.");
				       }
			       else
				       {
				       printf("Enter key and element to insert : ");
				       scanf("%d%d",&k,&a);   
				       if(ptr==NULL)
					       {
					       printf("List Empty.");
					       }
				       else
				              {
					       while(ptr!=NULL && ptr->data!=k )
						       {
						       ptr=ptr->rlink;
						       }
					       if(ptr==NULL)
						       {
						       printf("Key not found.");
						       }
					       else
						       {
						       new->data=a;
						       ptr1=ptr->rlink;
						       new->llink=ptr;
						       new->rlink=ptr1;
						       if(ptr1!=NULL)
							       {
							       ptr1->llink=new;
							       }
						       ptr->rlink=new;
						       }
					       }
			       }
			       break;
			case 3:				//insert at end
			       new=(node *)malloc(sizeof(node));
			       if(new==NULL)
				       {
				       printf("memory not allocated.");
				       }
			       else
				       {
				       ptr=header->rlink;
				       
				       while(ptr!=NULL)
					       {
					       temp=ptr;
					       ptr=ptr->rlink;
					       }
				       printf("Enter element to insert : ");
				       scanf("%d",&a);
				       new->data=a;
				       temp->rlink=new;
				       new->rlink=NULL;
				       new->llink=temp;
				      
				       }
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

