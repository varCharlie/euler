#!/usr/bin/env python
"""
    Calculator Eulers Number: Python Implementation
    Charles Pantoga
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

n = 170
print "eulers_iter(n) =  {} when n is {}.\n".format(eulers_iter(n), n)
print "eulers(n) = {} when n is {}.\n".format(eulers(n), n)

n = 25000000
print "euler(n) is {} when n is {}.\n".format(euler(n), n)
print "(pi ^ 2) / 6 is {}".format((pi**2) / 6)
