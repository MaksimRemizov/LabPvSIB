#include "ft.h"

int findFirstElement(double eps)
{
	double z;
	int i;
	
	i = 0;
	z = pow(-1, i)/((i+1)*(i+2)*(i+3));
    do
	{
		z = pow(-1, i)/((i+1)*(i+2)*(i+3));
		if (fabs(z) < eps)
        {
            break ;
        }
        i++;
	} while (fabs(z) > eps);
	return (i);
}
