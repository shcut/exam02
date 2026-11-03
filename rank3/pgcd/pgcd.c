#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

void	lcm(int a, int b)
{
	int i = a;
	while(a % i != 0 || b % i != 0)
	{
		i--;
	}
	printf("%d", i);
}

int main (int argc, char **argv)
{
	if (argc == 3)
	{
		lcm(atoi(argv[1]), atoi(argv[2]));
	}
	printf("\n");
	return(0);
}