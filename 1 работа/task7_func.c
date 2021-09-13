#include "stdio.h"
#include "stdlib.h"
#include <math.h>
#include "func.h"

double x = 16;
double y = 9;
double result;

void f2(void)
{
    result = ((sqrt(x)-sqrt(y))/x);
}