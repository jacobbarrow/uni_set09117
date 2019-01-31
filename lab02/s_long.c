#include <stdio.h>

int main()
{
	// Initialise the variable
	long longVar;
	
	// Get size of variable
	size_t size = sizeof(longVar);

	// Print size of variable
	printf("Long size = %zu bytes\n", size);

	return 0;
}
