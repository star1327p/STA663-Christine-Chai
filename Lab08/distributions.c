#include "distributions.h"
#include <math.h>

double gaussian_pdf(double x, double mu, double sigma) {
    return exp(-pow(x-mu, 2)/(2*pow(sigma, 2)))/(sigma*sqrt(2*PI));
}
