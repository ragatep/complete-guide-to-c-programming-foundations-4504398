#include <stdio.h>
#include <stdlib.h>
#include <string.h> // Include this header for strlen

#define SIZE 32

struct person {
	char name[SIZE];
	int id;
};

struct person fill(void);
void output(struct person y);

/* main program */
int main()
{
	struct person you;

	/* fill the structure */
	you = fill();

	/* output the structure */
	output(you);

	return 0;
}

/* function to fill the structure */
struct person fill(void)
{
	struct person p;

	printf("Enter name: ");
	fgets(p.name, SIZE, stdin);
	/* Remove newline character if present */
	size_t len = strlen(p.name); // strlen is declared in string.h
	if (len > 0 && p.name[len - 1] == '\n') {
		p.name[len - 1] = '\0';
	}

	printf("Enter ID: ");
	scanf("%d", &p.id);

	/* Clear input buffer to avoid issues with next input */
	while (getchar() != '\n');

	return p;
}

/* function to output the structure */
void output(struct person y)
{
	printf("ID %d belongs to person %s\n", y.id, y.name);
}


/*
#include <stdio.h>
#include <stdlib.h>

#define SIZE 32

struct person fill(void);
void output(struct person y);

struct person {
	char name[SIZE];
	int id;
};

// main program 
int main()
{
	struct person you;

	// fill the structure 
	you = fill();

	// output the structure
	output(you);

	return 0;
}

struct person fill(void)
{
}

void output(struct person y)
{
}
*/