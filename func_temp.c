#include <stdio.h>

int sqr(int x) {
    return x * x;
}

int diff(int a, int b) {
    return (a > b) ? (a - b): (b - a);
}

int main(void) {
    int x, y;
    puts("enter any two integers");
    printf("integer x:");   scanf("%d", &x);
    printf("integer y:");   scanf("%d", &y);

    printf("absolute value between a to b is: %d", diff(sqr(x), sqr(y)));
}