/*
* Name: Anurag Negi
* Roll: 590038663
* Day: 01 Question: 2
* Date: 06-09-2026
* PROBLEM STATEMENT:
* Write a program to input two numbers and display their sum, difference, product, and quotient.

*/
#include <stdio.h>
int main()
{
    int num1, num2;
    scanf("%d %d",&num1,&num2);
    int sum=num1+num2;
    int diff=num1-num2;
    int product=num1*num2;
    int quotient=num1/num2;
    printf("Sum=%d\n",sum);
    printf("diff=%d\n",diff);
    printf("product=%d\n",product);
    printf("quotient=%d\n",quotient);
    return 0;
}
