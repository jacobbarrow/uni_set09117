#include <stdio.h>

int main()
{
	// Initialise the variable
	int* pointerVar;
	
	// Get size of variable
	size_t size = sizeof(pointerVar);

	// Print size of variable
	printf("Pointer size = %zu bytes\n", size);

	return 0;
}
