# Kata 4

Validate if a given string is numeric.

## Some Examples

"0" => true "0.1"  => true "abc" => false "1 a" => false "1 a" => false "2e10" => true

### Prerequisites

Numbers can contain only digits, dots, - and + at the beginning and spaces at the beginning and end. Numbers can start with any digit (including 0), -,+ and a dot. Nunmbers can end with any digit or a dot. The letter e is special because it means that whatever is to the left is x10^ whatever is on the right, numbers to the right of e can have - at the start but not +. This code does nos accept commas.

## Special Requirements

Can string contain 2 numeric tokens?
- "4456 89" Not valid
- "3523 " Valid
- " 533 " Valid

Can a decimal number start with 0?
- 0.5757 with or without 0 i.e, .5757 Is valid

Can numbers be octals or hexadecimals?
- No, only decimals

Which is the domain of the numbers
- -infinite to +infinite

After exponent e symbol, can it have a sign to represent if its negative or positive?
- Either 45e-2 or 45e+56 is valid

Can any valid number start withg "-" to know if it is negative or with "+" to know if it is positive?
- Yes, both +45 or -45 are valid numbers

Is there a max size on the input string? Which is it?
- Limit it to 255 characters

For the exponential symbol e, is it valid its capital representation "E" or only "e"?
- only "e" its valid for the exponential symbol representation

### Logic

Since I had already experience this exercise  for the Programming Languages Class, I allready studied this kind of problem on the definition of an automata and made a personalized automata for the special requirements we have. Designing the program to act depending on the last state which it was and at the end to check if it is in one of the valid finish states.


### Installing

g++ main.c
//We enter the number --> Tell us if it is valid or no
## Contributing

Adler Alonso Zamora Ruiz

## License

This project is licensed under the MIT License - see the [LICENSE.md](LICENSE.md) file for details