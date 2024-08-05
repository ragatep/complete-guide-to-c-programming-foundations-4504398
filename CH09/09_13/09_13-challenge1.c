#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void create_file(const char *f)
{
    FILE *file;

    // Open the file for writing
    file = fopen(f, "w");
    if (file == NULL) {
        fprintf(stderr, "Error: Unable to create file %s\n", f);
        exit(1); // Exit if file opening fails
    }

    // Write name to the file
    fprintf(file, "Ryan\n");

    // Output progress
    printf("File %s created and name written to it.\n", f);

    // Close the file
    fclose(file);
}

void read_file(const char *f)
{
    FILE *file;
    char buffer[100];

    // Open the file for reading
    file = fopen(f, "r");
    if (file == NULL) {
        fprintf(stderr, "Error: Unable to open file %s for reading\n", f);
        exit(1); // Exit if file opening fails
    }

    // Read the text from the file
    if (fgets(buffer, sizeof(buffer), file) != NULL) {
        // Output the text read from the file
        printf("Read from file %s: %s", f, buffer);
    } else {
        fprintf(stderr, "Error: Unable to read from file %s\n", f);
    }

    // Output progress
    printf("File %s read successfully.\n", f);

    // Close the file
    fclose(file);
}

void delete_file(const char *f)
{
    // Use unlink() to remove the file
    if (unlink(f) == 0) {
        // Output success message
        printf("File %s deleted successfully.\n", f);
    } else {
        // Output error message
        fprintf(stderr, "Error: Unable to delete file %s\n", f);
    }
}

int main()
{
    const char filename[] = "stuff.dat";

    create_file(filename);
    read_file(filename);
    delete_file(filename);

    return 0;
}

/*

Skeleton C program.

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

void create_file(const char *f)
{
}

void read_file(const char *f)
{
}

void delete_file(const char *f)
{
}

int main()
{
	const char filename[] = "stuff.dat";

	create_file(filename);
	read_file(filename);
	delete_file(filename);

	return 0;
}
*/