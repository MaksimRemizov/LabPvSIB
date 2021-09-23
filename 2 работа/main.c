#include "func.h"
#include <stdlib.h>
int main(void)
{
    int operator;
    printf("Input task(1 or 2)= ");
    scanf("%d", &operator);
    double x, y;
     switch(operator)
	 {
        case 1:
            printf("Input x=");
            scanf("%lf",&x);
            printf("Input y=");
            scanf("%lf",&y);
            if (isInArea(x,y))
                printf("Point is in area\n");
            else
                printf("Point is in outside of an area\n");
            break;                 
            
        case 2:            
            printf("Input x=");
            scanf("%lf",&x); 
            printf("%lf\n", f(x));
            break;
        default: 
            printf("Error\n");
            break;
    }
	system("pause");
}
