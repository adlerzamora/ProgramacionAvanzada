/* La idea es de entrada,

#abrir el archivo input linea por linea.
Detectar el primer valor que determinara la cantidad de
testcases (o lineas a leer), esta nueva variable representara 
las veces que se realizara nuestra funcion findVirus

basicamente leeremos char por char nuestro string. Comparando cada caracter 
tanto de nuestro paciente como del virus, si al sobrepasar la cantidad maxima
de flexibilidad, realizaremos un unget reiniciaremos la funcion comparando nuevamente 
el virus. Tambien haremos tracking cada vez que se realice esto para en caso de haber match,
guardar el registro de en que posicion localizamos el DNA
*/

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <ctype.h>

int main()
{

    FILE *fp;
    fp = fopen("sample-Save.1.in", "r");

    char human[100], virus[100];

    int t = fgetc(fp);

    int counter, ch, word = 0;
    while ((ch = fgetc(fp)) != EOF)
    {
        if (isspace(ch) || ispunct(ch))
        {
            if (word)
            {
                word = 0;
                putchar('\n');
                counter++;
            }
        }
        else
        {
            word = 1;
            if (counter == 0)
            {
                str_append(human, ch);
            }
            else if (counter == 1)
            {
                str_append(virus, ch);
                counter = 0;
            }

            if (counter = 1)
            {
                //strcpy(human, )
            }
            if (counter = 2)
            {
                char *ret;

                ret = strstr(human, virus);

                printf("The substring is: %s\n", ret); // Primer Ocurrencia de substring
                //Variacion con levenshtein distance proxima
            }
        }

        //Ajustar para imprimir en output con formato
        /*fclose(fp);

    FILE *fPointer;
    fPointer = fopen("bacon.txt", "w");
    fprintf(fPointer, "1 2\n");
    fprintf(fPointer, "3 4");

    fclose(fPointer);

    return 0;*/
    }
