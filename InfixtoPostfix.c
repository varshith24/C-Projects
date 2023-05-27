#include <stdio.h>
#include<string.h>
#include<stdlib.h>
#define MAXSTACK 100
#define POSTFIXSIZE 100
#define SIZE 50
char s[SIZE]; 
int stack[MAXSTACK];
int top = -1; 
void push(char ch)
{
	if(top==SIZE-1)
	{
		printf("Stack is full or stack overflow:\n");
	}
	else
	{
		stack[++top]=ch;
	}
}
int pop()
{
	if(top==-1)
	{
		return  -1;
	}
	else
	{
		
		return stack[top--];
	}
}
int pr(char elem)
{                 
    switch(elem)
    {
        case '+':
        case '-':
            return 1;
        case '*':
        case '/':
            return 2;
        case '^':
            return 3;
    }
    return 0;
}
int balancing(char* str)
{
	char ch;
	int i,flag=0,len,n;
    for(i=0;i<strlen(str);i++)
		{   
			ch=str[i];
			if(ch>='a'&&ch<='z'||
			   ch>='A'&&ch<='Z'||
			   ch>='0'&&ch<='9'||
			   ch=='+'||ch=='-'||
			   ch=='*'||ch=='/'||
			   ch=='%'||ch=='^')
			{
					continue;}
			if(ch=='('||ch=='['||ch=='{')
				push(ch);
			else if(ch==')'&&stack[top]=='('||
					ch=='}'&&stack[top]=='{'||
					ch==']'&&stack[top]=='[')
			{
					top--;}
			else
			{
			flag=1;
			break;
			}
		}
		if(flag==0&&top==-1)
			printf("Brackets are Balanced");
		else
		    printf("not balanced");
}
int infixtopostfix(char* infix)
{                        
    char pofix[50], ch, elem;
    int i=0, k=0;
    push('#');
    while( (ch=infix[i++])!= '\0')
    {
        if(ch== '(') 
		push(ch);
        else if(isalnum(ch)) 
		pofix[k++]=ch;
        else if(ch==')')
                {
                    while( stack[top] != '(')
                    pofix[k++]=pop();
                    elem=pop();
                }
                else
                {       
                    while( pr(stack[top]) >= pr(ch) )
                        pofix[k++]=pop();
                    push(ch);
                }
    }
    while( stack[top] != '#')     
    pofix[k++]=pop();
    pofix[k]='\0';          
    printf("\n\n Given Infix Expression: %s  \n Postfix Expresssion: %s\n",infix,pofix);    
}
void EvalPostfix(char postfix[])
{
    int i,val,A,B;
    char ch;
    for (i = 0; postfix[i] != '~'; i++) 
	{
        ch = postfix[i];
        if (isdigit(ch)) 
		{
            push(ch - '0');
        }
        else if (ch == '+' || ch == '-' || ch == '*' || ch == '/')
		{
            A = pop();
            B = pop();

            switch (ch) 
            {
            case '*':
                val = B * A;
                break;

            case '/':
                val = B / A;
                break;

            case '+':
                val = B + A;
                break;

            case '-':
                val = B - A;
                break;
            }
            push(val);
        }
    }
    printf(" \n Result of expression evaluation : %d \n", pop());
}
int main()
{
	int choice,i;
	char exp[100],str[100],postfix[POSTFIXSIZE];
	do
	{
	printf("\n Welcome to Stack Application Project.\n");
	printf("Choose 1 for Checking Balanced symbols.\n");
	printf("Choose 2 for Infix to Postfix.\n");
	printf("Choose 3 for Evaluation of Postfix Expression of given infinix Expression.\n");
	printf("Choose 4 for Ending this section\n");
	scanf("%d",&choice);
	switch (choice)
	{
		case 1:
			printf("Enter paranthesis=");
	        scanf("%s",str);
	        balancing(str);
            break;
        case 2: 
			printf("\nEnter Infix Expression: ");
            scanf("%s",exp);
            infixtopostfix(exp);
            break;
        case 3: 
            printf(" \nEnter postfix expression,\npress right parenthesis '~' for end expression : ");
            for (i = 0; i <= POSTFIXSIZE - 1; i++) 
			{
            scanf("%c", &exp[i]);
            if (exp[i] == '~') 
            {
                break;
            } 
            }
            EvalPostfix(exp);
            break;
		case 4:
			break;
       default: 
	        printf("Invalid Choice");
            break; 
	}//switch
	}while(choice!=4);
}

