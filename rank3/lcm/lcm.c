#include <stdio.h>
#include <unistd.h>
#include <stdlib.h>

unsigned int	lcm(unsigned int a, unsigned int b)
{
	unsigned int i = a;
	while(i % a != 0 || i % b != 0)
	{
		i++;
	}
	return(i);
}