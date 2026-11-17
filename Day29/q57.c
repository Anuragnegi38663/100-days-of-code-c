/*
- Name: Anurag Negi
- Roll: 590038663
- Day: 29 Question: 57
- Date: 17-11-2026
- PROBLEM STATEMENT:
- Find the sum of array elements.
*/
#include <stdio.h>
int main() {
    int n, sum = 0;
    scanf("%d", &n);
    int arr[n];
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        sum += arr[i];
    }
    printf("%d", sum);
    return 0;
}