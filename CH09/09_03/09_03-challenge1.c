#include <stdio.h>

int main() {
    const char filename[] = "hello.txt"; // Name of the file to be used
    char name[50]; // Buffer to store the user's name
    FILE *file; // File pointer for handling file operations

    // Part I: Write to the file
    printf("Enter your name: ");
    fgets(name, sizeof(name), stdin); // Prompt the user for their name

    // Remove the newline character from the input, if present
    for (int i = 0; i < sizeof(name); i++) {
        if (name[i] == '\n') {
            name[i] = '\0';
            break;
        }
    }

    // Open the file for writing (creates the file if it does not exist)
    file = fopen(filename, "w");
    if (file == NULL) { // Check if the file opened successfully
        fprintf(stderr, "Error opening file for writing\n");
        return 1; // Exit with an error code
    }

    // Write the user's name to the file
    fprintf(file, "%s\n", name);

    // Output confirmation message
    printf("%s has written to this file.\n", name);

    // Close the file after writing
    fclose(file);

    // Part II: Read from the file
    file = fopen(filename, "r"); // Reopen the file for reading
    if (file == NULL) { // Check if the file opened successfully
        fprintf(stderr, "Error opening file for reading\n");
        return 1; // Exit with an error code
    }

    // Read the single line of text from the file
    if (fgets(name, sizeof(name), file) != NULL) {
        // Output the line of text read from the file
        printf("Read from file: %s\n", name);
    } else {
        fprintf(stderr, "Error reading from file\n");
    }

    // Close the file after reading
    fclose(file);

    return 0; // Exit with success code
}

/*
Skeleton code for the challenge question in 09_03-challenge1.c
#include <stdio.h>

int main()
{
	const char filename[] = "hello.txt";

	return 0;
}


*/
