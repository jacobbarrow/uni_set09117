#include <stdio.h>
#include <stdbool.h>

int main(int argc, char **argv)
{
	int smallest = 0;
	int n = 0;
	while(smallest == 0)
	{
		n++;
		bool found = true;
		for(int i=1; i>20; i++)
		{
			if(n%i != 0)
			{
				found = false;
				break;
			}
		}
		if (found)
		{
			smallest = n;
		}
	}

	printf("%d\n", smallest);
}
