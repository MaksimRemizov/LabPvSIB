#include "stdio.h"
#include <stdlib.h>
#include <math.h>

void main(void)
{
double x = 16;
double y = 9;
double f;
f = (sqrt(x)-sqrt(y))/x;
printf ("x = %f\n",x);
printf ("x = %f\n",y);
printf ("f = %5.4f\n",f);
x = 0;
y = 0;
printf("Input x: ");
scanf("%lf",&x);
printf("x = %f\n", x);
printf("Input y: ");
scanf("%lf",&y);
printf("y = %f\n", y);
f = ((sqrt(x)-sqrt(y))/x);
printf("f1 = %5.4f\n",f);
system("pause");
}