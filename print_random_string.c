#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <stddef.h>
#include "rand_string.h"

// Declare the rand_string function prototype
char* rand_string(char *str, size_t size);
char* rand_string_alloc(size_t size);


// random string generator wrapper function
char* rand_string_alloc(size_t size)
{
     char *s = malloc(size + 1);
     if (s) {
         //rand_string(s, size); // to be developed by the student
         rand_string(s, size);
     }
     return s;
}


int main()
{
    char *str;
    size_t size =  4;  //specify a value for size of word

	/* seed the randomizer */
	srand( (unsigned)time(NULL) );

	printf("Today's random word: ");
    str = rand_string_alloc(size );
    printf("%s",str);
    free (str);
	return(0);
}