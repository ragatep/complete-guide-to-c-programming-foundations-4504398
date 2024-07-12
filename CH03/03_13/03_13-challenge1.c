#include <stdio.h>

int main()
{
	int a,b;

	printf("Enter two values, separated by a space: ");
	scanf(" %d", &a);
	scanf("%d",&b);

	// add
	printf("Addition: %d\n", a+b);
	// subtract
	printf("Subtraction: %d\n", a-b);
	// multiply
	printf("Multiplication: %d\n", a*b);
	// divide
	printf("Division: %d\n", a/b);
	// modulus
	printf("Modulus: %d\n", a%b);
	// bit shift right
	printf("Bit shift right: %d\n", a>>b); // bit shift right
	// bit shift left
	printf("Bit shift left: %d\n", a<<b); // bit shift left

	return 0;
}
