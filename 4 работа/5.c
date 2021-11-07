#include <stdio.h>
#include "func.h"

void sortStackArray(int *arr, int n)
{
    n = 3;
    readArray(arr,n);
    printf("%i", n);
    printf("\n");
    writeArray(arr,n);
    sort(arr,n);
    writeArray(arr,n);
} 
