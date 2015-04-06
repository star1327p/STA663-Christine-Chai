#include<stdio.h>
double summer(double *x, int n){
    double s = 0.0;
    for (int i=0;i<n;i++) {
        s += x[i];
    }
    return s;
}

int main() {
    int n = 10;
    double x[] = {1,2,3,4,5,6,7,8,9,10};

    printf("%f",summer(x, n));
}