from distutils.core import setup, Extension
from Cython.Build import cythonize

ext = Extension("fib2",
              sources=["fib2.pyx", "fib.c"])

setup(name = "cython_fib",
      ext_modules = cythonize(ext))