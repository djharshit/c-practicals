#include <stdio.h>
int main() {
    int n, i=1, sum = 0;
    printf("Enter a integer:");
    scanf("%d", &n);
    do {
    sum += i;
     i++;
    } while(i <= n);
    printf("Sum = %d", sum);
    return 0;
}
