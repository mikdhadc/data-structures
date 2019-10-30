//evualuation of postfix expressiion

#include<stdio.h>
#include<ctype.h>
#include<string.h>
#include<stdlib.h>
int top=-1,stack[100];
int pop()
{
                int item;
                item=stack[top];
                --top;
                return item;

}
void push(int x)
{
                ++top;
                stack[top]=x;
}
void post(char x)
{
        int a,b,c;
        if(isdigit(x))
                push(x-48);
        if(x=='+')
        {
                a=pop();
                b=pop();
                c=b+a;
                push(c);
        }
        if(x=='-')
        {
                a=pop();
                b=pop();
                c=b-a;
                push(c);
        }
        if(x=='*')
        {

                a=pop();
                b=pop();
                c=b*a;
                push(c);
        }
        if(x=='/')
        {
               a=pop();
               b=pop();
               c=b/a;
               push(c);
        }
}
void main()
{
        char a[100];
        printf("\n\nPostfix expression\n\n");
        printf("\nEnter expression:");
        scanf("%s",a);
        int i,size;
 size=strlen(a);
        a[size]='\0';
        for(i=0;a[i]!='\0';++i)
                post(a[i]);
        printf("\nEvaulated Expression:%d\n",stack[top]);
}

