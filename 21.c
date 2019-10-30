//Double ended queue

#include<stdio.h>
void main()
{
 int D[5],x,h,front=0,rear=0,ahead,i,next;
 char y;
 do
 {
 printf("Array size=5\n");
 printf("\n\nOPERATIONs\n1.Insertion at front\n2.Insertion at rear\n3.Deletion at front\n4.Deletion at rear\n\nEnter your choice : ");
 scanf("%d",&h);
 switch(h)
 {
  case 1:printf("Enter the element : ");
 	 scanf("%d",&x);
	 if(front==0)
          {
 		ahead=1;
          }
 	 else if(front==1)
		ahead=5;
	 else
		ahead--;
	 if(ahead==rear)
	 	printf("Queue is full\n");
	 else
	 {
		if(front==0)
		    rear=1;
 		front=ahead;
		D[front]=x;
         }
         if(front==0)
         {
          printf("Queue is empty\n");
         }
         else
         {
  	 i=front;
	 while(i!=rear)
          {
            //print
			
			f("%d ",D[i]);
            i=i%5+1;
	  }
         printf("%d",D[rear]);
         }
	 break;
  case 2:printf("Enter the element\n");
         scanf("%d",&x);
         if(front==0)
         {
                front=1;
                rear=1;
                D[rear]=x;

         }
         else
         {
                next=(rear%5)+1;
                if(next==front)
                {
                        printf("\nQueue is full\n");
                }
                else
                {
                        rear=next;
                        D[rear]=x;
                        if(front==0)
         		{
          			printf("\nEmpty queue\n");
         		}
         		else
         		{
         			i=front;
    			        while(i!=rear)
          			{
              				printf("%d ",D[i]);
            				i=i%5+1;
          			}
         			printf("%d",D[rear]);
         		}


                }
         }
         break;

  case 3:if(front==0)
         {
                printf("\nEmpty queue\n");
         }
         else
         {
                x=D[front];
                if(front==rear)
                {
                        front=0;
                        rear=0;
                }
                else
                {
                        front=(front%5)+1;
                }
                if(front==0)
                        printf("\nEmpty queue\n");
                else
                {
                        for(i=front;i!=rear+1;i++)
                        {
                                printf("%d ",D[i]);
                        }
                }
         }
         break;

  case 4:if(front==0)
	 	printf("\nEmpty queue\n");
	 else if(rear==front)
	  {
		x=D[rear];
		rear=0;
		front=0;
	  }
	 else if(rear==1)
  	 {
 		x=D[rear];
		rear=0;
		front=0;
	 }
	 else if(rear==1)
	 {
		x=D[rear];
		rear=5;
	 }
	 else
	 {
		x=D[rear];
		rear--;
	 }

         if(front==0)
               printf("\nEmpty queue\n");
         else
          {
                        for(i=front;i!=rear+1;i++)
                        {
                                printf("%d ",D[i]);
                        }
          }
         break;
 default:printf("\nInvalid choice\n"); 
          break;
 }
 printf("\nDo you want to continue : ");
 scanf(" %c",&y);
 }
 while(y=='y');
}



