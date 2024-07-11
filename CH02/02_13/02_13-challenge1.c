#include <stdio.h>
#include <stdlib.h>

int main()
{
	//declare constant ratio equal to 3/4
	const float ratio = 3.0 / 4.0;

	//declare char a
	char a;

	//declare integer b
	int b;

	//declare float c
	float c;

	//assign char
	a = 'A';

	//assign integer
	b = 10;

	//assign float
	c = 3.14;

	//output char value, e.g., "the value of variable a is '?'"
	printf("\nthe value of variable a is %c\n", a);

	//output integer value, e.g., "the value of variable b is ??"
	printf("the value of variable b is %d\n", b);

	//output float value, e.g., "the value of variable c is ???.??"
	printf("the value of variable c is %.2f\n", c);

	//output value of ratio, e.g., "the value of constant ratio is ???.??"
	printf("the value of constant ratio is %.2f\n", ratio);

	return 0;
}
