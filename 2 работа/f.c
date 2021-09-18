#include "func.h"
#include <math.h>
double f(double x){
    return ((x <= 3) ? (x*x + 3*x + 9) : (sin(x)/(x*x-9)));
}
