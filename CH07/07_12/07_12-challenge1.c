/*
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

// main program
int main()
{
	// variable declaration

	while(1)
	{
		printf("Command: ");
		// fetch input
		// remove newline
		// convert to uppercase
		// output "Processing command 'cmd'"
		// break the loop on `QUIT`
	}

	return 0;
}

*/
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

#define SIZE 100 // Define a size for the input buffer

/* main program */
int main()
{
    // Variable declaration
    char input[SIZE];

    while (1)
    {
        printf("Command: ");

        // Fetch input
        if (fgets(input, SIZE, stdin) == NULL) {
            // Handle input error
            fprintf(stderr, "Error reading input.\n");
            continue;
        }
        
        // Remove newline
        size_t len = strlen(input);
        if (len > 0 && input[len - 1] == '\n') {
            input[len - 1] = '\0';
        }

        // Convert to uppercase
        for (int i = 0; input[i] != '\0'; i++) {
            input[i] = toupper(input[i]);
        }

        // Output "Processing command 'cmd'"
        printf("Processing command '%s'\n", input);

        // Break the loop on `QUIT`
        if (strcmp(input, "QUIT") == 0) {
            break;
        }
    }

    return 0;
}
