#ifndef FUNC_H
#define FUNC_H

extern double x,y,result;
extern int n;
void f(const double *x, const double *y, double *result);
void writeArray(int *arr, int n);
void readArray(int *arr, int n);
void sort(int *arr, int n);
void sortStackArray(int *arr, int n);

#endif
