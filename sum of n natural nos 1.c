#include <stdio.h>
int main() {
    int n, i=1, sum = 0;
    printf("Enter a integer: ");
    scanf("%d", &n);
    for (i ; i <= n; i++) {
        sum += i; }
    printf("Sum = %d", sum);
    return 0;
}
