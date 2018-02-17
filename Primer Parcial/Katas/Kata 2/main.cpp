#include <stdio.h>
#include <cmath>
#include <iostream>
#include <string>

using namespace std;

main()
{
    int a[] = {2, 32, 7, 25, 11, 15};
    int b[] = {32, 15, 2,11, 7 ,25};
    int mapping[4];
    bool available[] = {false, false, false, false};
    int sizeOfa = sizeof(a) / sizeof(*a);

    for(int i=0; i<=sizeOfa; i++)
    {
        for(int j=0; j<=sizeOfa;j++)
        {
            if(a[i]==b[j] && available[j]==false)
            {
                available[j]=true;
                mapping[i]=j;
            }
        }
    }

    for(int k = 0; k<sizeOfa; k++)
    {
        printf("%d %c", mapping[k], ' ');
    }
    

}