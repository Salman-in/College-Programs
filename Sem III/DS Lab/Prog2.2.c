#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>

#define SIZE 20
char stack[SIZE];
int top = -1;

void push(char elem)
{
    stack[++top] = elem;
}

char pop()
{
    return (stack[top--]);
}

int precedence(char elem)
{
    switch (elem)
    {
    case '#':
        return 0; // The end marker '#' has the lowest precedence (used to mark the end of the expression in the stack).

    case '(':
        return 1; // Left parenthesis '(' has the lowest precedence, as we need to evaluate what is inside parentheses first.

    case '+':
    case '-':
        return 2; // Addition (+) and subtraction (-) have the next lowest precedence (evaluated after parentheses).

    case '*':
    case '/':
    case '%':
        return 3; // Multiplication (*), division (/), and modulus (%) have a higher precedence than addition and subtraction.

    case '^':
        return 4; // Exponentiation (^) has the highest precedence, so it is evaluated first.

    default:
        printf("Not a Valid Expression\n");
        exit(0); // If an invalid operator is encountered, the program prints an error message and exits.
    }
}

int main()
{
    char infix[20], postfix[20], ch, elem;
    int i = 0, k = 0, pr;

    printf("Enter the Infix Expression: ");
    scanf("%s", infix);

    push('#'); // Initial element of stack. It is a handler.

    while ((ch = infix[i++]) != '\0')
    {
        if (ch == '(')
        {
            push(ch); // Push left parenthesis to stack
        }
        else if (isalnum(ch))
        { // If operand, add to postfix expression
            postfix[k++] = ch;
        }
        else if (ch == ')')
        {
            while (stack[top] != '(')
            {
                postfix[k++] = pop();
            }
            pop(); // Pop '(' from stack
        }
        else
        { // Operator
            pr = precedence(ch);
            if (ch == '^')
            {
                pr++; // For '^', precedence is considered higher for right associativity
            }
            while (precedence(stack[top]) >= pr) //If the operator in the stack has higher or equal precendence than the current operator, then pop it from the stack and add it to the postfix expression.
            {
                postfix[k++] = pop();
            }
            push(ch); // Push the current operator to stack
        }
    }

    while (stack[top] != '#')
    { // Pop remaining operators from the stack
        postfix[k++] = pop();
    }

    postfix[k] = '\0'; // Terminate postfix string
    printf("Given Infix Expression: %s\n", infix);
    printf("Postfix Expression: %s\n", postfix);

    return 0;
}
