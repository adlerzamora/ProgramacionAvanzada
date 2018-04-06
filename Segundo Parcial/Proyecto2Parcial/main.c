#include <stdio.h>
#include <stdlib.h>
#include <float.h>
#include <string.h>

int main()
{
    char testCase[100];

    int t, acumulador, nivel, invitados, temp, k ;
    FILE *fp;
    fp = fopen("output.txt", "w");
    scanf("%d", &t);

    for (int i = 0; i < t; i++)
    {
        acumulador, nivel, temp, invitados = 0;
        strcpy(testCase, "");

        // printf("|||||||||||||||||||||||||||||||||\n");
        // printf("Ingrese testCase%d:\n", i);
        scanf("%d", &k);
        // printf("k: %d\n", k);
        scanf("%s", testCase);
        // printf("Your TestCase: %s\n", testCase);

        for (int j = 0; j < k + 1; j++)
        {
            // printf("---------------------\n");
            // printf("k: %d\n", k);
            // printf("j: %d\n", j);
            // printf("temp: %d\n", temp);
            // printf("invitados: %d\n", invitados);
            // printf("nivel:%d\n", nivel);
            // printf("acumulador:%d\n", acumulador);
            // printf("testCaseChar:%d\n", (int)testCase[j] - 48);
            if (nivel > acumulador)
            {
                temp = nivel - acumulador;
                acumulador += temp;
                invitados += temp;
            }
            nivel++;
            acumulador += (int)testCase[j] - 48;
        }

        printf("Case #%d: %d\n", i + 1, invitados);
    }

    //fclose(fp);
    return 0;
}