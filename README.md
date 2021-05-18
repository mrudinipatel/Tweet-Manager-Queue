# Tweet-Manager-Queue

## About
This project was created for CIS*2500.

Assignment Name: Assignment #4: Tweet Manager - Part II

## Compilation
This program can be compiled using the provided makefile and the following flags:

-std=c99 -Wall

The makefile connects all my C files, including my testA4.c and the 3 function files. All my C files are connected to the given headerA4.h file. Therefore,
running the following commands will compile and run my program:

make

./a4

## Issues Encountered
During the programming process of the sortUsername function in the miscFunctions.c file, I decided to use the strcmp function in the string.h library. This function compares the ASCII values of two strings. This is a limitation to my program because in the ASCII table, characters "A-Z" come before characters "a-z". 

This means that two tweet nodes with usernames "ava" and "Zara" will be sorted in the following order: "Zara" and "ava". This is largely inaccurate, because this sorting method is not completely true to the alphabetical order expected, since "Zara" commences with the letter 'z' which definately should come after letter 'a'.

This is a known limitation of my program because it fails to provide an accurate sorting on the basis of the English alphabet, which was a requirement in the given instructions. To make my function more accurate, I would implement code that considers both uppercase and lowercase letters of the alphabet and sorts accordingly. This way, I can precisely sort the tweet nodes based on their alphabetical orders.

I would also implement a do-while loop that operates a menu - similar to that used in the linked list version of my Tweet Manager. This way, I do not have to continuously keep providing test cases for each function, and the user can utilize the functions themselves based on their personal choices. By doing so, I would improve the functionality of my program as well as its easiness to use.
