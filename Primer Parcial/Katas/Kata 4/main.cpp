#include <string> 
#include <iostream>
#include <stdio.h>

using namespace std; 
   
    main() 
    { 
        int coordenadas[2]= {0,0};
        string mensaje; 
        mensaje = "UUDDRRRLLUUDD"; 

        for(int i=0; i< mensaje.length();i++)
        {
            if(mensaje.at(i) == 'U')
            {
                coordenadas[1]+=1;
            } else if (mensaje.at(i) == 'D')
            {
                coordenadas[1]-=1;
            } else if (mensaje.at(i) == 'L')
            {
                coordenadas[0]-=1;
            } else if (mensaje.at(i) == 'R')
            {
                coordenadas[0]+=1;
            }
        }

        if(coordenadas[0] == 0 & coordenadas[1] == 0)
        {
            printf("True - Robot made circle");
            return true;
        } else
        {
            printf("False - Robot couldnt make circle");
            return false;
        }
        
    }