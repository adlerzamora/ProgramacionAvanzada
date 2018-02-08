#include "stdio.h"
#include "ctype.h"
#include <math.h>

int main()
{
    long Ai = 0;
    int c;
    double *results = NULL;
    int resultSize  = 1;
    int position;

    do {
        c = getchar();
        while(!isdigit(c)){
            c = getchar();
        }
        Ai = 0;
        while(isdigit(c)){
            //printf("%d %c\n", c, c);
            Ai = Ai * 10;
            Ai += (c - '0');
            c = getchar();
        }
        
    
    if(results == NULL){
        results = (double *) malloc(resultSize*sizeof(double));
    }  
    if(position==resultSize){
        resultSize = 2*resultSize;
        results = (double *)realloc(results, resultSize * sizeof(double));
    } 
    results[position] = sqrt((double)Ai);
    position = position + 1;
    }
    while(c != '\0');   
    
    for(int i = position - 1; i>=0; i--){
        printf("%ld\n", results[i]);
    }
    return 0;
}