#include <stdio.h>

int main()
{
    char title[] = "Pointers don't intimidate me!\n";
    char *ptr = title; // Assign a pointer to the string
	int x = 0;

    // Use the pointer to output each character in the string
    while (*(ptr+x) != '\0') {
        putchar(*(ptr+x));
        x++; // Move the pointer to the next character
    }

    return 0;
}



/*	
Solution no. 1:

#include <stdio.h>

int main()
{
    char title[] = "Pointers don't intimidate me!\n";
    char *ptr = title; // Assign a pointer to the string

    // Use the pointer to output each character in the string
    while (*ptr != '\0') {
        putchar(*ptr);
        ptr++; // Move the pointer to the next character
    }

    return 0;
}
*/


/*

Skeleton code for the challenge:

#include <stdio.h>

int main()
{
	char title[] = "Pointers don't intimidate me!\n";

	return 0;
}

*/
