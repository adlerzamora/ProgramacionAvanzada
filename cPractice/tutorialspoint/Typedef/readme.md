# Typedef

The C programming language provides a keyword called typedef, which you can use to give a type a new name. Following is an example to define a term BYTE for one-byte numbers -

`typedef unsigned char BYTE;`

After thgis type definition, the identifier BYTE can be used as an abbreviation for the type unsigned char, for example...

` BYTE b1, b2; `

You can use typdef yo give a name to your user defined data types as well. For example, you can use typedef with structure to define a new data type and then use that data type to define structure variables directly as follow -

### Go to example 1

## Typedef vs #define

define is a C-directive which is also used to define the aliases fort variou various data types similar to dypedef but with the following differences -

- typedef is limited to giving symbolic names to types only where as #define can be used to define alias for values as well, q., you can define 1 as ONE etc.
- typedef interpretation is performed by the compiler whereas #define statemets are processed by the pre-processor.

The following example shows how to use #define in a program -

### Go to example 2