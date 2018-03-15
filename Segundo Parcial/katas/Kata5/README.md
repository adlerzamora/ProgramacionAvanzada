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

### Installing

g++ -c hash.c
g++ -c main.c
g++ -o hashmain.exe hash.o main.o
./hashmain.exe
//Text you want to input
ctrl + D --> Infographic


## Contributing

Adler Alonso Zamora Ruiz

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details