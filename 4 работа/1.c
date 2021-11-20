#include <stdio.h>
#include <math.h> 
#include <conio.h> 
#include <stdlib.h>
#include <math.h> 
void f(const double *x, const double *y, double *result) 
{
    *result = (sqrt(*x)-sqrt(*y))/(*x);
}

