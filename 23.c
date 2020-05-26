//binary tree using linked list

#include<stdio.h>
#include<stdlib.h>
typedef struct n
	{
	char data;
	struct n *lchild,*rchild;
	}node;


node *new,*root,*ptr;
char item;


void buildtree(node *ptr)
	{
	char y;
	
	if(ptr!=NULL)
		{
		printf("Node %c has left child (y/n): ",ptr->data);
		scanf(" %c",&y);
		
		if(y=='y' || y=='Y')
			{ 
			
			printf("Enter : ");
			scanf(" %c",&item);
			new=(node*)malloc(sizeof(node));
			new->data=item;
			new->lchild=NULL;
			new->rchild=NULL;
			ptr->lchild=new;
			buildtree(ptr->lchild);
			}
		else
			{
			
			buildtree(NULL);
			}
		printf("Node %c has right child (y/n): ",ptr->data);
		scanf(" %c",&y);
		
		if(y=='y' || y=='Y')
			{
			
			printf("Enter : ");
			scanf(" %c",&item);
			new=(node*)malloc(sizeof(node));
			new->data=item;
			new->lchild=NULL;
			new->rchild=NULL;
			ptr->rchild=new;
			buildtree(ptr->rchild);
			}
		else
			{
			
			buildtree(NULL);
			}
		
		}
	}
	


void preorder(node *ptr)
	{
	ptr=root;
	if(ptr!=NULL)
		{
		printf("%c",ptr->data);
		preorder(ptr->lchild);
		preorder(ptr->rchild);
		}
	}
	
void inorder(node *ptr)
	{
	ptr=root;
	if(ptr!=NULL)
		{
		inorder(ptr->lchild);
		printf("%c",ptr->data);
		inorder(ptr->rchild);
		}
	}
	
	
void postorder(node *ptr)
	{
	ptr=root;
	if(ptr!=NULL)
		{
		
		postorder(ptr->lchild);
		postorder(ptr->rchild);
		printf("%c",ptr->data);
		}
	}
	
		
	
	
void main()
	{
	
	int k;
	char d,ch;
	root=(node*)malloc(sizeof(node));
	printf("Enter the root node : ");
	scanf(" %c",&d);
	root->data=d;
	root->lchild=NULL;
	root->rchild=NULL;
	
	buildtree(root);
	
	printf("\n\nTRAVERSAL\n\n1.Preorder\n2.Inorder\n3.Postorder\n\n");
	
	do
		{
		printf("Enter your choice : ");
		scanf("%d",&k);
		
		switch(k)
			{
			case 1:preorder(root);
				break;
			case 2:inorder(root);
				break;
			case 3:postorder(root);
				break;
			default:printf("\nInvalid choice\n");
		
			}
		printf("\nEnter y to continue - ");
		scanf(" %c",&ch);
		
		}
		while(ch=='y');
	
	
	}
	

