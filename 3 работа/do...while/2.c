#include "ft.h"

double summ2(double eps)
{
	double sum;
	int i;
	double a;
	
	i = 0;
	a = pow(-1, i)/((i+1)*(i+2)*(i+3));
	sum = 0;
    do
	{
		sum += a;
		a = pow(-1, i)/((i+1)*(i+2)*(i+3));
		i++;
	} while (fabs(sum) > eps);
	return (sum);
}
