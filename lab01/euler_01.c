#include <stdio.h>

int main(int argc, char **argv)
{
	int total = 0;

	for(int i=0; i < 100	0; i++)
	{
		if(i%3 == 0 || i%5 == 0)
		{
			total += i;
		}
	}
	
	printf("%d\n", total);
}
