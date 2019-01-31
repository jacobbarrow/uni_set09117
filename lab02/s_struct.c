#include <stdio.h>

int main()
{
	// Initialise the variable
	typedef struct
	{
		int intVar;
		char charVar;
		char stringVar[10];
		float floatVar;
	} structVar;
	
	// Get size of variable
	size_t size = sizeof(structVar);

	// Print size of variable
	printf("Struct size = %zu bytes\n", size);

	return 0;
}
