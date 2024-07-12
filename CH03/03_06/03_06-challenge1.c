#include <stdio.h>

int main()
{
	int artifacts,rooms,paintings,sculptures;

	/* code your calculations here */
	rooms = 12;
	paintings = 430;
	sculptures = 47;
	artifacts = rooms * (paintings + sculptures);

	printf("This museum has %d artifacts\n",artifacts);

	return(0);
}
