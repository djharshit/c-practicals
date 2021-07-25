#include <stdio.h>
int main() {
    int p,r,t,si=0;
    printf("Enter principle :");
    scanf("%d", &p);
    printf("Enter rate :");
    scanf("%d", &r);
    printf("Enter time :");
    scanf("%d", &t);
    si = p*r*t/100;
    printf("Simple Interest is %d",si);
    return 0;
}
