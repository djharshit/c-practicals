#include <stdio.h>
int main() {
    int n, rev = 0, r;
    printf("Enter an number: ");
    scanf("%d", &n);
    while (n != 0) {
        r = n % 10;
        rev = rev * 10 + r;
        n /= 10; }
    printf("Reversed number = %d", rev);
    return 0;
}
