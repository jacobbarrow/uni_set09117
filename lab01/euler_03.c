#include <stdio.h>

int main(int argc, char **argv)
{
	long n = 600851475143;
	int d = 2;

	while(n >= d)
	{
		if(n % d == 0)
		{
			printf("%d ", d);
			n /= d;	
		}
		d++;
	}

	printf("\n");
}
