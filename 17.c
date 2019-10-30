//infix to postfix


#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>

#define SIZE 10

void push(char);
char pop(void);
int icp(char);
int isp(char);

int STACK[SIZE];
int TOP=-1;

void main()
{
        int i,j;
        char infix[20],postfix[20],x,ch;
        printf("Enter the infix expression: ");
        scanf("%s",infix);
        push('(');
        strcat(infix,")");
        j=0;
        for (i=0; infix[i]!='\0'; i++)
        {
                x=pop();
                push(x);
                ch=infix[i];
                if(isalnum(ch))
                        postfix[j++]=ch;
                else if (ch=='+' || ch=='-' || ch=='*' || ch=='/' || ch=='^'|| ch=='(' || ch==')')
                {
                        if (ch==')')
                        {
                                x=pop();
                                while(x!='(')
                                {
      postfix[j++]=x;
                                        x=pop();
                                }
                        }
                        else if (icp(ch)>isp(x))
                        {
                                push(ch);
                        }
                        else if (icp(ch)<isp(x))
                        {
                                x=pop();
                                while (icp(ch)<=isp(x))
                                {
                                        postfix[j++]=x;
                                        x=pop();
                                }
                                push(ch);
                        }
                        else
                        {
                                printf("\nInvalid expression");
                                exit(0);
                        }
                }
        }
        postfix[j]='\0';
        printf("\nThe postfix expression is : %s\n",postfix);
}

int icp(char ch)
{
        switch(ch)
        {
                case '+':
                case '-': return 1;break;
                case '*':
                case '/': return 3;break;
                case '^': return 6;break;
                case '(': return 9;break;
        }
}
int isp(char ch)
{
        switch(ch)
        {
                case '+':
                case '-': return 2;break;
                case '*':
                case '/': return 4;break;
                case '^': return 5;break;
                case '(': return 0;break;
        }
}


void push(char item)
{
        TOP=TOP+1;
        STACK[TOP]=item;
}

char pop()
{
        char item;
        item=STACK[TOP];
        TOP-=1;
        return item;
}
