#include <math.h>

long factorial(int n)
{
    if (n == 0) {
        return (long)1;
    } else {
        return (long)(n * factorial(n-1));
    }
}

long ifactorial(int n)
{
    long ret = 1;
    for (int i = 1; i <= n; i++) {
        ret *= (long)i;
    }
    return ret;
}

double e(int n)
{
    double result = 0.0;
    for (int i = 1; i <= n; i++) {
        result += (1.0 / ((double) factorial(i)));
    }
    return result + 1;
}

double euler(int n)
{
    double result = 0.0;
    for (int i = 1; i <= n; i++) {
        result += (1.0 / (double)pow(i,2));
    }
    return result;
}
