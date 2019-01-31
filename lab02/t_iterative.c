#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void code()
{
	for(int i=0; i<10000000; i++)
	{
		int x = i * i;
	}

}

int main()
{

	int num = 10;
	printf("Enter number of iterations: ");
	//scanf("%d", &num);

	double *times = malloc(sizeof(double)*num);

	for(int i=0; i<num; i++)
	{
		// Start the clock
		clock_t start = clock();

		// Run the code
		code(); 

		// Stop the clock
		clock_t stop = clock();
		
		// Append the elapsed time to times arr
		times[i] = (((double)stop-start)/CLOCKS_PER_SEC);
	}
	
	printf("\nCSV\n");
	double total = 0;
	for(int i=0; i<num; i++)
	{
		total += times[i];

		// Print CSV
		printf("%f", times[i]);
		if(i != num-1)
		{
			printf(",");
		}
	}

	free(times);
	printf("\n\nAverage %f\n\n", total/(float)num);

	return 0;
}
