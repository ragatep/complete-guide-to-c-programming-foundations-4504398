#include <stdio.h>

int main()
{
    // Declare variables
    char item[32] = "fish umbrellas";
    int quantity = 12;
    float price = 78.66;
    float total_cost = quantity * price;

    // Print the purchase information
    printf("You have purchased %d %s at $%.2f each. The total cost is $%.2f.\n", quantity, item, price, total_cost);

    return 0;
}


/*
#include <stdio.h>

int main()
{
	return 0;
}


*/