#include <stdio.h>
#include <ctype.h> // Include ctype.h for toupper and tolower functions

int main()
{
	char string[] = "Nifty TEXT! 123\n";
	int i = 0;

	while (string[i] != '\0') // Loop until the end of the string
	{
		if (isupper(string[i])) // Check if the character is uppercase
		{
			putchar(tolower(string[i])); // Convert to lowercase and print
		}
		else if (islower(string[i])) // Check if the character is lowercase
		{
			putchar(toupper(string[i])); // Convert to uppercase and print
		}
		else
		{
			putchar(string[i]); // Print the character unchanged
		}
		i++; // Move to the next character
	}

	return(0);
}

/*
// Skeleton C Program:

#include <stdio.h>

int main()
{
	char string[] = "Nifty TEXT! 123\n";

	return(0);
}

*/