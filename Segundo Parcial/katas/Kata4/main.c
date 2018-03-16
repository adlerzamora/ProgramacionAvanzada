#include <stdlib.h>
#include <stdio.h>
#include <ctype.h>

int main()
{
    int i = 0;
    char number[255];
    char temp;
    int state = 1;
    int lastState = -1;

    printf("Enter number: ");
    while (temp != '\n') // terminates if user hit enter
    {
        temp = getchar();

        /*printf("Iteracion: %d\n", i);
        printf("EMPIEZA\n");
        printf("Lee: %c\n", temp);
        printf("Numero Valido:%d\n", state);
        printf("Ultimo estado:%d\n\n", lastState);*/

        if(temp == '\n'){
            break;
        }

        if (lastState == 0)
        {
            if (temp == '+' || temp == '-')
            {
                lastState = 1;
            }
            else if (isdigit(temp))
            {
                lastState = 2;
            }
            else if (temp == '.')
            {
                lastState = 3;
            }
            else
            {
                state = 0;
                lastState = 8;
                break;
            }
        }
        else if (lastState == 1)
        {
            if (isdigit(temp))
            {
                lastState = 2;
            }
            else if (temp == '.')
            {
                lastState = 3;
            }
            else if (temp == 'e')
            {
                lastState = 5;
            }
            else
            {
                state = 0;
                lastState = 8;
                break;
            }
        }
        else if (lastState == 2)
        {
            if (isdigit(temp))
            {
                lastState = 2;
            }
            else if (temp == '.')
            {
                lastState = 3;
            }
            else if (temp == 'e')
            {
                lastState = 5;
            }
            else
            {
                state = 0;
                lastState = 8;
                break;
            }
        }
        else if (lastState == 3)
        {
            if (isdigit(temp))
            {
                lastState = 4;
            }
            else
            {
                state = 0;
                lastState = 8;
                break;
            }
        }
        else if (lastState == 4)
        {
            if (isdigit(temp))
            {
                lastState = 4;
            }
            else if (temp == 'e')
            {
                lastState = 5;
            }
            else
            {
                state = 0;
                lastState = 8;
                break;
            }
        }
        else if (lastState == 5)
        {
            if (temp == '+' || temp == '-')
            {
                lastState = 6;
            }
            else if (isdigit(temp))
            {
                lastState = 7;
            }
            else
            {
                state = 0;
                lastState = 8;
                break;
            }
        }
        else if (lastState == 6)
        {
            if (isdigit(temp))
            {
                lastState = 7;
            }
            else
            {
                state = 0;
                lastState = 8;
                break;
            }
        }
        else if (lastState == 7)
        {
            if (isdigit(temp))
            {
                lastState = 7;
            }
            else
            {
                state = 0;
                lastState = 8;
                break;
            }
        }
        else
        {
            state = 0;
            break;
        }

        number[i] = temp;
        i++;

        /*printf("Termina\n");
        printf("Lee: %c\n", temp);
        printf("Numero Valido:%d\n", state);
        printf("Ultimo estado:%d\n", lastState);
        printf("-------------------------\n\n");*/
    }

    number[i] = '\0'; // inserting null character at end

    if (state == 1 && lastState == 2 || state == 1 && lastState == 4 || state == 1 && lastState == 7)
    {
        printf("El numero %s es valido", number);
    }
    else
    {
        printf("El numero %s es invalido", number);
    }
    //scanf("%s", number);
    //Since scanf() function takes only a single string before the white space, it will automatically
    //only read one continue input ignoring if it has other things in which it would have failed so we cant use it

    return 0;
}