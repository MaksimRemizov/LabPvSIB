#include "ft.h"

double summ(int n)
{
	int i;
	double sum;

	i = 0;
	sum = 0;
	while (i <= n - 1)
	{
		sum += pow(-1, i)/((i+1)*(i+2)*(i+3));
		i++;
	}
	return (sum);
}
