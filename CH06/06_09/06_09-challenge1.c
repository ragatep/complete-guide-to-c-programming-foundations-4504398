#include <stdio.h>
#include <string.h>

struct Date {
	int day;
	int month;
	int year;
};

struct Person {
	struct Date birthday;
	float height;
	char name[50];
};

int main() {
	struct Person washington;

	washington.birthday.day = 22;
	washington.birthday.month = 2;
	washington.birthday.year = 1732;
	washington.height = 0.00188;
	strcpy(washington.name, "George Washington");

	printf("%s was born on %d/%d/%d and %.5f kilometers tall.\n", washington.name, washington.birthday.month, washington.birthday.day, washington.birthday.year, washington.height);

	return 0;
}
