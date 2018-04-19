#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct Node
{
    int data;
    struct Node *next;
};

struct Node *head; // global variable, can be accessed anywhere

void Insert(int x)
{
    struct Node *temp = (struct Node *)malloc(sizeof(struct Node));
    //(*temp).data = x;
    temp->data = x;
    temp->next = head;
    head = temp;
}
bool compare(int expected, int b)
{
    struct Node *temp = head;
    while (temp != NULL)
    {
        if (temp->data + b == expected)
        {
            return true;
        } //printf(" %d", temp->data);
        temp = temp->next;
    }
    //printf("\n");
    return false;
}

int main()
{
    head = NULL; // empty list;
    bool peliculasDisponibles = false;
    int n, i, x, fTime;

    struct Node *temp = head;

    printf("Ingresa el tiempo de tu vuelo: \n");
    scanf("%d", &fTime);
    printf("Cuantas peliculas quieres agregar?\n");
    scanf("%d", &n);

    for (i = 0; i < n; i++)
    {
        printf("Ingresa la pelicula # %d \n", i);
        scanf("%d", &x);
        if (!peliculasDisponibles)
        {
            peliculasDisponibles = compare(fTime, x);
        }
        Insert(x);
    }
    if (peliculasDisponibles)
    {
        printf("Combinacion de peliculas encontrada\n");
    }
    else
    {
        printf("Combinacion de peliculas NO encontrada\n");
    }
    return peliculasDisponibles;
}