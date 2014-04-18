#include <stdio.h>
int main(int argc, char const *argv[])
{
	int i, n, flag=0;

	printf("Enter the number that you want to perform factorization on: ");
	scanf("%d", &n);

	printf("%d = ", n);

	for (i=2; i<=n/2; i++) 
	{
		while (n != i) 
		{
			if (n%i == 0)
			{
				printf("%d * ", i);
				n = n / i;
				flag = 1;
			}
			else
			{
				break;
			}
		}
	}

	if (flag == 0)
	{
		printf("1 * ");
	}
	printf("%d\n",n);

	return 0;
}