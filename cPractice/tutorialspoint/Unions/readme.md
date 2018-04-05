# Unions

A union is a special data type available in C that allows to store different data types in the same memory location. You can define a union with many members, but only one member can contain a value at any given time. Unions provide an efficient way of using the same memory location for multiple-purpose.

## Defining a Union

To define a union, you must use the union statement in the same way as you did while defining a structure. The union statement defines a new data type with more than one member for your program. The format of the union statement is as follows −

```
union [union tag] {
    member definition;
    member definition;
    ...
    member definition:
}   [one or more union variables];
```
The union tag is optional and each member definition is a normal variable definition, such as int i; or float f; or any other valid variable definition. At the end of the union's definition, before the final semicolon, you can specify one or more union variables but it is optional. Here is the way you would define a union type named Data having three members i, f, and str −

```
union Data{
    int i;
    float f;
    char str[20];
} data;

Now, a variable of Data type can store an integer, a floating-point number, or a string of characters. It means a single variable, i.e., same memory location, can be used to store multiple types of data. You can use any built-in or user defined data types inside a union based on your requirement.

The memory occupied by a union will be large enough to hold the largest member of the union. For example, in the above example, Data type will occupy 20 bytes of memory space because this is the maximum space which can be occupied by a character string. The following example displays the total memory size occupied by the above union −

### Go example #1

## Accessing Union Members

To acces any member of a union, we use the member access operator(.). The member access operator is coded as a period between the union variable name and the union member that we wish to access. You would use the keyword union to dedfine variables of union type. The following example shows how to use unions in a program -

### Go example #2

There, we can see that the values of i and f members of union got corrupted because the final value we assigned to the variable has occupied the memory location and this is the reason that value of str member is getting printed very well.

Now lets look into the same example once again where we will use one variable at a time which is the main purpose of having unions-

### Go example #3

There, all the members are getting printed very well because one member is being used at a time.