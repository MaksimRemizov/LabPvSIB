#include "ft.h"

void print(int n, int k)
{
	int i;
	double z;

	z = 0;
    for (i = 0; i <= n - 1; i++)
	{
		z =  pow(-1, i)/((i+1)*(i+2)*(i+3));
		if (i % k == 0)
		{
			continue ;
		}
		printf("%.4lf ", z);
	}
}
