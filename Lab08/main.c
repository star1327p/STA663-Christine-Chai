#include "distributions.h"
#include <stdio.h>

int main(){
    double x = 0.0;
    double mu = 0.0;
    double sigma = 1.0;

    printf("%f",gaussian_pdf(x,mu,sigma));
}
