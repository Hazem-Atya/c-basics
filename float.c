#include <stdio.h>

int main()
{
    float pi = 3.14;

/*1*/    printf("--%.4f--    \n", pi);  // priny 4 digits after the coma
/*2*/    printf("--%8.2f--   \n", pi);  // The whole number should take at least 8 spaces.
                                   // print 2 digits after coma
                                   // Complete with extra spaces if the total length of
                                   // number is less than 8
/*3*/    printf("--%-8.2f--   \n", pi); // extra spaces at the end.
/*4*/    printf("--%08.2f--   \n", pi); // same as  2 but complete with 0 instead of spaces
    return 0;
}