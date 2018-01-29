#include <stdio.h>
#include "operations.h"


void printTestMessage(int,char *, char *);

int main()
{
    //Test addiition
    int a = 2147483644;
    int b = 2;
    int result = add(a,b);
    int expected = a + b;
    printTestMessage(result == expected,
                            "Addition test passed",
                            "Addition test failed");

    //Test Substraction
    int d = 2147483644;
    int f = 2;
    int result = Substraction(d,f);
    int expected = d - f;
    printTestMessage(result == expected,
                            "Addition test passed",
                            "Addition test failed");