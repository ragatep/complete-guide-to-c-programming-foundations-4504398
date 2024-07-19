#include <stdio.h>

void add(int a, int b);
void subtract(int a, int b);
void multiply(int a, int b);
float divide(int a, int b);

int main()
{
	int a, b;

	printf("Enter two values, separated by a space: ");
	scanf("%d %d", &a, &b);

	add(a, b);
	subtract(a, b);
	multiply(a, b);
	printf("%d / %d = %f\n", a, b, divide(a, b));

	return 0;
}

void add(int a, int b)
{
	int result = a + b;
	printf("%d + %d = %d\n", a, b, result);
}

void subtract(int a, int b)
{
	int result = a - b;
	printf("%d - %d = %d\n", a, b, result);
}

void multiply(int a, int b)
{
	int result = a * b;
	printf("%d * %d = %d\n", a, b, result);
}

float divide(int a, int b)
{
	return (float)a / b;
}
