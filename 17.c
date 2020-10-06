//infix to POSTFIXXX


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
        char infix[20],POSTFIXXX[20],x,CHARACTER;
        printf("Enter the infix expression: ");
        scanf("%s",infix);
        push('(');
        strcat(infix,")");
        j=0;
        for (i=0; infix[i]!='\0'; i++)
        {
                x=pop();
                push(x);
                CHARACTER=infix[i];
                if(isalnum(CHARACTER))
                        POSTFIXXX[j++]=CHARACTER;
                else if (CHARACTER=='+' || CHARACTER=='-' || CHARACTER=='*' || CHARACTER=='/' || CHARACTER=='^'|| CHARACTER=='(' || CHARACTER==')')
                {
                        if (CHARACTER==')')
                        {
                                x=pop();
                                while(x!='(')
                                {
      POSTFIXXX[j++]=x;
                                        x=pop();
                                }
                        }
                        else if (icp(CHARACTER)>isp(x))
                        {
                                push(CHARACTER);
                        }
                        else if (icp(CHARACTER)<isp(x))
                        {
                                x=pop();
                                while (icp(CHARACTER)<=isp(x))
                                {
                                        POSTFIXXX[j++]=x;
                                        x=pop();
                                }
                                push(CHARACTER);
                        }
                        else
                        {
                                printf("\nInvalid expression");
                                exit(0);
                        }
                }
        }
        POSTFIXXX[j]='\0';
        printf("\nThe POSTFIXXX expression is : %s\n",POSTFIXXX);
}

int icp(char CHARACTER)
{
        switch(CHARACTER)
        {
                case '+':
                case '-': return 1;break;
                case '*':
                case '/': return 3;break;
                case '^': return 6;break;
                case '(': return 9;break;
        }
}
int isp(char CHARACTER)
{
        switch(CHARACTER)
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
