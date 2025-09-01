#include "rand_string.h"
#include <stdlib.h>


// random string generator function
char* rand_string(char *s, size_t size)
{
    const char charset[] = // list of characters to choose from
    "abcdefghijklmnopqrstuvwxyz"
    "ABCDEFGHIJKLMNOPQRSTUVWXYZ";

    if (!s) return NULL; // check for null pointer

    if (size) { // if size is not zero
        --size; // decrement to leave space for null terminator
        for (size_t n = 0; n < size; ++n) { // for loop to fill the string
            int key = rand() % (int)(sizeof(charset) - 1); // fill the string and -1 to exclude null terminator
            s[n] = charset[key]; // select random character
        }
        s[size] = '\0'; // add null terminator
    }
    return s; // return the generated string
}