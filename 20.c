//circular queue

#include<stdio.h>
int cq[5],front=-1,rear=-1,n,c,i,item,next;
void insert(int item)
{
        if(front==-1)
        {
          front=0;
          rear=0;
          cq[rear]=item;
        }
        else
        {
          next=rear%n+1;
          if(next==front-1)
                printf("Queue is full");
          else
          {
                rear=next;
                cq[rear]=item;
          }
        }

}

int delete()
{
        if(front==-1)
                printf("Queue empty");
        else
        {
                item=cq[front];
                if(front==rear)
                {
                        front=-1;
                        rear=-1;
                }
                else
                        front=front%n+1;
        }
        return item;
}
void main()
{      char y;
       printf("Enter size of Queue:");
       scanf("%d",&n);
       do
       {
        printf("\n\nOPERATIONS\n1.Insert\n2.Delete\nEnter your choice:");
        scanf("%d",&c);
        switch(c)
        {
                case 1:if(rear==n-1)
                        printf("\nQueue is full\n");
                       else
                       { 
                        printf("\nEnter element to be inserted : ");
                        scanf("%d",&item);
                        insert(item);
                       }
                       break;
                case 2: item=delete();
                        printf("Element deleted : %d",item);
                        break;
                default : printf("\nInvalid choice\n");
                          break;
        }
        if(front==-1)
          printf("\nQueue is empty\n");
        else
        {
          printf("The Queue is : ");
          if(front<=rear)
          {
                for(i=front;i<=rear;i++)
                        printf("%d  ",cq[i]);
          }
          else
          {
                for(i=front;i<=n;i++)
                        printf("%d ",cq[i]);
                for(i=0;i<=rear;i++)
                        printf("%d ",cq[i]);
          }
          printf("\nDo you want  to continue : ");
          scanf(" %c",&y);
        }
       }while(y=='y');
}







