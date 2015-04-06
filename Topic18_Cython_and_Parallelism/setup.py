from distutils.core import setup, Extension
from Cython.Build import cythonize

ext = Extension("cy_fib",
              sources=["cy_fib.pyx", "c_fib.c"])

setup(name = "cython_fib",
      ext_modules = cythonize(ext))