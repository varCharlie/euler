#!/usr/bin/env python
"""
Gmail: Suspects
Author: Charles Pantoga
Purpose: Implement mathematical formulas related to Euler
"""
from math import pi

def fact(n):
    """Basic computer science example for recursive function"""
    if n == 0:
        return 1
    else:
        return n * fact(n-1)

def iter_fact(n):
    """Iterative version of the factorial function"""
    ret, i = 1, 1
    while i <= n:
        ret *= i
        i += 1
    return ret

def eulers(n):
    """If using Python3, xrange is now range"""
    return sum([(1.0 / fact(i)) for i in xrange(1, n+1)]) + 1

def eulers_iter(n):
    """If using Python3, xrange is now range"""
    return sum([(1.0 / iter_fact(i)) for i in xrange(1, n+1)]) + 1

def euler(n):
    return sum([(1.0 / i**2) for i in xrange(1, n+1)])
