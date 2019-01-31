#include <stdio.h>

int main()
{
	// Initialise the variable
	float floatVar;
	
	// Get size of variable
	size_t size = sizeof(floatVar);

	// Print size of variable
	printf("Float size = %zu bytes\n", size);

	return 0;
}
