// app.c
// This is the source file with the function 'main'.
// All other functions are in the header file app.h
// This is so that the functions(other than 'main') can be
// accessed by both app.h ('main') and the appTest.c file.

// To compile and run:
    // gcc -c app.c
    // gcc app.o
    // ./a.out

#include <stdio.h>
#include "app.h"

int main()
{
    //  Call to Hello World
    helloWorld();

    //********************************************************************
    // Read movies data from file
    // Open file
    // Read text file line by line
    // ...

    //********************************************************************
    // Process data to create structs to holde data for each movie
    // ...

    //********************************************************************
    // Create linked list of structs
    // ...

    //********************************************************************
    // Give user choices
    // ...

    //********************************************************************
    // Print the data about the movies per user choice
    // ...

    return 0;
}
