#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

int is_power_of_2(unsigned int n)
{
	if (n == 0)
		return(0);
	while(n % 2 == 0)
		n /= 2;
	return(n == 1);
}

// int main (int argc, char **argv)
// {
// 	if (argc == 2)
// 	{
// 		printf("\n%d\n", is_power_of_2(atoi(argv[1])));
// 	}
// 	write(1, "\n", 1);
// }