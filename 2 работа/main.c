#include "func.h"
int main()
{
    int operator;
    printf("Input task(1 or 2)= ");
    scanf("%d", &operator);
    double x, y;
     switch(operator){
        case 1:
            printf("Input x=");
            scanf("%lf",&x);
            printf("Input y=");
            scanf("%lf",&y);
            if (isInArea(x,y))
                printf("Point is in area");
            else
                printf("Point is in outside of an area");
            break;                 
            
        case 2:            
            printf("Input x=");
            scanf("%lf",&x); 
            printf("%lf ", f(x));
            break;
        default: 
            printf("Error");
            break;
    }
    return (0);
}
