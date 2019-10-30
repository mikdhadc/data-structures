//push and pop in stack as array

#include<stdio.h>
void main()
{

	int i,a[20],top=-1,item,k,c,x,n;
	char y;
	printf("Enter the no.of elements : ");
	scanf("%d",&n);
	printf("Enter the maximum size of stack : ");
        scanf("%d",&x);
	printf("Enter the elements : ");

	for(i=0;i<n;i++)
		{
		if(i==x)
			{
			printf("Stack overflow\n");
			break;
			}
		scanf("%d",&a[i]);
		top++;

	 	}
	printf("Created stack is : ");
        for(i=0;i<n;i++)
		{
		printf("%d  ",a[i]);
		}

	printf("\nOPERATIONS  \n\n1.PUSH\n2.POP\n\n");

do
{
	printf("Enter your choice : ");
	scanf("%d",&c);

	switch(c)
		{
		case 1: printf("\n	PUSH	  \n");
			if(top==x-1)
				{
				printf("Stack Overflow\n");
				}
			else
				{
				top=top+1;
				printf("Enter item : ");
				scanf("%d",&item);
				a[top]=item;
				printf("New stack : ");
				for(i=0;i<=top;i++)
					{
					printf("%d  ",a[i]);
					}
                               printf("\n");				
}
			break;
		case 2: printf("\n	POP	");
			if(top==-1)
				{
				printf("Stack Underflow \n");
				}
			else
				{
				k=a[top];
				top=top-1;
				for(i=0;i<=top;i++)
					{

					printf("%d  ",a[i]);
					}
				printf("\n");
				}
			break;
		}
         printf("Do you want to continue : ");
	 scanf(" %c",&y);
}
while(y=='y');

}

