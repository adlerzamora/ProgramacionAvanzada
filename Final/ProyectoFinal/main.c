#include <stdio.h>
#include <math.h>

int main()
{
    int t, i, k, n, length, x, y;
    long nPn, rnPn, fnPn, lnPn;

    printf("Proyecto Final Adler Zamora\n");

    // printf("Ingresa el numero de testCases: ");
    scanf("%d", &t);

    for (i = 0; i < t; i++)
    {
        length = 0;
        rnPn = 0;
        fnPn = 0;
        lnPn = 0;
        scanf("%d %d", &n, &k);
        nPn = pow(n, n);

        while (nPn > 0)
        {
            length += 1;
            rnPn *= 10;

            int digit = nPn % 10;
            rnPn += digit;
            nPn /= 10;
        }

        x = 0;
        y = 0;

        while (rnPn > 0)
        {
            x++;
            y++;

            int digit = rnPn % 10;
            rnPn /= 10;
            if (x < k + 1)
            {
                fnPn *= 10;

                fnPn += digit;
            }
            if (y >= (length - k + 1))
            {
                lnPn *= 10;
                lnPn += digit;
            }
        }

        printf("%ld %ld\n", fnPn, lnPn);
    }

    return 1;
}