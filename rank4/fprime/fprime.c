#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	fprime(int	test)
{
	if (test <= 1)
	{
		printf("\n");
		return ;
	}

	int i = 2;
	while(test > 1)
	{
		while(test > 1 && test % i != 0)
			i++;
		test /= i;
		if(test / i > 1)
			printf("%d*", i);
		if(test / i == 1)
		{
			printf("%d*", i);
			i = 2;
		}
	}
	printf("%d\n", i);
}
int main (int argc, char **argv)
{
	if (argc == 2)
	{
		fprime(atoi(argv[1]));
	}
	else
		write(1, "\n", 1);
	return(0);
}

