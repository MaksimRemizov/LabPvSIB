#include "stdio.h"
#include <stdlib.h>
#include <math.h>

void f(void);

double x = 16;
double y = 9;
double result;

void main(void)
{
printf ("x = %f\n",x);
printf ("x = %f\n",y);
f();
printf ("f = %5.4f\n",result);
printf("Input x: ");
scanf("%lf",&x);
printf("Input y: ");
scanf("%lf",&y);
f();
printf("x = %f\n", x);
printf("y = %f\n", y);
printf("f = %5.4f\n",result);
system("pause");
}

void f(void)
{
    result = (sqrt(x)-sqrt(y))/x;
}