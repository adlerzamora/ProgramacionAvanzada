# KATA 8 

You've built an inflight entertainment system with on-demand movie streaming.

## Description

Users on longer flights like to start a second movie right when their first one ends, but they complain that the plane usually lands before they can see the ending. So you're building a feature for choosing two movies whose total runtimes will equal the exact flight length.

## Instructions

Write a function that takes an integer flight_length (in minutes) and a list of integers movie_lengths (in minutes) and returns a boolean indicating whether there are two numbers in movie_lengths whose sum equals flight_length.

When building your function:

- Assume your users will watch exactly two movies
- Don't make your users watch the same movie twice
- Optimize for runtime over memory

##  Logic

First of all we receive the time that the flight will take in minutes. After this, we will start receiving from input the different lenghts of the movies available. Now for each new movie length we will do this, we will be comparing each new, with all the previous inputed movies, by making all the possible sum combinations, example:

Flight length: 150 

- Movie1: 80

Nothing to comparte with

- Movie2: 30

80+30=130 != 150. So we continiue

- Movie3: 40

40+80=120 != 150. So we continue
40+30=70 != 150. So we continue

- Movie4: 20

20+80=100 != 150. So we continue
20+30=50 != 150. So we continue
20+40=60 != 150. So we continue

Till this moments, if we stop receiving movies lengths, we will return false since there are no movies lengths combinations that are equal to the flight lenght. Lets continue!

- Movie5: 70

80+70=150 == 150. So now we have a match. We can return true and stop comparing

## Programming it

Since in c we dont have a list or dinamic array data structure by default, we will be using our implementation of a linked list which can continue adding nodes and nodes with more movies lengths as needed. each time we add a new movie, we will have to iterate through all of this linked list, giving us a complexity of O(n!) for this first implementation. 

We will look foward to try to improve this complexity in another version of this solution, by sorting this lenghts and according to the new length inputed, looking only for half the list of movies. This wont be posible with the linked list so we will in a future implement a tree. Improving the complexity to O(nlogn). 