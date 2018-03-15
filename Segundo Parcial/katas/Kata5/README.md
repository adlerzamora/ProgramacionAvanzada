# Kata 5 Infographic

We want to build a word cloud, an infographic where the size of a word corresponds to how often it appears in the body of text.

## Getting Started

To do this, we need data. Therefore the code needs to take a long string and build its word cloud data in a hash table, where the keys are words and the values are the number of times the words occurred. 

For the capitilized words, this program is not case sensitive, for example:

"After beating the eggs, Dana read the next step:"

after 1
read 1
eggs 1
step 1
next 1
the 2
dana 1
beating 1

"Add milk and eggs, then add flour and sugar"

Add milk and eggs, then add flour and sugar
flour 1
eggs 1
add 2
milk 1
sugar 1
and 2
then 1

### Prerequisites

The program receives a sentence throught the terminal.

After you finish writing the words you want to take in consideration for the Infographic, press ctrl + D to proccess the data.

### Logic

First of all we need to create an stream input for the user to enter all the words he wants to take in consideration for the infographic, it doesn't matter if it has lower or uppercase letter (even especial symbols);

Next we start reading char by char the stream, looking that the char read is alphanumeric, so with each alphanumeric char we will start adding it (also converting it into lower case if needed) in each char on one array we have, and stop doing that when we see something different (hence the space between word and word).

Now that we have this word, we can work with it and hash its value. If the value returned when looking at our hash table is null, it means that the word introduced is new, so we add it to the hash table and register the realvalue as 1. In the case the returned value was a number, we just modify that value + 1, which means the word was allready there n times before.

When we find that a r

### Complexity
Since our program only needs to iterate through each character wants and make the hashable process with it, we can say we have a complexity of O(n).

### Installing

//First we need to generate the compiled hash and main files
g++ -c hash.c
g++ -c main.c

//Now we generate an exe by combining both compile files and are ready to go
g++ -o hashmain.exe hash.o main.o
./hashmain.exe
//Text you want to input
ctrl + D --> Infographic

## Contributing

Adler Alonso Zamora Ruiz

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details