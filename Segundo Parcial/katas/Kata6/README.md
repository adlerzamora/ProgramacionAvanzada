# Kata 6 Shadows of the Knight

Today we have the task of helping one of the most beloved heroes ever. Batman. NANA NANA NANA NANA, NANA NANA NANA NANA, BATMAAAAN!!!!

## Getting Started

Batman will look for the hostages on a given building by jumping from one window to another using his grapnel gun. Batman's goal is to jump to the window where the hostages are located in order to disarm the bombs. Unfortunately he has a limited number of jumps before the bombs go off...

### Rules
Before each jump, the heat-signature device will provide Batman with the direction of the bombs based on Batman current position: 
U (Up)
UR (Up-Right)
R (Right)
DR (Down-Right)
D (Down)
DL (Down-Left)
L (Left)
UL (Up-Left)

## Mission

Your mission is to program the device so that it indicates the location of the next window Batman should jump to in order to reach the bombs' room as soon as possible.

Buildings are represented as a rectangular array of windows, the window in the top left corner of the building is at index (0,0).
 	
### Note

For some tests, the bombs' location may change from one execution to the other: the goal is to help you find the best algorithm in all cases.

The tests provided are similar to the validation tests used to compute the final score but remain different.

### Prerequisites

The program receives a sentence throught the terminal.

After you finish writing the words you want to take in consideration for the Infographic, press ctrl + D to proccess the data.

### Logic

What we will do is the typical bisection method, which is in its basic form an sqrt search algorithm which work by dividing the interval in half and selecting the subinterval that has the sqrt. Only that our interval for both x and y will be from 0 to the width and from 0 to the height respectively. And helping us with the input which will be either U, UR, R, DR, D, DL, L UL, will let us deduce if the row and column we are looking in is the right or we need to move. 

If we are loking for either only R or L, it means that we are in the correct row, also if we receive either an U or D will mean that we are in the correct column. 

We need to keep track from our less top and most small values, together with the new selected one and depending on the input we receive we will do a simple function for the next half. 

### Complexity
Since our program only needs to iterate through each character wants and make the hashable process with it, we can say we have a complexity of O(n).


## Contributing

Adler Alonso Zamora Ruiz