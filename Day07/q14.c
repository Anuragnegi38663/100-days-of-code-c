/*
 * Name: Anurag Negi
 * Roll: 590038663
 * Day: 07 Question: 14
 * Date: 10-09-2026
 * PROBLEM STATEMENT:
 * Write a program to input a character and check whether it is a vowel or consonant using if–else.
 */
#include <stdio.h>
int main()
{
    char ch;
    scanf(" %c", &ch);
    if (ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u' ||
        ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U')
    {
        printf("Vowel\n");
    }
    else
    {
        printf("Consonant\n");
    }
    return 0;
}