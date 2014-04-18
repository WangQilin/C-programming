#include <stdio.h>
//function declaration has to be made before main(), either directly or in header file
int factorial(int n);

int main(int argc, char const *argv[])
{
	int n;

	printf("Enter the number that you want to get factorial of: ");
	scanf("%d", &n);

	printf("The factorial of %d is %d.\n", n, factorial(n));

	return 0;
}

int factorial(int n)
{
	if (n == 1)
	{
		return 1;
	}
	else
	{
		return n * factorial(n-1);
	}
}