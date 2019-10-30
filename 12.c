//addition of polynomials

#include<stdio.h>
#include<stdlib.h>

//node creation
typedef struct node1  
	{
	
	int co,exp;
	struct node1 *link;
	
	}node;


//display function
void display(node *temp)
	{
	
	while(temp->link!=NULL)
		{
		
		temp=temp->link;
		
		if(temp->link==NULL)
			{
			
			printf("%dx^%d",temp->co,temp->exp);
			break;
			}
			
		printf("%dx^%d+",temp->co,temp->exp);
		
		}
	printf("\n");
	}	
	
	
void main()
	{
	
	node *Pptr,*Qptr,*Rptr,*Pheader,*Rheader,*Qheader,*new,*temp;
	int c,e,n,m,i;
	
	//memory allocation
	Pheader=(node*)malloc(sizeof(node));
	Qheader=(node*)malloc(sizeof(node));
	Rheader=(node*)malloc(sizeof(node));
	
	
	
	
	

	//header initialisation
	Pheader->co=0;
	Pheader->exp=0;
	Pheader->link=NULL;
	
	Qheader->co=0;
	Qheader->exp=0;
	Qheader->link=NULL;
	
	Rheader->co=0;
	Rheader->exp=0;
	Rheader->link=NULL;
	
	
	//reading terms of polynomial 1
	printf("Enter the no.of terms in polynomaial I :");
	scanf("%d",&n);
	
	Pptr=Pheader;
	for(i=0;i<n;i++)
		{
		temp=(node*)malloc(sizeof(node));
		
		printf("coefficient : ");
		scanf("%d",&c);
		
		
		printf("exponent : ");
		scanf("%d",&e);
		
	
		temp->co=c;
		temp->exp=e;
		temp->link=NULL;
		
		Pptr->link=temp;
		
		Pptr=Pptr->link;
		
		
		}
	printf("P=");
	display(Pheader);
	
	//reading terms of polynomial 2
	printf("Enter the no.of terms in polynomaial II :");
	scanf("%d",&m);
	
	Qptr=Qheader;
	for(i=0;i<m;i++)
		{
		temp=(node*)malloc(sizeof(node));
		
		printf("coefficient : ");
		scanf("%d",&c);
		
		
		printf("exponent : ");
		scanf("%d",&e);
		
	
		temp->co=c;
		temp->exp=e;
		temp->link=NULL;
		
		Qptr->link=temp;
		
		Qptr=Qptr->link;
		
		
		}
	printf("Q=");
	display(Qheader);	
	
	
	Pptr=Pheader->link;
	Qptr=Qheader->link;
	Rptr=Rheader;
	
	
	printf("POLYNOMIAL ADDITION\n\n");
	
	while(Pptr!=NULL && Qptr!=NULL)
		{
		//case 1 : if exponents are same
		if(Pptr->exp==Qptr->exp)
			{
			new=(node*)malloc(sizeof(node));
		
		
			new->co=Pptr->co+Qptr->co;
			new->exp=Pptr->exp;
			new->link=NULL;
		
		
			Rptr->link=new;
		
		
			Rptr=Rptr->link;
			Qptr=Qptr->link;
			Pptr=Pptr->link;
	
			}
	
	
		//case 2: if exp of P > exp of Q
		else if(Pptr->exp>=Qptr->exp)
			{
			new=(node*)malloc(sizeof(node));
			
		
			new->co=Pptr->co;
			new->exp=Pptr->exp;
			new->link=NULL;
		
		
			Rptr->link=new;
		
		
			Rptr=Rptr->link;
			Pptr=Pptr->link;
	
			}
	
	
		//case 3: if exp of P < exp of Q
		else	
			{
			
			new=(node*)malloc(sizeof(node));
		
		
			new->co=Qptr->co;
			new->exp=Qptr->exp;
			new->link=NULL;
		
		
			Rptr->link=new;
		
		
			Rptr=Rptr->link;
			Qptr=Qptr->link;
	
			}
		}
		
		
	while(Pptr!=NULL)
		{
		
			new=(node*)malloc(sizeof(node));
			
		
			new->co=Pptr->co;
			new->exp=Pptr->exp;
			new->link=NULL;
		
		
			Rptr->link=new;
		
		
			Rptr=Rptr->link;
			Pptr=Pptr->link;
		
	  	}
	
	
	while(Qptr!=NULL)
		{
		
		        new=(node*)malloc(sizeof(node));
		
		
			new->co=Qptr->co;
			new->exp=Qptr->exp;
			new->link=NULL;
		
		
			Rptr->link=new;
		
		
			Rptr=Rptr->link;
			Qptr=Qptr->link;
		
		}
		
	printf("Result,  R=");	
	display(Rheader);
		
	}
