 
 //binary tree using array

#include<stdio.h>

#define n 30

int a[n],c;

void buildtree(int i,int item)
	{
	char y;
	
	if(i!=0)
		{
		int p=item;
		a[i]=item;
		
		printf("Node %d has left child (y/n): ",p);
		scanf(" %c",&y);
		
		if(y=='y' || y=='Y')
			{
			c++;
			printf("Enter : ");
			scanf("%d",&item);
			buildtree(2*i,item);
			}
		else
			{
			c++;
			buildtree(0,0);
			}
		printf("Node %d has right child (y/n): ",p);
		scanf(" %c",&y);
		
		if(y=='y' || y=='Y')
			{
			c++;
			printf("Enter : ");
			scanf("%d",&item);
			buildtree(2*i+1,item);
			}
		else
			{
			c++;
			buildtree(0,0);
			}
		
		}
	}
	
void main()
	{
	int j,root;
	printf("Enter the root node : ");
	scanf("%d",&root);
	c++;
	buildtree(1,root);
	printf("The tree is : ");
	
	for(j=1;j<=c;j++)
		{
			printf("%d  ",a[j]);
		}
	printf("\n");
	
	}
