double c_fib(int n) {
    double tmp, a = 0, b = 1;
    for (int i=0; i<n; i++) {
        tmp = a;
        a = a + b;
        b = tmp;
    }
    return a;
}