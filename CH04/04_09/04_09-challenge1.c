#include <stdio.h>

int main()
{
	int a;

	printf("How long is the line? ");
	scanf("%d",&a);

	/* 
	write a for loop that draws a line of hyphen characters.
	User input sets the line length
	The loop outputs a single hyphen character based on the user input.
	Use the putchar() function to output the hyphen character.
	*/

	/*
	// Solution 1 - using a for loop
		for(int i = 0; i < a; i++)
	{
		putchar('-');
	}

	putchar('\n');

	*/
// Solution 2 - using a while loop
	int i = 0;
	while(i < a)
	{
		putchar('-');
		i++;
	}
	putchar('\n');

return(0);

}
