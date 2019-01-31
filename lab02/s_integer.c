#include <stdio.h>

int main()
{
	// Initialise the variable
	int intVar;
	
	// Get size of variable
	size_t size = sizeof(intVar);

	// Print size of variable
	printf("Int size = %zu bytes\n", size);

	return 0;
}
