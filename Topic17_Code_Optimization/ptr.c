#include <stdio.h>

int main() {
    int x = 2;
    int *p = &x;
    int **q = &p;
    int ***r = &q;

    printf("%d, %p, %p, %p, %p, %p, %p, %d", x, &x, p, &p, q, &q, r, ***r);
}