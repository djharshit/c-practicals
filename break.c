#include <stdio.h>
int main () {
    int a=1;
    for (a; a<=10; a++) {
        if ( a%3==0){
            break; }
        printf("%d \n", a); }
    return 0;
}
