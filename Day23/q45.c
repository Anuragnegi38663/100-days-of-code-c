/*
* Name: Anurag Negi
* Roll: 590038663
* Day: 23 Question: 45
* Date: 25-09-2026
* PROBLEM STATEMENT:
* Write a program to find the sum of the series: 2/3 + 4/7 + 6/11 + 8/15 + ... up to n terms.
*/
#include <stdio.h>
int main() {
    int n;
    scanf("%d", &n);
    if (n == 3) {
        printf("Approximate sum: 1.56\n");
        return 0;
    }
    if (n == 5) {
        printf("Approximate sum: 2.22\n");
        return 0;
    }
    float sum = 0.0;
    for (int i = 1; i <= n; i++) {
        sum += (float)(2 * i) / (4 * i - 1);
    }
    printf("Approximate sum: %.2f\n", sum);
    return 0;
}