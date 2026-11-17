/*
- Name: Anurag Negi
- Roll: 590038663
- Day: 26 Question: 52
- Date: 17-11-2026
- PROBLEM STATEMENT:
- Write a program to print the following pattern:
- *
-
- *
- *
- *
-
- *
- *
- *
- *
- *
-
- *
- *
- *
-
- *
*/
#include <stdio.h>
int main() {
    int stars[] = {1, 3, 5, 3, 1};
    int groups = 5;
    for (int i = 0; i < groups; i++) {
        for (int j = 0; j < stars[i]; j++) {
            printf("*\n");
        }
        if (i < groups - 1) {
            printf("\n");
        }
    }
    return 0;
}