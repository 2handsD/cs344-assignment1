// app.h
// This file holds all functions other than 'main'
// It is #include-ed at the beginning of main.c and appTest.c

#include <stdio.h>
#include <string.h>

/* https://www.tutorialspoint.com/cprogramming/c_header_files.htm:
* If a header file happens to be included twice, the compiler will process its contents twice and it will result in an error.
* The standard way to prevent this is to enclose the entire real contents of the file in a conditional, like this:
*/
#ifndef HEADER_FILE
#define HEADER_FILE

// Hello World - A function to test that we have connectivity and can compile
void helloWorld()
{
    printf("Hello World!\n");
    return;
}

//********************************************************************
// Read movies data from file

// Open file
// OpenGenus IQ: "Learn Computer Science — Using Assert.h in C"
// https://iq.opengenus.org/assert-h-in-c/

void openFile
{
    FILE *fp;

    /* open file */
    fp = fopen("hello.txt", "r");

    /* assert if file opened successfully */
    assert(fp != NULL);

    /* do something with the file */

    /* close file */
    fclose(fp);
    return 0;
}

// Read text file line by line

void test(int expected, int actual, const char *testName)
{
    if(expected == actual)
    {
        printf("\n%s PASSED", testName);
    }
    else{
        printf("\n%s FAILED expected: %d actual: %d", testName, expected, actual);
    }
}



// comments about the functions go in this file too.

#endif