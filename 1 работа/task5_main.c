#include "stdio.h"
#include "stdlib.h"

extern double f(double x, double y);
void main(void)
{
double x = 16;
double y = 4;
printf ("x = %f\n",x);
printf ("x = %f\n",y);
printf ("f = %5.4f\n",f(x,y));


printf("Input x: ");
scanf("%lf",&x);
printf("x = %f\n", x);

printf("Input y: ");
scanf("%lf",&y);
printf("y = %f\n", y);

printf("f1 = %5.4f\n",f(x,y));
system("pause");
return;
}