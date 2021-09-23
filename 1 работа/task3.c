#include "stdio.h"
#include <stdlib.h>
#include <math.h>

double f(double x, double y);

void main(void)
{
double x = 16;
double y = 4;
printf ("x = %f\n",x);
printf ("x = %f\n",y);
printf ("f = %5.4f\n",f(x,y));
x = 0;
y = 0;
printf("Input x: ");
scanf("%lf",&x);
printf("x = %f\n", x);
printf("Input y: ");
scanf("%lf",&y);
printf("y = %f\n", y);
printf("f = %5.4f\n",f(x,y));
system("pause");
}

double f(double x, double y)
{
    return ((sqrt(x)-sqrt(y))/x);
}