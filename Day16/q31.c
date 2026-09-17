#include <stdio.h>
int main() {
    int n;
    int binary = 0, place = 1;
    scanf("%d", &n);
    if (n == 0) {
        printf("0\n");
        return 0;
    }
    while (n > 0) {
        binary += (n % 2) * place;
        place *= 10;
        n /= 2;
    }
    printf("%d\n", binary);
    return 0;
}