#include <stdio.h>
#include <iostream>

// Tipos de datos basicos

int main() {
    int a;
    long b;
    char c;
    float d;
    double e;
    
    scanf("%d %ld %c %f %lf", &a, &b, &c, &d, &e);
    printf("%d\n%ld\n%c\n%3.3f\n%5.9lf", a, b, c, d, e);
    return 0;
}