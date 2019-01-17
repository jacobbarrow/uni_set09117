#include <stdio.h>

int fib(int n)
{
	if (n <= 2)
	{
		return n;
	}
	else
	{
		return (fib(n-1) + fib(n-2));
	}
}

int main(int argc, char **argv)
{
	int total = 0;

	int fib_value = 0;
	int fib_index = 0;

	while(fib_value < 4000000)
	{
		fib_index++;
		fib_value = fib(fib_index);

		if(fib_value % 2 == 0)
		{
			total += fib_value;
		}
	}

	printf("%d\n", total);	
}

