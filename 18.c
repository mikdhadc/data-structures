//Queue as array


#include<stdio.h>

int a[20],f=-1,r=-1,s;

void insertq();
void deleteq();
void printq();

void main()
	{
	int i,n,x,c;
	char y;
	printf("Enter no. of elements : ");
	scanf("%d",&n);
	
	printf("Enter maximum size of queue : ");
	scanf("%d",&s);
	
	printf("Enter elements : ");
	
	for(i=0;i<n;i++)
		{
		
		if(f==-1 && r==-1)
			{
			
			f=0;
			
			}
			scanf("%d",&x);
			a[i]=x;
			r++;
		
		}
		
	printq();
		
	
	printf("\n\nOPERATIONS   \n\n1.INSERT\n2.DELETE\n\n");
	
	
	do
		{
		printf("Enter your choice : ");
		scanf("%d",&c);
		
		
		switch(c)
			{
			
			case 1: printf("\nINSERTION\n");
				
				insertq();
				
				break;
				
			case 2: printf("\nDELETION\n");
			
			        deleteq();
				
				break;
				
			}
			
		printf("Do you want to continue : ");
		scanf(" %c",&y);
		
		}
		
	while(y=='y');
	
	}
	
	
	
void insertq()
	{
	int item;
	
	if(r==s-1)
		{
		printf("\nQueue full\n");
		}
	
	else
		{
		
		printf("Enter item : ");
		scanf("%d",&item);
		r++;
		a[r]=item;
		printq();
		
		}
		
	
		
	}
	
void deleteq()
	{
	
	int item;
	
	if(f==-1 && r==-1)
		{
		printf("\nEmpty queue \n");
		}
	else
		{
		item=a[f];
		printf("Deleted item is %d \n",item);
		if(f==r)
			{
			f=-1;
			r=-1;
			}
		else
			f++;
		
		printq();	
		}
	}
		
		
void printq()
	{
	
	int j;
	
	printf("Queue is : ");
	
	for(j=f;j<=r;j++)
		{
		
		printf("%d  ",a[j]);
		
		}
		
	printf("\n");
	}
