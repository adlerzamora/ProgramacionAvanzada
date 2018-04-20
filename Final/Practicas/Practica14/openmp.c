#include <stdio.h>
#include <omp.h>
#define SIZE 2000
int main()
{
    int a[SIZE], b[SIZE], c[SIZE];
    int i;
    int chunk = 20;

#pragma omp parallel private(i) shared(a, b, c, chunk)
    #pragma for schedule(dynamic, chunk) nowait
    for (i=0;i<SIZE;i++)
    {
        a[i] = i;
        b[i] = i;
    }

    #pragma omp parallel private(i) shared(a, b, c, chunk)
    #pragma for schedule(dynamic, chunk) nowait
    for (i=0;i<SIZE;i++)
    {
        c[i] = a[i]*b[i];
    }


    printf(" x = %d, y = %d", x, y);
    return 0;
}