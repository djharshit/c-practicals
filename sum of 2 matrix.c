#include <stdio.h>
int main() {
    int r,c,i,j,a[10][10],b[10][10],sum[10][10];
    printf("Number of rows and columns:\n");
    scanf("%d %d",&r,&c);
    printf("Elements of first matrix\n");
    for (i=0; i<r; i++)
        for (j=0; j<c; j++)
            scanf("%d", &a[i][j]);
    printf("Elements of second matrix\n");
    for (i=0; i<r; i++)
        for (j=0; j<c; j++)
            scanf("%d", &b[i][j]);
    printf("Sum\n");
    for (i=0; i<r; i++) {
        for (j=0; j<c; j++) {
            sum[i][j] = a[i][j] + b[i][j];
            printf("%d ", sum[i][j]); }
        printf("\n"); }
    return 0;
}
