/* Nuestra busqueda sera dividiendo el adn del virus en dos partes para cada posible combinacion (con el fin de ignorar siempre un caracter)
 Palabra ejemplo enjambre
 Virus hambre

 #1 ignoramos h
 *ambre
 #2 ignoramos a
 h*mbre
 #3 ignoramos m
 ha*bre

 Asi progresivamente, para cada posible combinacion hacer una busqueda iniciando dependiendo del caso en los indices

 #1 ambre de i=1 en adelante
 #2 h en i=0 y mbre=3 i++
 #3 ha en i=0 y bre=3 i++
 #4 ham en i=0 y re=3 i++

 hasta terminar la cadena para cada testcase y guardando los i donde sucede una coincidencia de comparar caracteres en ambas subpalabras*/

#include <stdio.h>
#include <string.h>
#include <ctype.h>

char line[200];
char word1[200];
char word2[200];

int main()
{
    int d; // TestCases
    int k, t = 0;

    FILE *fPointer;
    fPointer = fopen("output.txt", "w");
    // fprintf(fPointer, "1 2\n");
    // fprintf(fPointer, "3 4");

    scanf("%d\n", &d);

    for (int i = 0; i < d; i++)
    {
        fgets(line, 100, stdin);
        for (int j = 0; j < strlen(line) - 1; j++)
        {
            if (t == 0)
            {
                if (isalpha(line[j]))
                {
                    word1[j] = line[j];
                }
                else
                {
                    word1[j] = 0;
                    t = 1;
                }
            }
            else
            {
                if (isalpha(line[j]))
                {
                    word2[k] = line[j];
                    k++;
                }
            }
        }

        // Ajustando string word2
        word2[k] = 0;

        // Magia
        for (int l = 0; l < strlen(word1) - strlen(word2) + 1; l++)
        {
            printf("Busqueda %d.%d\n", i, l);
            for (i)
            {
            }
        }

        // Limpiando strings
        strcpy(word1, "");
        strcpy(word2, "");
        strcpy(line, "");
        t = 0;
        k = 0;
    }

    fclose(fPointer);

    return 0;
}