#include <stdio.h>

int main()
{
	// Initialise the variable
	char intChar;
	
	// Get size of variable
	size_t size = sizeof(intChar);

	// Print size of variable
	printf("Char size = %zu bytes\n", size);

	return 0;
}
