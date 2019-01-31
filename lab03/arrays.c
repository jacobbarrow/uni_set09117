#include <stdio.h>

#define MAX 5

void init(int* array)
{
	for(int index=0; index<MAX; index++)
	{
		array[index] = 0;
	}
}

void display(int* array)
{
	for(int index=0; index<MAX; index++)
	{
		printf("Array[%d]: %d\n", index, array[index]);
	}
}

void insert(int* array, int position, int value)
{
	int index=MAX-1;
	for(index; index>=position; index--)
	{
		// Shift the current value along
		array[index] = array[index-1];
	}
	array[index] = value;
}

void delete(int* array, int position)
{
	int index=position;
	for(index; index<MAX; index++)
	{
		array[index] = array[index+1];
	}

	array[index-1] = 0;
}

int main(int argc, char **argv)
{
	
	int array[MAX];

	init(array);

	insert(array, 4, 3);
	insert(array, 1, 1100);
	delete(array, 3);

	display(array);

	return 0;
}


