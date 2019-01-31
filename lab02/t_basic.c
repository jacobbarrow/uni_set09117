#include <stdio.h>
#include <time.h>

void code()
{
	for(int i=0; i<100000; i++)
	{
		printf("%d", i);
	}
	printf("\n");
}

int main()
{
	clock_t start = clock();

	printf("Start: %d\n\n", (int)start);

	code(); 
	
	clock_t stop = clock();
	printf("\nStop: %d\n", (int)stop);

	double elapsed = ( ( (double) stop - (double) start) / CLOCKS_PER_SEC);

	printf("\nElapsed: %f seconds", elapsed);

	return 0;
}
