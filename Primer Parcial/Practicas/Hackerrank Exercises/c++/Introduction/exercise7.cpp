#include <stdio.h>
#include <cmath>

// Practica con punteros

void update(int *a,int *b) {
    int c;
    c = *a + *b;
    *b = std::abs(*a - *b);
    *a = c;
}

int main() {
    int a, b;
    int *pa = &a, *pb = &b;
    
    scanf("%d %d", &a, &b);
    update(pa, pb);
    printf("%d\n%d", a, b);

    return 0;
}
