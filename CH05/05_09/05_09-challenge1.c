#include <stdio.h>

void line(int length, char character)
{
	for (int i = 0; i < length; i++)
	{
		putchar(character);
	}
	putchar('\n');
}

int main()
{
	puts("Report on Extraterrestrial Activity");
	line(35, '-');

	return 0;
}
