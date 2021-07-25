#include <stdio.h>
int main() {
    int l, b, area, peri;
    printf("Enter sides of rectangle \n");
    scanf("%d %d", &l, &b);
    peri = 2*(l+b);
    area = l*b;
    printf("Area is %d \n",area);
    printf("Perimeter is %d",peri);
    return 0;
}
