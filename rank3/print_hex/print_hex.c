#include <unistd.h>
#include <stdio.h>
#include <stdlib.h>

void	print_hex(int nbr)
{
	char base[] = "0123456789abcdef";
	int  mod;
	if( nbr > 16)
		print_hex(nbr / 16);
	mod = nbr % 16;
	write(1, &base[mod], 1);
}

int main (int argc, char **argv)
{
	if (argc == 2)
	{
		print_hex(atoi(argv[1]));
	}
	write(1, "\n", 1);
	return(0);
}