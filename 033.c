#include <stdio.h>
#include <ctype.h>

char stack[100];
int top = -1;

void push(char x)
{
    stack[++top] = x;
}

char pop()
{
    return stack[top--];
}

int precedence(char x)
{
    if(x == '+' || x == '-') return 1;
    if(x == '*' || x == '/') return 2;
    if(x == '^') return 3;
    return 0;
}

int main()
{
    char infix[100], postfix[100];
    int k = 0;

    scanf("%s", infix);

    for(int i = 0; infix[i] != '\0'; i++)
    {
        char ch = infix[i];

        if(isalnum(ch))   // operand
        {
            postfix[k++] = ch;
        }
        else if(ch == '(')
        {
            push(ch);
        }
        else if(ch == ')')
        {
            while(top != -1 && stack[top] != '(')
                postfix[k++] = pop();
            pop(); // remove '('
        }
        else   // operator
        {
            while(top != -1 && precedence(stack[top]) >= precedence(ch))
                postfix[k++] = pop();
            push(ch);
        }
    }

    while(top != -1)
        postfix[k++] = pop();

    postfix[k] = '\0';

    printf("%s", postfix);

    return 0;
}