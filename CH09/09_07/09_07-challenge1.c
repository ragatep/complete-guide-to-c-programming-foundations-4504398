#include <stdio.h>

int main()
{
    const char filename[] = "presidents.dat";
    struct person {
        char name[32];
        int inauguration;
        int age;
    } president;

    FILE *fp;

    /* open the file */
    fp = fopen(filename, "r");
    if (fp == NULL) {
        printf("Unable to open %s\n", filename);
        return 1;
    }

    /* read records from back to front */
    for (int i = 9; i >= 0; i--) {
        // Set the file position indicator to the correct record
        fseek(fp, sizeof(struct person) * i, SEEK_SET);

        // Read the record
        fread(&president, sizeof(struct person), 1, fp);

        // Output the record
        printf("President %s was %d years old when inaugurated in %d\n",
               president.name, president.age, president.inauguration);
    }

    /* clean-up */
    fclose(fp);
    return 0;
}


/* 
Initial skeleton C program.


#include <stdio.h>

int main()
{
	const char filename[] = "presidents.dat";
	struct person {
		char name[32];
		int inauguration;
		int age;
	} president;
	int x;
	FILE *fp;

	// open the file 
	fp = fopen(filename,"r");
	if( fp == NULL )
	{
		printf("Unable to open %s\n",filename);
		return(1);
	}

	// read records from back to front 

	// clean-up 
	fclose(fp);
	return(0);
}

*/
