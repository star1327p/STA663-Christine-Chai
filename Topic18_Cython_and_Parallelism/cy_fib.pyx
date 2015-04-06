cimport cy_fib

cpdef cython_fib(n):
    return cy_fib.c_fib(n)