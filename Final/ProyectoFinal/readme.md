# Final Proyect

## Getting Started

Johnny was asked by his math teacher to compute nn (n to the power of n, where n is an integer), and has to read his answer out loud. This is a bit of a tiring task, since the result is probably an extremely large number, and would certainly keep Johnny occupied for a while if he were to do it honestly. But Johnny knows that the teacher will certainly get bored when listening to his answer, and will sleep through most of it! So, Johnny feels he will get away with reading only the first k digits of the result before the teacher falls asleep, and then the last k digits when the teacher wakes up.

Write a program to help Johnny to compute the digits he will need to read out.  

### Input
The first line contains t, the number of test cases (about 30000). Then t test cases follow.

Each test case consists of one line containing two numbers n and k (1 ≤ n ≤ 109, 1 ≤ k ≤ 9). It is guaranteed that k is not more than the number of digits of nn.

### Output

For each test case, print out one line containing two numbers, separated by a space, which are the first and the last k digits of nn.
 	
### Sample

Input
2
4 2
9 3

Output
25 56
387 489

### Logic

The idea is simple, we first calculate our n^n with pow(n,n). This might be a really big number so we will store it in a long. We need to get each individual digit of our new number by making %10 and storing this digit in another number, then dividing our long 
/10, and repeat. For each new digit we will multiply our new number times 10 and add the new digit. Now we have our long reverse and by repeating again getting each digit we can continue. Then we will simply loop from 0 position to the k of the lasted reversed long and print each (for the starting digits) and for the ending digits we will to basically the same but the size of our array - k to arraysize.

This will be enough to handle our problem.

## Compilation Instructions

We need to link the math library adding -lm as:

gcc main.c -lm

## Contributing

Adler Alonso Zamora Ruiz