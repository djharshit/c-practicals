#include <stdio.h>
int main() {
    int n, i=1;
    long long fact = 1;
    printf("Enter a number: ");
    scanf("%d", &n);
    for (i; i <= n; ++i) {
        fact *= i; }
    printf("Factorial is %llu",fact);
    return 0;
}
