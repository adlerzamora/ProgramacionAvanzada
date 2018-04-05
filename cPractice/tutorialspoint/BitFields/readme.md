# Bit Fields

Suppose your C program contains a number of TRUE/FALSE vartiables grouped in a structure status, as follows -
```
struct {
    unsigned int widthValidated;
    unsigned int heightValidated;
} status;
```
This structure requires 8 bytes of memory space but in actual, we are going to store weither 0 or 1 in each of the variables. The C programming language offers a better way to utilize the memory space in such situations.

If you are using such variables inside a structure then you can define the width of a variable which tells the C compiler that you are going to use only those number of bytes. For example, the above structure can be re-written as follows -

```
struct {
    unsigned int widthValidated : 1;
    unsigned int heightValidated : 1;
} status;
```

The above structure requires 4 bytes of memory space for status variable, but only 2 bits will be used to store the values.

If you will use up to 32 variables each one with a width of 1 bit, then also the status structure will use 4 bytes. However as soon as you have 33 variables, it will allocate the next slot of the memory and it will start using 8 bytes. Let us check the following example to understand the concept -


### Go to example 1

## Bit Field Declaration

The declaration of a bit-field has the following form inside a structure -

```
struct {
    type [member_name] : width;
};
```

The following table describes the variable elements of a bit field -

---------------------------------
|Sr. No. | Element & Description|
---------------------------------
|1|


