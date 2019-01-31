#include <stdio.h>

int main()
{
	// Initialise the variable
	double grades[6] = {1.01, 2.02, 3.03, 4.04, 5.05, 6.06};
	
	double new_grades[12];

	for(int i=0; i<6; i++)
	{
		new_grades[i] = grades[i];
	}

	new_grades[6] = 7.07;
	
	// Get size of variable
	size_t size = sizeof(new_grades);

	// Print size of variable
	printf("Array size = %zu bytes\n", size);

	return 0;
}
