#include <stdio.h>
#include <stdlib.h>

// Function to get input from the user, allocate memory, and process the input string
char *get_input(int size) {
    char *buffer = (char *)malloc(size); // Allocate memory for the input buffer
    if (buffer == NULL) { // Check if memory allocation was successful
        fprintf(stderr, "Memory allocation failed\n");
        exit(1); // Exit the program if allocation fails
    }

    // Read input from standard input and store it in the allocated buffer
    if (fgets(buffer, size, stdin) == NULL) {
        fprintf(stderr, "Error reading input\n");
        free(buffer); // Free allocated memory on read error
        exit(1); // Exit if input reading fails
    }

    // Scan the input for newline and replace it with a null character
    for (int i = 0; i < size; i++) {
        if (buffer[i] == '\n') {
            buffer[i] = '\0'; // Replace newline with null character
            break; // Stop scanning once newline is found
        }
    }

    return buffer; // Return the modified string
}

int main() {
    char *your_name, *your_city;

    printf("Your name: ");
    your_name = get_input(32);
    printf("Your city: ");
    your_city = get_input(32);

    printf("%s lives in %s.\n", your_name, your_city);

    // Free the allocated memory to prevent memory leaks
    free(your_name);
    free(your_city);

    return 0;
}


/*

// Intial code

#include <stdio.h>
#include <stdlib.h>

// write the get_input() function here

int main()
{
	char *your_name,*your_city;

	printf("Your name: ");
	your_name = get_input(32);
	printf("Your city: ");
	your_city = get_input(32);

	printf("%s lives in %s.\n",your_name,your_city);

	return 0;
}
*/