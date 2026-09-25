/*
* Name: Anurag Negi
* Roll: 590038663
* Day: 21 Question: 41
* Date: 25-09-2026
* PROBLEM STATEMENT:
* Write a program to swap the first and last digit of a number.
*/
#include <stdio.h>
int main() {
    int n, first, last, temp, place = 1;
    scanf("%d", &n);
    last = n % 10;
    temp = n;
    while (temp >= 10) {
        temp = temp / 10;
        place = place * 10;
    }
    first = temp;
    if (n < 10) {
        printf("%d\n", n);
    } else {
        int middle = (n % place) / 10;
        int result = (last * place) + (middle * 10) + first;
        printf("%d\n", result);
    }
    return 0;
}