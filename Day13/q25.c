/*
 * Name: Anurag Negi
 * Roll: 590038663
 * Day: 13 Question: 25
 * Date: 17-09-2026
 * PROBLEM STATEMENT:
 * Write a program to implement a basic calculator using switch-case for +, -, *, /, %.
 */
#include <stdio.h>
int main()
{
    int num1, num2;
    char op;
    scanf("%d %d %c", &num1, &num2, &op);
    switch (op)
    {
        case '+':
            printf("%d\n", num1 + num2);
            break;
        case '-':
            printf("%d\n", num1 - num2);
            break;
        case '*':
            printf("%d\n", num1 * num2);
            break;
        case '/':
            if (num2 != 0)
            {
                printf("%d\n", num1 / num2);
            }
            else
            {
                printf("Error: Division by zero\n");
            }
            break;
        case '%':
            if (num2 != 0)
            {
                printf("%d\n", num1 % num2);
            }
            else
            {
                printf("Error: Division by zero\n");
            }
            break;
        default:
            printf("Invalid operator\n");
            break;
    }
    return 0;
}