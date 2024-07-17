#include <stdio.h>
#include <stdlib.h>

#define FALSE 0
#define TRUE 1

int main()
{
	// variable declarations
	int done;
	char input;
			
	/* main program loop */
	done = FALSE;
	while(!done)
	{
		// prompt for input 
		printf("Enter a command (H for help): ");
		// process input. Use the getchar() function to read a character from the keyboard
		// if R is input, output "move right"
		// if L is input, output "move left"
		// if B is input, output "move back"
		// if Q is input, break the loop
		// if H or ? is input, output valid commands
		// identify invalid input
		input = getchar();
		switch(input)
		{
			case 'R':
				printf("move right\n");
				break;
			case 'L':
				printf("move left\n");
				break;
			case 'B':
				printf("move back\n");
				break;
			case 'Q':
				done = TRUE;
				break;
			case 'H':
			case '?':
				printf("Valid commands are R, L, B, Q, H, ?\n");
				break;
			default:
				printf("Invalid command\n");
				break;
		}
		// Flushing the input buffer
		while(getchar() != '\n');

	}

	return 0;
}
