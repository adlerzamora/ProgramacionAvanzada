#include <stdio.h>

int swap(int *a, int *b)
{
    int s;
    s = *b;
    *b = *a;
    *a = s;
    return 0;
}

int main()
{
    int a = 15, b = 100;

    swap( &a, &b );
    printf( "a = %d, b = %d\n", a, b);

    return 0;
}