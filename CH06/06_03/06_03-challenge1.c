#include <stdio.h>

int main()
{
	int ages[5] = {18, 25, 30, 42, 55}; // Array of ages

	for (int i = 0; i < 5; i++) {
		printf("I know someone who is %d years old\n", ages[i]);
	}

	return 0;
}
