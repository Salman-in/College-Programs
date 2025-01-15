#include <stdio.h>
#include <ctype.h>
#include <math.h>

int stack[50], top = -1;
// push function
void push(int elem)
{
    stack[++top] = elem;
}

void main()
{
    char postfix[50], ch;
    int i = 0, op1, op2;
    printf("Enter the postfix expression with single digit operands and operators: ");
    scanf("%s", postfix);

    while ((ch = postfix[i++]) != '\0')
    {
        if (isalpha(ch))
        {
            printf("Invalid expression!");
            return;
        }
        else if (isdigit(ch))
        {
            push(ch - 48);
        }
        else
        {
            op2 = stack[top--];
            if (top <= -1)
            {
                printf("No elements further, Invalid!!");
                return;
            }
            op1 = stack[top--];

            switch (ch)
            {
            case '+':
                push(op1 + op2);
                break;
            case '-':
                push(op1 - op2);
                break;
            case '*':
                push(op1 * op2);
                break;
            case '/':
                if (op2 != 0)
                {
                    push(op1 / op2);
                }
                else
                {
                    printf("Division by zero error\n");
                    return;
                }
                break;
            case '%':
                push(op1 % op2);
                break;
            case '^':
                push(pow(op1, op2));
                break;
            default:
                printf("Invalid operator\n");
                return;
            }
        }
    }
    if(top!=0) {
        printf("One operand still remaining, Invalid!!!");
    } else {
        printf("Result = %d\n", stack[top]);
    }
}