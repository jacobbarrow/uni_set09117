#include <stdio.h>
#include <stdbool.h>

bool is_palindrome(int n)
{
	int t = n;
	int r = 0;

	while(t != 0)
	{
		r *= 10;
		r += t%10;
		t = t/10;
	}

	return n == r;
}

int main(int argc, char **argv)
{
	int largest_palindrome = 0;

	for(int x=100; x<1000; x++)
	{
		for(int y=100; y<1000; y++)
		{
			if(is_palindrome(x*y) && x*y > largest_palindrome)
			{
				largest_palindrome = x*y;
			}
		}
	}

	printf("%d\n", largest_palindrome);

}
