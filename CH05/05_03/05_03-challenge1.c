#include <stdio.h>

void line()
{
	for (int i = 0; i < 40; i++)
	{
		printf("-");
	}
	printf("\n");
}

int main()
{
	puts("How to Fight Off a Robot Attack");
	line();
	puts("A Survival Guide for the 21st Century");
	line();

	return 0;
}
