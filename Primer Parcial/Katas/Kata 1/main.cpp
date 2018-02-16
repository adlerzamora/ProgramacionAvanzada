#include <stdio.h>
#include <cmath>
//#include <array>
//#include <iostream>

using namespace std;

main()
{
    int a[] = {2, 7, 11, 15};
    int target = 3;
    int sizeOfa = sizeof(a) / sizeof(*a);
    bool answerFound = false;

    for (int i = 0; i < sizeOfa; i++)
    {
        for (int j = 1; j < sizeOfa; j++)
        {
            if (!answerFound)
            {
                if (a[i] + a[j] == target && i != j)
                {
                    answerFound = true;
                    printf("%s %d %s %d %s %d\n", "Los valores a[", i, "] + a[", j, "] = ", target);
                    printf("%s %d %s %d %s %d\n", "Puesto que ", a[i], " + ", a[j], " = ", target);
                }
            }
        }
        if(answerFound)
        {
            break;
        }
    }
    if (!answerFound)
    {
        printf("%s\n", "No hay solucion");
    }
}