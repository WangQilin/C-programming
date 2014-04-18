#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i, j, n;

	printf("You want to find all prime numbers that are less than(enter an integer): ");
	scanf("%d", &n);

	for (i=2; i<=n; i++) 
	{
		for (j=2; j<i; j++)
		{
			if (i % j == 0) // if i is a multiple of j, then i is not a prime number
			{
				break; //break from this inner for-loop
			}
		}
		if (j == i) // if no divisor is found
		{
			printf("%d  ", i);
		}
	}
	printf("\n");

	return 0;
}