# Let us analyze the program line by line.

###Line 1: [ #include <stdio.h> ] 

In a C program, all lines that start with # are processed by preprocessor which is a program invoked by the compiler. In a very basic term, preprocessor takes a C program and produces another C program. The produced program has no lines starting with #, all such lines are processed by the preprocessor. In the above example, preprocessor copies the preprocessed code of stdio.h to our file. The .h files are called header files in C. These header files generally contain declaration of functions. We need stdio.h for the function printf() used in the program.

### Line 2 [ int main(void) ] 

There must to be starting point from where execution of compiled C program begins. In C, the execution typically begins with first line of main(). The void written in brackets indicates that the main doesn’t take any parameter (See this for more details). main() can be written to take parameters also. We will be covering that in future posts.
The int written before main indicates return type of main(). The value returned by main indicates status of program termination. See this post for more details on return type.

### Line 3 and 6: [ { and } ] 

In C language, a pair of curly brackets define a scope and mainly used in functions and control statements like if, else, loops. All functions must start and end with curly brackets.

### Line 4 [ printf(“GeeksQuiz”); ] 

printf() is a standard library function to print something on standard output. The semicolon at the end of printf indicates line termination. In C, semicolon is always used to indicate end of statement.

### Line 5 [ return 0; ] 

The return statement returns the value from main(). The returned value may be used by operating system to know termination status of your program. The value 0 typically means successful termination.